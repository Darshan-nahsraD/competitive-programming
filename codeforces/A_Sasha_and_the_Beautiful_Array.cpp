#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mn=*min_element(arr, arr+n);
    int mx=*max_element(arr, arr+n);
    cout<<mx-mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t; while(t--)
    solve();
}