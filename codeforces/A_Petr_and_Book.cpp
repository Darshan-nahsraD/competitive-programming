#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[7];
    for(int i=0;i<7;i++) cin>>arr[i];

    int i=0;

    while(1){
        if(i==7)i=0;
        n-=arr[i];
        if(n<=0) {cout<<i+1<<endl;return;}
        i++;
    }
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}