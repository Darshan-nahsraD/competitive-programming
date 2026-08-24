#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, c;cin>>n>>c;
    int arr[n];
    multiset<int>mt;
    for(int i=0;i<n;i++) {cin>>arr[i];mt.insert(arr[i]);}

    int cnt=0;
    // cout<<mt.size();
    while(!mt.empty()){
        vector<int> v;
        for(auto ele: mt){
            // cout<<ele<<endl;
            if(ele>c) {cnt++; v.push_back(ele); }
        }
        for(auto ele : v) {mt.erase(mt.find(ele));}

        if(!mt.empty()) mt.erase(--mt.end());

        vector<int> s;
        for(auto ele : mt){
            s.push_back(ele);
        }

        for(auto ele : s){
            int x=ele;
            mt.erase(mt.find(x));
            mt.insert(x*2);
        }
        // cout<<mt.size();
        
    }
    cout<<cnt<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}