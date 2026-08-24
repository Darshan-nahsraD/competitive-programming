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
    int n,l,b;cin>>n>>l>>b;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    int i=0, j=n-1;
    int mx=max(l,b);
    int mn=min(l, b);
    int cnt=0;
    while(i<j){
        // cout<<arr[i]<<" "<<arr[j]<<endl;
        if(arr[j]>mx) {j--;continue;}
        if(arr[i]<=mn && arr[j]<=mx){ cnt++;i++;j--;}
        if(arr[i]>mn) break;
    }
    cout<<cnt<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}