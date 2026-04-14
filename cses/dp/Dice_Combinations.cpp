#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int dp[1001001];
const int M= 1e9+7;

// int rec(int sum){
//     if(sum<0) return 0;
//     if(sum==0) return 1;
//     if(dp[sum]!=-1) return dp[sum];

//     int ans=0;
//     for(int i=1;i<=6;i++){
//         ans+=rec(sum-i);
//     }
//     return dp[sum]=ans;
// }
void solve(){
    int n;cin>>n;
    // int arr[n];
    // memset(dp, -1, sizeof(dp));
    // for(int i=0;i<n;i++) cin>>arr[i];

    // cout<<rec(n);
    vector<int> v;
    v.push_back(1);
    for(int sum=0;sum<=n;sum++){
        if(sum==0) {dp[sum]=1;continue;}
        int ans=0;
        for(auto ele : v){
            ans=(ans+ele)%M;
        }
        v.push_back(ans);
        dp[sum]=ans;
        if(v.size()>6){
            v.erase(v.begin());
        }
    }

    cout<<dp[n]<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}