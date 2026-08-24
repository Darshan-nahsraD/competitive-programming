/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
//for mulitset => less_equal
using ll=long long ;
#define endl '\n'
vector<vector<int>> g;
vector<int> vis;


void solve(){
    int n;cin>>n;
    // int arr[n][n];
    vector<vector<int>> arr(n, vector<int>(n,0));
    map<int,int>mp;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) {cin>>arr[i][j];mp[arr[i][j]]++;}

    int x=(n-1)*(n-1) +1;

    for(auto ele : mp){
        if(ele.second>x) {cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}
