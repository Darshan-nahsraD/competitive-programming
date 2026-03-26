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
const int M=1e9+7;
vector<int>digit;
string k;
int d, len;
int dp[10001][2][101];
int dfs(int pos , int tight, int sum){
    if(pos==len){
        if(sum==0)return 1;
        else return 0;
    }
    if(dp[pos][tight][sum]!=-1) return dp[pos][tight][sum];

    int ans=0;

    int upper_limit=(tight)? digit[pos] : 9;
    for(int i=0;i<=upper_limit;i++){
        int nw_tight=(i==upper_limit && tight);
        // int nw_ldzeros=(i==0 && ldzeros);
        ans+=dfs(pos+1, nw_tight, (sum+i)%d);
        ans%=M;
    }
    return dp[pos][tight][sum]=ans%M;
}
void solve(){
    cin>>k>>d;
    digit.resize(k.size()+1);
    len=k.size();
    for(int i=0;i<k.size();i++){
        digit[i]=k[i]-'0';
    }
    memset(dp, -1, sizeof (dp));

    cout<<(dfs(0, 1,  0)-1+M)%M;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}