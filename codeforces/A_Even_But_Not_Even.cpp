#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt=0;
    string ans;
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2==1) {cnt++;ans+=s[i];}
        if(cnt==2) {cout<<ans<<endl;return;}
    }
    cout<<-1<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}