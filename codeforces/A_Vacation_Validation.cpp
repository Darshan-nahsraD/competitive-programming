#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, l, r;
    cin>>n>>l>>r;
    string s ;cin>>s;

    for(int i=l-1;i<r;i++){
        if(s[i]=='x') {cout<<"No";return;}
    }
    cout<<"Yes";
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}