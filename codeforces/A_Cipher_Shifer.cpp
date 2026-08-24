#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'

void solve(){
    int n;cin>>n;
    string s ;
    cin>>s;
    int i=0;
    while(i<n){
        int st=i;
        cout<<s[i++];
        while(s[i++]!=s[st]);
    }
    cout<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //solve();

    int t;cin>>t;
    while(t--){
        solve();
    }
}