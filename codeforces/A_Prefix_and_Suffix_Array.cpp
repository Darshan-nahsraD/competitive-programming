#include<bits/stdc++.h>
using namespace std;
// using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<string> v;
    for(int i=0;i<2*(n-1);i++) {
        string s;cin>>s;
        if(s.size()==n-1) v.push_back(s);
    }
    reverse(v[0].begin(),v[0].end());
    if(v[0]==v[1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}