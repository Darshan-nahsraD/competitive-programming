/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
using ll=long long ;
#define endl '\n'

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
//for mulitset => less_equal

vector<vector<int>> g;
vector<int> vis;

void solve(){
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) {int x;cin>>x;arr[i]=x;mp[x]++;}
    sort(arr.begin(), arr.end());
    int crr=m/2;
    int ans=0;
    for(auto ele: mp) ans=max(ans, ele.second);

    for(int i=crr;i>=1;i--){
        int cnt=mp[i]; 
        int total=(arr.end()-upper_bound(arr.begin(), arr.end(), i) ) ;
        // cout<<total<<endl;
        int duplicate=mp[i*2];
        total-=duplicate;
        cnt+=total +duplicate*2;
        ans=max(ans, cnt);
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}