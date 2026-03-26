/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
vector<int> digit;
int dp[20][2][2][11];

int len;
int dfs(int pos, int tight, int ldzeros , int last){
    if(pos==len){
        return 1;
    }
    if(dp[pos][tight][ldzeros][last]!=-1) return dp[pos][tight][ldzeros][last];
    int ans=0;
    int upper_digit=(tight)? digit[pos]:9;
    
    for(int i=0;i<=upper_digit;i++){
        if(!ldzeros && i==last) continue;

        int nw_tight=(i==upper_digit && tight);
        int nw_ldzeros=(i==0 && ldzeros);
        int x;
        if(nw_ldzeros) x=10;
        else x=i;
        ans+=dfs(pos+1, nw_tight, nw_ldzeros, x);
    }
    return dp[pos][tight][ldzeros][last]= ans;
}
void solve(){
    int n, m;cin>>n>>m;
    if(n==0 && m==0) {cout<<1<<endl; return;}
    n--;
    string a=to_string(n);
    string b=to_string(m);
    len=b.size();
    digit.resize(len);
    for(int i=0;i<len;i++){
        digit[i]=b[i]-'0';
    }
    memset(dp, -1, sizeof(dp));
    int y=(m==0)? 1:dfs(0, 1, 1, 10) ;
    
    len=a.size();
    digit.resize(len);
    for(int i=0;i<len;i++){
        digit[i]=a[i]-'0';
    }
    
    memset(dp, -1, sizeof(dp));
    int x=(n==0)? 1: dfs(0, 1 ,1, 10);

    cout<<y-x<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}