#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;

    string a;cin>>a;
    set<int> s;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        s.insert(x);
    }
// for(auto ele: s) cout<<ele<<" ";
    int i=1;
    for(char c: a){
        if(c=='A'){
            i++;s.insert(i);
        }else{
            i++;
            while(s.count(i)) i++;
            s.insert(i);
            while(s.count(i))i++;
        }
    }

    cout<<s.size()<<endl;
    for(auto ele: s) cout<<ele<<" ";
    cout<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}