#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int count=1;
    vector<string> v;
    v.push_back(s);

    while (next_permutation(s.begin(),s.end())){
            count++;
            v.push_back(s);
    }
    
    cout<<count<<endl;
    for(auto ele : v){
        cout<<ele<<endl;
    }
        
}
    
    
    
