/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<pair<int,int>>> g;
vector<int> vis, dp;
void dfs(int node, int previdx){
    vis[node]=1;
    for(auto ele: g[node]){
        int v=ele.first;
        int index=ele.second;
        if(vis[v]==0){
            if(index>previdx) dp[v]=dp[node];
            else dp[v]=dp[node]+1;
            dfs(v,index);
        }
    }

}
void solve(){
    int n;cin>>n;
    g.assign(n+1, {});
    vis.assign(n+1, 0);
    dp.assign(n+1, 0);

    for(int i=1;i<n;i++) {
        int u, v;cin>>u>>v;
        g[u].push_back({v,i});
        g[v].push_back({u,i});
    }
    dp[1]=1;
    dfs(1, 0); 
    int mx=-1; 
    for(int i=1;i<=n;i++) {
        // cout<<dp[i]<<" ";
        mx=max(mx, dp[i]);
    }
    // cout<<endl;

    cout<<mx<<endl;
}


signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}