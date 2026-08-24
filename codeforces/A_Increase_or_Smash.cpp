#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++) {cin>>arr[i];mp[arr[i]]++;}

    cout<<mp.size()+mp.size()-1<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}