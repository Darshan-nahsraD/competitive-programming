#include <iostream>
#include <vector> 
using namespace std;

int main(){
    long long  n;
    cin>>n;
    if (n==1) cout<<"1" ;
    else if (n<=3) cout<< "NO SOLUTION";
    else if (n==4) cout<< " 3 1 4 2";
    
    else{
        vector<long long> odd;
        vector<long long> even;
        for (int i=1;i<=n;i++){
            if (i%2==0) even.push_back(i);
            else odd.push_back(i);
            
        }
        vector<long long> ans;
        for (auto ele : odd){
            ans.push_back(ele);
        }
        for (auto ele : even){
            ans.push_back(ele);
        }
        for (auto ele : ans){
            cout<<ele<<" ";
        }
    }

    return 0;
}












