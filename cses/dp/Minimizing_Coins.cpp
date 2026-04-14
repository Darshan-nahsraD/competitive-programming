#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int n, x;
int arr[1202];
int dp[1001000];

int rec(int sum){
    // if(sum<0) return 1e9;
    if(sum==0) return 0;
    
    int ans=1e9;
    for(int i=0;i<n;i++){
        if(sum-arr[i]>=0)ans=min(ans, 1+ rec(sum-arr[i]));
    }
    return ans;
}
void solve(){
    
    cin>>n>>x;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    // cout<<rec(x);
    for(int sum=0;sum<=x;sum++){
        if(sum==0) dp[sum]= 0;
        else {
            int ans=1e9;
            for(int i=0;i<n;i++){
                if(sum-arr[i]>=0)ans=min(ans, 1+ dp[sum-arr[i]]);
            }
            dp[sum]= ans;
        }
    }

    if(dp[x]==1e9) cout<<-1<<endl;
    else cout<<dp[x]<<endl;

}   

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}