#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    
    int i=0,j=0;
    int cnt=0;
    while(i<n && j<n){
        if(arr[j]>brr[i]) {cnt++; i++;}
        else {i++;j++;}
    }   
    cout<<cnt<<endl;
}
int main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}