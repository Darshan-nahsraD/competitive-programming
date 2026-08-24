#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

bool fun(int a, int b){
    if(a>b) swap(a, b);
    // cout<<a<<b<<endl;
    if(((a*2 + 2) >= b)) return true;
    else return false;
}

void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(fun(a, b)==false) cout<<"NO"<<endl;
    else{
        c=c-a; d=d-b;
        if(fun(c, d)==false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}