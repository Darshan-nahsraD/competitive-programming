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

vector<vector<int>> dp;
vector<int> vis;
int n, m; 
string s, r;

int rec(int i, int j){
    if(i==n || j==m) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    // int ans=rec(i+1, j+1);
    int ans=0;
    if(s[i]==r[j]) ans=max(ans, 1+rec(i+1, j+1));
    else {
    ans=max(ans, rec(i+1, j));
    ans=max(ans, rec(i, j+1));}
    return dp[i][j]= ans;
}
string ans;

void print(int i, int j){
    if(i==n|| j==m) return;

    if(rec(i,j)==rec(i+1, j)) print(i+1, j);
    else if(rec(i,j)==rec(i, j+1)) print(i, j+1);
    else if(rec(i,j)==rec(i+1, j+1) +1) {ans+=s[i]; print(i+1, j+1);}
    return;
}

void solve(){
    cin>>s>>r;
    n=s.size(); m=r.size();
    dp.assign(n+1, vector<int> (m+1,-1));
    // cout<<rec(0, 0)<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    print(0,0);
    cout<<ans<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t;cin>>t;while(t--)

    solve(); 
}