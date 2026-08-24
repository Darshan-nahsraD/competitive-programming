#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];

    for(int i=0;i<m-1;i++){
        if(arr[i]>=arr[i+1]) {cout<<1<<endl;return ;}
    }
    cout<<n-arr[m-1]+1<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}