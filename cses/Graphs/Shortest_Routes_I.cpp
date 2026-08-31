/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
//for mulitset => less_equal
using ll=long long ;
#define endl '\n'
vector<vector<pair<int,int>>> g;
vector<int> vis, dis;

void bfs(){
    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > pq;
    pq.push({0,1});
    dis[1]=0;
    while(!pq.empty()){
        // int d=pq.top().first;
        int u=pq.top().second;pq.pop();
        if(vis[u]==1) continue;
        vis[u]=1;
        for(auto ele: g[u]){
            int wt=ele.second;
            int v=ele.first;
            if(dis[v]>dis[u]+wt){
                dis[v]=dis[u]+wt;
                pq.push({dis[v], v});   
            }
        }   
    }
}
void solve(){
    int n, m;cin>>n>>m;
    g.assign(n+1,{});
    vis.assign(n+1,0);
    dis.assign(n+1,1e18);
    for(int i=1;i<=m;i++){
        int x ,y,wt;cin>>x>>y>>wt;
        g[x].push_back({y,wt});
    }
    bfs();
    for(int i=1;i<=n;i++) cout<<dis[i]<<" "; cout<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}