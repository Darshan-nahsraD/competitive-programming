#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    int ans=0;
    int ones=0;
    for(int i=0;i<n;i++){ cin>>arr[i];
        if(arr[i]==0) ans++;
        else if(arr[i]==-1) ones++;
        
    }
    ans+= (ones % 2 )* 2;
    
    cout<<ans<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}