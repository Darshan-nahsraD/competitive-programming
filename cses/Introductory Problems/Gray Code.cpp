#include <iostream>
using namespace std;
#include <vector>

// vector<string>result;

vector<string>helper(int n, vector<string > ans){
    if (n==1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    
    vector<string>s=helper(n-1, ans);
    vector<string>result;
    
    for (int i=0;i<s.size();i++){
        result.push_back("0"+ s[i]);
    }
    for (int i=s.size()-1;i>=0;i--){
        result.push_back("1"+ s[i]);
    }
    return result;
}



int main(){
    int n;
    cin>>n;
    vector<string>ans;
    vector<string> final =helper(n,ans);
    for (auto ele: final){
        cout<<ele<<endl;
    }
    return 0;
}