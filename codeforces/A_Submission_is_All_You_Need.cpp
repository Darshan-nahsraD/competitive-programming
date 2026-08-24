#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    // int zeros= count(arr, arr+n,0);
    // int ones= count(arr, arr+n,1);
    int ones=0;int zeros=0;

    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zeros++;
        else if(arr[i]==1) ones++;
        else sum+=arr[i];
    }

    int x=min(zeros, ones)*2;

    sum+=x;

    if(zeros>ones) sum+=zeros-ones;
    else sum+=ones-zeros;
    cout<<sum<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}