#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n,l, r;cin>> n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int flag=1;
    
    for(int j=1;j<=r;j++){
        if(j>=n) {flag=1; break;}
        if(arr[0]>=arr[j]) {flag=0;break;}
    }
    if(flag){ cout<<1<<endl;return;}
    for(int i=1;i<n-1;i++){
        flag=1;
        for(int j=1;j<=l;j++){
            if(i-j<0) {flag=1; break;}
            if(arr[i]>=arr[i-j]) {flag=0;break;}
        }
        if(flag==0) continue;
        for(int j=1;j<=r;j++){
            if(i+j>=n) {flag=1; break;}
            if(arr[i]>=arr[i+j]) {flag=0;break;}
        }
        if(flag==0) continue;
        cout<<i+1;return;
    }
    cout<<n<<endl;
}

signed main(){
    solve();
    
}
