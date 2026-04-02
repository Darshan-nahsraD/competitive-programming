/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
using ll=long long ;
#define endl '\n'

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
//for mulitset => less_equal

vector<vector<int>> dp;
vector<int> val , w;
int n;
int rec(int i, int wt){
    if(wt<=0) return 0;
    if(i>=n) return 0;
    if(dp[i][wt]!=-1) return dp[i][wt];
    int ans=rec(i+1, wt);
    if(wt>=w[i])ans=max(ans,val[i]+ rec(i+1, wt-w[i]));
    return dp[i][wt]=ans;
}
void solve(){
    int wt;
    cin>>n>>wt;
    w.resize(n);
    val.resize(n);
    for(int i=0;i<n;i++) {
        cin>>w[i]>>val[i];
    }
    dp.assign(n+1, vector<int> (wt+1, 0));

    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=wt;j++){
            dp[i][j]=max(dp[i][j],dp[i+1][j]);
            if(j>=w[i])dp[i][j]=max(dp[i][j], val[i]+ dp[i+1][j-w[i]]);
        }
    }
    cout<<dp[0][wt];
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}