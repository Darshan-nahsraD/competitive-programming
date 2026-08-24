#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int mid;
    if(n&1){
        mid=n/2;
    }
    else mid=n/2-1;
    int cnt=0;
    for(int i=mid;i<n;i++){
        if(arr[mid]==arr[i]) cnt++;
    }
    cout<<cnt<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}