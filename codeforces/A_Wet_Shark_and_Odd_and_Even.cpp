#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int n;cin>>n;
    int sum=0;
    vector<int>v;
    int mn=INT_MAX;
    while(n--){
        int x;cin>>x;
        sum+=x;
        if(x&1) mn=min(mn, x);
    }
    if(sum&1) sum-=mn;
    cout<<sum<<endl;
}