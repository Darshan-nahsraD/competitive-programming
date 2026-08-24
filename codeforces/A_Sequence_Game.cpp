#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) {
        mx=max(arr[i], mx);
        mn=min(mn, arr[i]);
    }
    int x;cin>>x;
    if(x>mx || x<mn) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}