#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    set<int>st;
    for(int i=0;i<n;i++) {cin>>arr[i];st.insert(arr[i]);}
    for(int i=0;i<=101;i++){
        if(st.find(i)==st.end()) {cout<<i<<endl;return;}
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}