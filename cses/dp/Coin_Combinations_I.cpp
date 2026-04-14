#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
// int rec()
const int M=1e9+7;
int dp[1000100];

void solve(){
    int n, x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int sum=0;sum<=x;sum++){
        if(sum==0) dp[sum]=1;
        else {
            int ans=0;
            for(int i=0;i<n;i++){
                if(sum-arr[i]>=0) ans=(ans+dp[sum-arr[i]])%M;
            }
            dp[sum]=ans%M;
        }
    }
    cout<<dp[x]<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}