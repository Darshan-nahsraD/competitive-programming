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
vector<int> prime(101,1);
int dp[11][2][101];
int rec(int pos, int tight ,int sum, string &s){
    if(pos==s.size()) {
        if(prime[sum]) return 1;
        else return 0;
    }
    if(dp[pos][tight][sum]!=-1) return dp[pos][tight][sum];
    int ans=0;
    int upper_limit=(tight)? s[pos]-'0':9;

    for(int i=0;i<=upper_limit;i++){
        int nw_tight=(tight && i==upper_limit);
        ans+=rec(pos+1, nw_tight, sum+i, s);      
    }
    return dp[pos][tight][sum]=ans;
}

void solve(){
    int a, b;cin>>a>>b;
    a--;
    memset(dp, -1, sizeof(dp));
    string s=to_string(a);
    int left=rec(0, 1, 0, s);
    
    memset(dp, -1,sizeof(dp));
    string r=to_string(b);
    int right=rec(0, 1, 0, r);

    cout<<right-left<<endl;

}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    prime[1]=0;
    prime[0]=0;
    for(int i=2;i<=100;i++){
        if(prime[i]){
        for(int j=i*2;j<=100;j+=i){
            prime[j]=0;
        }}
    }
    // for(int i=1;i<10;i++) cout<<prime[i]<<" ";
    int t;cin>>t;while(t--)
        solve();
    
}