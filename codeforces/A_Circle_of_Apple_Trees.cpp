#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    set<int> st;
    int arr[n];
    for(int i=0;i<n;i++) {cin>>arr[i]; st.insert(arr[i]);}

    int sum=0;
    // for(auto ele : st) sum+=ele;
    cout<<st.size()<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}