// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long ;
// #define endl '\n'
// #define int long long
// const int M=1e9+7;
// int n, m;
// int arr[100100];
// int dp[100100][110];

// int rec(int level, int last){

//     //base
//     if(level==n) return 1;

//     if(dp[level][last]!=-1) return dp[level][last];
    
//     //traverse
//     int ans=0;
//     if(arr[level]!=0){
//         if(abs(arr[level]-last)>1) ans=0;
//         else ans=(ans+rec(level+1, arr[level]))%M;
//     }else{
//         for(int i=last-1; i<=last+1; i++){
//             if(i>=1 && i<=m) ans=(ans+(rec(level+1, i)))%M;
//         }
//     }
//     //save and return 
//     return dp[level][last]= (ans%M);
// }
// void solve(){
//     cin>>n>>m;
//     for(int i=0;i<n;i++) cin>>arr[i];
//     memset(dp, -1, sizeof(dp));

//     int x=0;
//     if(arr[0]==0){
//         for(int i=1;i<=m;i++){
//             x=(x+rec(1, i))%M;
//         }
//     }else{
//         x=(x+rec(1,arr[0]))%M;  
//     }
//     cout<<x%M<<endl;
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
const int M =1e9+7;
int n, m;
int arr[100001];
int dp[100001][100];
int rec(int i, int prev){
    if(i==n) return 1;

    if(dp[i][prev]!=-1) return dp[i][prev];
    if(arr[i]!=0) {
        if(abs(prev-arr[i])>1) return 0;
        return rec(i+1, arr[i])%M;
    }
    int ans=0;
    if(arr[i]==0){
        if(prev+1<=m) ans=(ans+rec(i+1, prev+1))%M;
        if(prev-1>=1)ans=( ans+rec(i+1, prev-1))%M; 
        ans=(ans+rec(i+1, prev))%M;
    }
    return dp[i][prev]= ans%M;

}
void solve(){
    cin>>n>>m;
    // int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    memset(dp, -1, sizeof(dp));

    // cout<<rec(0, arr[0]);
    int ans=0;
    if(arr[0]==0){
        for(int i=1;i<=m;i++){
            ans= (ans+rec(1, i))%M;
        }
        // cout<<ans<<endl;
    }else{
        ans=rec(1, arr[0])%M;
    }
    cout<<ans%M<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}