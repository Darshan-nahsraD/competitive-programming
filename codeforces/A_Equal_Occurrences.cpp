#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++) {cin>>arr[i]; mp[arr[i]]++;}
    int mx=0;
    for(int i=n;i>=1;i--){
        int cnt=0;
        for(auto ele: mp){
            if(mp[ele.first]>=i) cnt+=i;
        }
        mx=max(mx, cnt);
        // cout<<i<<" "<<mx<<endl;
    }
    cout<<mx<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}