/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
int n, m;
vector<vector<int>> vis;
vector<vector<char>> g;
pair<int,int> A, B;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
vector<pair<int,int>> neighbours(int i, int j){
    vector<pair<int,int>> p;
    for(int k=0;k<4;k++){
        int x=i+dx[k];
        int y=j+dy[k];
        if(x<0 || y<0|| x>=n || y>=m|| g[x][y]=='#') continue;
        else p.push_back({x, y});
    }
    return p;
}
void bfs(){
    int cnt=0;
    queue<pair<int,int> > q;
    q.push({A.first, A.second});
    vis[A.first][A.second]=1;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;q.pop();
        for(auto ele: neighbours(x, y)){
            if(vis[ele.first][ele.second]==0 || vis[ele.first][ele.second]>vis[x][y]+1){
                vis[ele.first][ele.second]=vis[x][y]+1;
                q.push({ele.first, ele.second});
            }
        }
    }
}
void solve(){
    cin>>n>>m;
    g.assign(n+1,{});
    vis.assign(n+1, vector<int>(m, 0));
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<m;j++){
            g[i].push_back(s[j]);
            if(s[j]=='A') A={i,j};
            if(s[j]=='B') B={i,j};
        }
    }

    bfs();
    // cout<<B.first<<" "<<B.second<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<vis[i][j]<<"  ";
    //     }cout<<endl;
    // }
    if(vis[B.first][B.second]==0) {cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
    cout<<vis[B.first][B.second]-1<<endl;

    int cnt=vis[B.first][B.second];

    int x=B.first, y=B.second;

    string str;
    for(int i=cnt-1;i>0;i--){
        if(x+1<n && vis[x+1][y]==i) {str.push_back('U'); x=x+1;}
        if(y+1<m && vis[x][y+1]==i) {str.push_back('L'); y=y+1;}
        if(x-1>=0 && vis[x-1][y]==i) {str.push_back('D'); x=x-1;}
        if(y-1>=0 && vis[x][y-1]==i) {str.push_back('R'); y=y-1;}
    }

    reverse(str.begin(), str.end());
    cout<<str<<endl;

    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}