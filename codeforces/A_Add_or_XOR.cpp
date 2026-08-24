#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, m, x ,y;
    cin>>n>>m>>x>>y;

    if(n-1>m) {cout<<-1<<endl;return;}
    if(n-1==m) {
        if((n^1)==m){cout<<y<<endl;return;}
        else {cout<<-1<<endl; return;}
    }

    if(x<=y) cout<<(m-n)*x<<endl;
    else{
        int odd=0, even=0;
        int total=b-a-1;
    }
    

    
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}