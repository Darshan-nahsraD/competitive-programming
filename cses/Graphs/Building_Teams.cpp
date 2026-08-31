/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;
int n,m;
int dfs(int node, int cnt,int flag){
    if(flag==0) return 0;
    int ans=flag;
    vis[node]=cnt;
    for(auto ele: g[node]){
        if(vis[ele]==0){
            ans=min(ans,dfs(ele, 3-cnt, flag));
        }else if(vis[ele]==cnt) return 0;
    }
    return ans;
}
void solve(){
    cin>>n>>m;
    g.assign(n+1, {});
    vis.assign(n+1, 0);
    for(int i=0;i<m;i++) {
        int x, y;cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            if(dfs(i, 1, 1)==0){
                cout<<"IMPOSSIBLE"<<endl;return;
            }
        }
    }

    for(int i=1;i<=n;i++) cout<<vis[i]<<" ";
    cout<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}