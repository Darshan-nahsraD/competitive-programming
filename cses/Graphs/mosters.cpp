#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a , pair<int,int>b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    return a.second<b.second;
}
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<pair<int,int>>ans(n);
    for(int i=0;i< n;i++){
        cin>>arr[i];
        arr[i]=(((arr[i]%k)==0)? k : arr[i]%k);
        ans[i]={arr[i],i};
    }
    
    sort(ans.begin(),ans.end(),cmp);
    for(auto ele: ans){
        cout<<ele.second + 1<<" ";
    }
    cout<<endl;

// 2 1 3 
// 1 2 
// 3 1 2 4 


}
int main (){
    int t;cin>>t;
    while(t--){
        solve();

    }
}