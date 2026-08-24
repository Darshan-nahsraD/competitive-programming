#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr, arr+n);
    int all=upper_bound(arr, arr+n, k) - arr;
    int t=lower_bound(arr, arr+n, k) - arr;

     all= n-all;
    // cout<<t<<" "<<all<<endl;

    if(all> t) cout<<min(2000000000*1LL, k+1)<<endl;
    else cout<<max(0LL, k-1)<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}