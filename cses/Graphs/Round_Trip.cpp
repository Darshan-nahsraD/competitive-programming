/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int n,m;
int iscycle=0;
vector<vector<int>> g;
vector<int> vis, par, ans;

void dfs(int node, int p){
    vis[node]=1;
    par[node]=p;
    for(auto ele: g[node]){
        if(!vis[ele]) dfs(ele, node);
        else if(vis[ele]==1 && ele!=p){
            iscycle=1;
            int temp=node;
            while(temp!=ele){
                ans.push_back(temp);
                temp=par[temp];
            }ans.push_back(temp);
            ans.push_back(node);
            return;
        }
        if(iscycle) return;
    }
}
void solve(){
    cin>>n>>m;
    g.resize(n+1, {});
    vis.assign(n+1,0);
    par.assign(n+1,0);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0 && iscycle==0)
            dfs(i, -1); 
    }
    if(iscycle){
        cout<<ans.size()<<endl;
        for(auto ele: ans) cout<<ele<<" ";;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}