#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int a,b,c;cin>>a>>b>>c;
    int x=min(b,c/2) ;
    b-=x;
    int ans=x*3 + min(a, b/2) * 3;
    cout<<ans<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}