#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;

    int arr[n];
    int brr[m];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>brr[i];

    sort(arr, arr+n);
    reverse(arr, arr+n);

    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        
        if(cnt<n && brr[arr[i]-1]>brr[cnt]) {
            sum+=brr[cnt];
            cnt++;
        }else {
            sum+=brr[arr[i]-1];
        }
    }
    cout<<sum<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}