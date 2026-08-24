#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,L , a;
    cin>>n>>L>>a;
    int arr[n][2];
    if(n==0) {cout<<L/a<<endl;return 0;}

    for(int i=0;i<n;i++){
        int x,y ;cin>>x>>y;
        arr[i][0]=x;arr[i][1]=y;
    }

    int ans=arr[0][0]/a;
    // cout<<ans<<" ";
    if(n>1){
        for(int i=1;i<n;i++){
        int last=arr[i-1][0] +arr[i-1][1];
        ans+=(arr[i][0]-last) /a;
    }
    ans+=(L-(arr[n-1][0] + arr[n-1][1]))/a;
    }
    cout<<ans<<endl;
}