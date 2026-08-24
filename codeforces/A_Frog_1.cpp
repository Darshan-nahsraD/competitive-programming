// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int n;
// int arr[100100];
// int dp[100100];

// int rec(int level){
//     //pruning
//     if(level>=n) return 1e9; 
//     //base
//     if(level==n-1) return 0;
//     //cache
//     if(dp[level]!=-1) return dp[level];
//     //traverse
//     int ans=1e9;
//     ans=min(ans, abs(arr[level]-arr[level+1]) + rec(level+1) );
//     ans=min(ans, abs(arr[level]-arr[level+2]) + rec(level+2) );
//     //save and return
//     return dp[level]=ans;
// }
// void solve(){
//     cin>>n;
//     for(int i=0;i<n;i++) cin>>arr[i];
//     memset(dp, -1, sizeof(dp));
//     cout<<rec(0);
    
// }

// signed main(){
//     ios_base :: sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);


//     // int t;cin>>t;while(t--)
//         solve();
    
// }


#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int dp[100100];

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    

    for(int i=n-1;i>=0;i--){
        if(i==n-1) dp[i]= 0;
        else{ 
            int ans=1e9;
            ans=min(ans, dp[i+1]+ abs(arr[i]-arr[i+1]));
            if(i+2<n)ans=min(ans, dp[i+2]+ abs(arr[i]-arr[i+2]));
            dp[i]=ans;
        }
    }
    cout<<dp[0];
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        solve(); 
}