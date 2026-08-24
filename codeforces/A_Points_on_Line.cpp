#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'

void solve(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=0;
    for(int i=0;i<n;i++){
        int x= upper_bound(arr+i, arr+n, arr[i]+d) - arr-i-1;
        // cout<<x<<" ";
        ans+= (x-1)*x/2;
    }
    cout<<endl<<ans<<endl;

}


signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}
