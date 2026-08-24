#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int i=0;i<30;i++){
            if(x&(1<<i)) mp[i]++;
        }
    }
    cout<<1<<" ";
    for(int i=2;i<=n;i++){
        int flag=0;
        for(auto ele : mp){
            if((ele.second %i)==0 ) continue;
            flag=1;
        }
        if(flag==0) cout<<i<<" ";
    }
    cout<<endl;

}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}