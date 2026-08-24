#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int v=min(n, k);

    int idx=n-1;
    while(v--){
        if(arr[idx]>n) {cout<<"No"<<endl;return;}
        idx=(idx-arr[idx]+n)%n;
    }
    cout<<"Yes"<<endl;
}       

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}