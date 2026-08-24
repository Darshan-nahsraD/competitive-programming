#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int i=0;
    int cnt=min(count(s.begin(),s.end(),'0'),count(s.begin(),s.end(),'1'));
    // cout<<cnt<<endl;
    if(cnt&1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
}
int main (){
    int t;cin>>t;
    while(t--){
        solve();

    }
}