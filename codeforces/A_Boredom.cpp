#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<int> arr, dp;

int rec(int i, int n, map<int, int> mp){
    if(i>=n) return 0 ;
    if(dp[i]!=-1) return dp[i];
    // cout<<i<<endl;
    return dp[i]= max(rec(i+1, n, mp), arr[i]*mp[arr[i]] + rec(i+2, n, mp));
}
void solve(){
    int n;cin>>n;
    
    map<int, int> mp;
    for(int i=0;i<n;i++) {int x;cin>>x; mp[x]++;}
    
    dp.assign(mp.size()+1, -1);
    
    for(auto ele: mp) arr.push_back(ele.first);

    // int 
    cout<<rec(0, mp.size(), mp)<<endl;
    /*

        2 3 4 7 7 7 7 8 8
        1 1 2 2 2 2 2 3 3 
        1- 2 
        2- 5 
        3- 2 
        2 2 3 4 5

    */
}

// void solve(){
//     int n;cin>>n;
//     map<int, int> mp;
//     for(int i=0;i<n;i++) {int x;cin>>x;mp[x]++;}

//     int sz=mp.size();
//     vector<int> arr;
//     for(auto ele : mp) arr.push_back(ele.first);

//     if(sz==1) {cout<<mp[arr[0]]*arr[0]<<endl; return;}

//     int dp[sz+1];
//     dp[0]=arr[0]* mp[arr[0]];
//     // dp[1]=arr[1]* mp[arr[1]];
//     // dp[1]=max(dp[1], dp[0]);

//     // if(sz==2){cout<<max(dp[0], dp[1])<<endl; return;}

//     for(int i=1;i<sz;i++){
//         dp[i]=dp[i-1];
//         int x=arr[i]* mp[arr[i]];
//         if(arr[i-1]!=arr[i]-1) x+=dp[i-1];
//         else{
//             if(i-2>=0) x+=dp[i-2];
//         }
//         dp[i]=max(dp[i], x);
//     }

//     cout<<dp[sz-1]<<endl;

// }

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}