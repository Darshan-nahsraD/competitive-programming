#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int n, x;
int arr[1001000];


const int M =1e9+7;

void solve(){
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>arr[i];
    // memset(dp, -1, sizeof(dp));
    // cout<<rec(0, x);
    vector<int>dp(x+1,0);
    dp[0]=1;

    for(int level=n-1;level>=0;level--){
        vector<int> curr(x+1, 0);
        curr[0]=1;
        for(int sum=0;sum<=x;sum++){
            if(sum==0) {curr[sum]=1;continue;}

            // int ans=0;

            if(sum-arr[level]>=0) curr[sum]=(curr[sum]+curr[sum-arr[level]])%M;
            if(level+1<n)curr[sum]= (curr[sum]+ dp[sum])%M;
 
        }
        dp=curr;
    }

    
    

    cout<<dp[x];
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}