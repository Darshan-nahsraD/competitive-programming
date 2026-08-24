#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=0;
    for(int i=0;i<n;i++){
        int sum=0, cnt=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cnt++;

            ans=max(ans, sum/cnt);
        }
        // cout<<sum<<" "<<cnt<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}