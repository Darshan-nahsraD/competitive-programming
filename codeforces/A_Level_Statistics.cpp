#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int a, b;cin>>a>>b;
        v.push_back({a, b});
    }
    if(v[0].first < v[0].second){
        cout<<"NO"<<endl;return;
    }
    int flag=1;
    for(int i=1;i<n;i++){
        if(v[i].first < v[i].second) {flag=0; break;}
        if((v[i].second < v[i-1].second) || (v[i].first < v[i-1].first) ){
            flag=0; break;
        }
        if(v[i].second > v[i-1].second && v[i].first == v[i-1].first) {flag=0; break;}
        if(v[i].second - v[i-1].second > v[i].first - v[i-1].first) {flag=0 ; break;}
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}