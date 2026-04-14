/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int n, m;
vector<vector<char>> g;
vector<pair<int,int>> v;
vector<vector<int> > vis;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

vector<pair<int,int> > neighbours(int i, int j){
    vector<pair<int,int>> p;
    for(int k=0;k<4;k++){
        int x=i+dx[k];
        int y=j+dy[k];
        if(x<0 || y<0 || x>=n || y>=m) continue;
        if(g[x][y]=='.') p.push_back({x, y});
    }
    return p;
}
void dfs(int i, int j, int cnt){
    vis[i][j]=cnt;
    for(auto ele: neighbours(i, j)){
        if(vis[ele.first][ele.second]==0) dfs(ele.first, ele.second, cnt);
    }
}
void solve(){
    cin>>n>>m;
    g.assign(n+1, {});
    v.clear();
    vis.assign(n+1, vector<int> (m+1, 0));
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<m;j++){ g[i].push_back(s[j]);
            if(s[j]=='.') v.push_back({i, j});
        }
    }

    int cnt=0;
    // cout<<cnt<<endl;
    for(auto ele: v){
        // cout<<ele.first<<" "<<ele.second<<endl;
        if(vis[ele.first][ele.second]==0){
            cnt++;
            dfs(ele.first, ele.second, cnt);
        }
    }
    cout<<cnt<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<vis[i][j];
    //     }cout<<endl;
    // }
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}