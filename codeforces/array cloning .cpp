#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    map<int, int>maps;
    int k=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        maps[x]++;
        
        k=max(maps[x],k);
        
    }
    // for(auto ele: maps){
    //     k=max(ele.second, k);
    // }
    
    int count=0;
    while(k<n){
        int step=min(k,n-k);
        count+=1+step;
        k+=step;
    }
    cout<<count<<endl;
}
int main (){
    int t;cin>>t;
    while(t--){
        solve();

    }
}
