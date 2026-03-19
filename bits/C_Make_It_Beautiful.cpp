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
int count (vector<int> arr,int n){
    int bits=0;
    for(int i=0;i<n;i++){
        while(arr[i]){
            if(arr[i]&1)bits++;
            arr[i]>>=1;
        }
    }
    return bits;
}
void solve(){
    int n, k;cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int bits= count( arr, n);
    // cout<<bits<<endl;
    int need =1;
    for(int j=0;j<64;j++){
        for(int i=0;i<n;i++){
            if(need>k){cout<<bits<<endl; return;}
            if((arr[i] & (1LL<<j))==0){
                if(k>=need){
                    k-=need;
                    bits++;
                }
            }
        }
        need=(1LL<<(j+2))-(1LL<<(j+1));
    }
    cout<<bits<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}