#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    string s="";
    while(k--){
        s+=char(k+97);
    }
    
    while(n--){
        cout<<s;
    }
    cout<<endl;
}
signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
}