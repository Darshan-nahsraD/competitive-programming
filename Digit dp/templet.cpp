/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
vector<int> digit;
int dp[20][2][2];

int len;
int dfs(int pos, int tight, int ldzeros ){
    if(pos==len){
        return 1;
    }
    if(dp[pos][tight][ldzeros]!=-1) return dp[pos][tight][ldzeros];
    int ans=0;
    int upper_digit=(tight)? digit[pos]:9;
    
    for(int i=0;i<=upper_digit;i++){

        int nw_tight=(i==upper_digit && tight);
        int nw_ldzeros=(i==0 && ldzeros);

        ans+=dfs(pos+1, nw_tight, nw_ldzeros);
    }
    return dp[pos][tight][ldzeros]= ans;
}
