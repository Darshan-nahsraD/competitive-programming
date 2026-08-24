#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string s=to_string(n);
    int m=s.size()-1;
    string a="1";
    
    while(m--){
        a+="0";
    }
    cout<<n-stoi(a)<<endl;
}

signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}