#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n][n];
    /*
        1 2 
        3 4
    */
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=x;
            x++;
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=arr[i][j];
            // cout<<sum<<endl;
            if(i-1>=0) sum+=arr[i-1][j];
            if(j-1>=0) sum+=arr[i][j-1];
            if(i+1<n) sum+=arr[i+1][j];
            if(j+1<n) sum+=arr[i][j+1];

            ans=max(sum, ans);
            // cout<<sum<<" "<<ans<<endl;
        }
    }

    cout<<ans<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}