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
const int M=1e9 +7;
int d;string s;
int len;
int dp[10007][2][100];
int rec(int i, int tight, int sum){
    if(i==len){
        if(sum%d==0) return 1;
        else return 0;
    }

    if(dp[i][tight][sum]!=-1) return dp[i][tight][sum];

    int ans=0;
    int up=(tight)? s[i]-'0': 9;

    for(int j=0;j<=up;j++){
        int nw_tight=(tight && j==up);
        ans+=rec(i+1, nw_tight, (sum+j)%d);
        ans%=M;
    }
    return dp[i][tight][sum]= ans%M;
}
void solve(){
    cin>>s>>d;
    len=s.size();
    memset(dp, -1, sizeof(dp));
    cout<<(rec(0, 1, 0)-1 +M)%M<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}