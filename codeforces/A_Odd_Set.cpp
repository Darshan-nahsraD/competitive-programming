#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[2*n];
    int cnt=0;
    for(int i=0;i<2*n;i++) {cin>>arr[i]; if(arr[i]&1) cnt++;}

    if(cnt==n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}