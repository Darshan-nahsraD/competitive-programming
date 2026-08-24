#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long



void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<pair<int,int>>B;
    for(int i=0;i<n;i++){
        int b;cin>>b;
        B.push_back({b,i});
    }
    int j=n-1;
    int ans[n];
    sort(B.begin(),B.end());

    for(auto ele: B){
        ans[ele.second]=arr[j];
        j--;
    }
    for(auto ele : ans) cout<<ele<<" ";
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();

}