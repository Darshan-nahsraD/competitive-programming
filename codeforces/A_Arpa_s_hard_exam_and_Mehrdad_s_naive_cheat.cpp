#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    if(n==0) {cout<<1<<endl;return;}
    n%=4;
    if(n==0) cout<<6<<endl;
    else if(n==1) cout<<8<<endl;
    else if(n==2) cout<<4<<endl;
    else cout<<2<<endl;
}

signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();

}