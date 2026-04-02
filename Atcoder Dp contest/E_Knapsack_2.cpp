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
vector<int> w, v;
int n,wt;
int rec(int i, int val){
    if(val==0) return 0;
    if(i==n){
        if(val!=0) return 1e15;
    } 
    if(dp[i][val]!=-1) return dp[i][val];
    int ans=rec(i+1, val);
    ans=min(ans, rec(i+1, val-v[i]) + w[i]);

    return dp[i][val]= ans;
}
void solve(){
    cin>>n>>wt;
    // vector<int> w(n), val(n);
    w.resize(n);v.resize(n);

    for(int i=0;i<n;i++) cin>>w[i]>>v[i];
    dp.resize(n+1,vector<int> (1e5+7,-1));
    for(int i=1e5;i>=0;i--){
        if(rec(0, i)<=wt) {cout<< i<<endl; return;}
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}