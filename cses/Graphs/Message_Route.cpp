/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;
void solve(){
    int n, m;cin>>n>>m;
    g.assign(n+1, {});
    vis.assign(n+1, 0);
    for(int i=0;i<m;i++){
        int a, b;cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vis[1]=1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int x=q.front();q.pop();
        for(auto ele: g[x]){
            if(vis[ele]==0 || vis[ele]>vis[x]+1){
                vis[ele]=vis[x]+1;
                q.push(ele);
            }
        }
    }
    // for(auto ele: vis) cout<<ele<<" ";cout<<endl;
    if(vis[n]==0) {cout<<"IMPOSSIBLE"<<endl; return;}
    else {
        cout<<vis[n]<<endl;
        int val=n;
        vector<int>ans; ans.push_back(n);
        for(int i=vis[n]-1;i>0;i--){
            for(auto ele : g[val]){
                if(vis[ele]==i){
                    ans.push_back(ele);
                    val=ele;
                    break;
                }
            }
        }
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<endl;
    }

    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}

