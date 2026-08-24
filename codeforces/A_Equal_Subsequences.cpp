#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;

    for(int i=0;i<n;i++){
        if(k) {cout<<1;k--;}
        else cout<<0;
    }
    cout<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}