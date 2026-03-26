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
vector<int> digit;
int len;
int t=1;
int dp[10][2][2];
int dfs(int pos , int tight, int zeros){
    if(pos==len){
        return 0;
    }
    if(dp[pos][tight][zeros]!=-1) return dp[pos][tight][zeros];
    int ans=0;
    int upper_limit=(tight)? digit[pos] : 9;
    for(int i=0;i<=upper_limit;i++){
        int nw_tight= (tight && i==upper_limit);
        int nw_zeros= (i==0 && zeros);
        ans+=i*pow(10*1LL,(len-pos-1));
        dfs(pos+1, nw_tight, nw_zeros);
    }
    return dp[pos][tight][zeros]=ans;
}
void solve(){
    string a, b;cin>>a>>b;
    if(a=="-1" && b=="-1") {t=0; return;}
    len=b.size();
    digit.resize(len);
    for(int i=0;i<len;i++){
        digit[i]=b[i]-'0';
    }
    
    // for(auto ele: digit) cout<<ele<<" ";cout<<endl;
    memset(dp,-1, sizeof(dp));
    int x=dfs(0, 1, 1);
    
    len=a.size();
    digit.resize(len);
    for(int i=0;i<len;i++){
        digit[i]=a[i]-'0';
    }
    
    // for(auto ele: digit) cout<<ele<<" ";cout<<endl;
    memset(dp,-1, sizeof(dp));
    int y=dfs(0, 1, 1);
    int digit_count=0;
    for(auto ele: a) digit_count+=ele-'0';
    cout<<x-y+digit_count<<endl;

}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(t)
        solve();
    
}