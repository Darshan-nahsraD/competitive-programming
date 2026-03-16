#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> vis, cnt_size, component;

void dfs(int node ,int cnt){
    vis[node]=1;
    component[node]=cnt;
    cnt_size[cnt]++;
    for(auto x: g[node]){
        if(!vis[x]){
            dfs(x, cnt);
        }
    }
}


void solve(){
    int n,m;cin>>n>>m;
    g.resize(n+1);
    vis.assign(n+1, 0);
    cnt_size.assign(n+1, 0);
    component.assign(n+1, 0);

    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i,cnt);
        }
    }

    for(int i=1;i<=cnt;i++){
        cout<<i<<" : "<<cnt_size[i]<<endl;
    }cout<<endl;

    for(auto ele : component){
        cout<<ele<<" ";
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}

