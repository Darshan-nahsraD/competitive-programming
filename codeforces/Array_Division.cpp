#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

int check(int mid , int k , int arr[], int n){
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > mid) return 0;
        if(sum + arr[i] <= mid) {
            sum += arr[i];
        } else {
            cnt++;
            sum = arr[i];
        }
    }
    if(sum > 0) cnt++;  // Don't forget the last subarray
    return cnt <= k;
}

void solve(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int lo=0, hi= accumulate(arr, arr+n, 0LL);
    int ans=0;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(check(mid, k ,arr, n)){
            ans=mid;hi=mid-1;
        }else lo=mid+1;

    }cout<<ans<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}