#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)cout<<"(";
        for(int j=i;j<n;j++)cout<<")";

        for(int j=0;j<i;j++)cout<<"()";
        cout<<endl;
    }
}
signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t ;cin>>t;while(t--)
    solve();
}