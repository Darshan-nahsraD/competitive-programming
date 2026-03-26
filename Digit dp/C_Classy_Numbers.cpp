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

int dp[20][2][5];
int dfs(int pos, int tight, int k,string &s){
    if(k>3) return 0;
    if(pos==s.size()) return 1;
    if(dp[pos][tight][k]!=-1) return dp[pos][tight][k];
    int ans=0;
    int upper_limit=(tight)? s[pos]-'0':9;

    for(int i=0;i<=upper_limit;i++){
        int nw_tight=(tight && i==upper_limit);

        if(i!=0)ans+=dfs(pos+1, nw_tight, k+1, s);
        else ans+=dfs(pos+1, nw_tight, k, s);
    }
    return dp[pos][tight][k]=ans;
}

void solve(){
    int a, b;
    cin>>a>>b;
    a--;
    string s=to_string(b);
    string r=to_string(a);

    memset(dp,-1, sizeof(dp));
    int x=dfs(0,1,0,s);

    memset(dp,-1, sizeof(dp));
    int y=dfs(0,1,0,r); 

    cout<<x-y<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}

