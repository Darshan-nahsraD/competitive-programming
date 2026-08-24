#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int l=0, r=n-1;
    for(int i=1;i<=n;i++){
        if(arr[l]==i) l++;
        else if(arr[r]==i) r--;
        else {cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}