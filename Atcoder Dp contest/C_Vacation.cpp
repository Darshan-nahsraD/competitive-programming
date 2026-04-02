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
vector<int> a(1e5+7), b(1e5+7), c(1e5+7);
vector<vector<int>> dp(1e5 +7, vector<int> (4,-1));

int rec(int i, int last){
    if(i<=0) return 0;
    
    if(dp[i][last]!=-1) return dp[i][last];
    int ans=0;
    if(last!=1) ans=max(ans, a[i-1]+rec(i-1,1));
    if(last!=2) ans=max(ans, b[i-1]+rec(i-1,2));
    if(last!=3) ans=max(ans, c[i-1]+rec(i-1,3));

    return dp[i][last]=ans;
}
void solve(){
    int n;cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i]>>b[i]>>c[i];
    }
    
    cout<<rec(n, 0);
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}