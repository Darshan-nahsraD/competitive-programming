#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int x,y;cin>>x>>y;
    bool win=1;
    n--;
    while(n--){
        int a, b;cin>>a>>b;
        if(a>=x && b>=y) win=0;

    }
    if(win) cout<<x<<endl;
    else cout<<-1<<endl;
}
signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t ;cin>>t;while(t--){
        solve();
    }   
    
}
    
