#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

int check(int a, int b, int mid ,int n){
    int x=(mid/a);
    int y=(mid/b);
    if(x==0 || y==0) return false;
    
    return x >= (n+y-1)/y;
    // return res>=n;
}
void solve(){
    int a, b, n;
    cin>>a>>b>>n;

    // if(a<b) swap(a, b);
    int lo=1, hi=n*max(a,b);
    int ans=hi;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(a, b, mid,n)){
            ans=mid;
            hi=mid-1;
        }else lo=mid+1;
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}