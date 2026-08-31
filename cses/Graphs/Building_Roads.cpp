/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;

void dfs(int i, int cnt){
    vis[i]=cnt;
    for(auto ele: g[i]){
        if(vis[ele]==0) {
            dfs(ele, cnt);
        }

    }
}
void solve(){
    int n, m;cin>>n>>m;
    g.resize(n+1);
    vis.assign(n+1, 0);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int cnt=0;
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(vis[i]==0) {cnt++;dfs(i, cnt);v.push_back(i);}
    }
    cnt--;
    cout<<cnt<<endl;
    // for(auto ele: v) cout<<ele<<" ";
    // cout<<endl;
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<" "<<v[i-1]<<endl;
    }

    
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}