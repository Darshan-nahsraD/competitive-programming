#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
string s;
int n;
int dp[5500];

int rec(int level){
    //pruning
    if(level>n) return 0;
    //base
    if(level==n) return 1;
    //chase
    if(dp[level]!=-1) return dp[level];
    //travers
    int ans=0;
    if(s[level]!='0') ans+=rec(level+1);
    if (n - level >= 2) {
        int num = (s[level] - '0') * 10 + (s[level + 1] - '0');
        if (num >= 10 && num <= 26) {
            ans += rec(level + 2);
        }
    }
    //save
    return dp[level]=ans;   
}
void solve(){
    while(cin>>s){
               
        if(s=="0") return;
        n=s.length();
        memset(dp, -1, sizeof(dp));
        cout<<rec(0)<<endl;
    }
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}