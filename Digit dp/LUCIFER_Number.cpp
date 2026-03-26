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

// vector<vector<int>> g;
vector<int> prime(101, 1);
int dp[11][2][100];
int rec(int pos, int tight, int sum, string &s){
    if(pos==s.size()){
        if(sum>0 && sum<100 && prime[sum]) return 1;
        else return 0;
    }
    if(dp[pos][tight][sum+50]!=-1) return dp[pos][tight][sum+50];
    int ans=0;
    int up=(tight)? s[pos]-'0': 9;
    for(int i=0;i<=up;i++){
        int nw_tight=(tight && i==up);
        int nwsum=sum;
        int position=s.size()-pos;
        if(position%2 ==0) nwsum+=i;
        else nwsum-=i;
        ans+=rec(pos+1, nw_tight, nwsum, s);
    }
    return dp[pos][tight][sum+50]=ans;
}
void solve(){
    int a, b;cin>>a>>b;
    a--;
    string s=to_string(b);
    memset(dp, -1, sizeof(dp));
    int right=rec(0,1,0,s);

    s=to_string(a);
    memset(dp, -1, sizeof(dp));
    int left;
    if(a<0) left=0;
    else left=rec(0,1,0,s);

    cout<<right-left<<endl;

}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    prime[0]=0;prime[1]=0;
    for(int i=2;i<101;i++){
        if(prime[i]){
            for(int j=i*2;j<101;j+=i){
                prime[j]=0;
            }
        }
    }
    int t;cin>>t;while(t--)
        solve();
    
}