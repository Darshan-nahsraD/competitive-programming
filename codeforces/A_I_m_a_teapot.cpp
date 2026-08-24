#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    
    string s;
    cin>>s;
    
    if(n<3) {cout<<"No"<<endl; return;}
    else{
        if(s[n-1]=='a' && s[n-2]=='e' && s[n-3]=='t') {cout<<"Yes"<<endl; return;}
    }
    cout<<"No"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}