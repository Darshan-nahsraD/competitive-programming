/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, m;cin>>n>>m;
    string s;cin>>s;
    map<char,int> mp;
    mp['A']=0;
    mp['B']=0;
    mp['C']=0;
    mp['D']=0;
    mp['E']=0;
    mp['F']=0;
    mp['G']=0;
    for(auto ele : s) {mp[ele]++;}

    int cnt=0;
    for(char xx='A';xx<='G';xx++){
        // cout<<mp[ele]<<endl;
        cnt+=max(0LL, m-mp[xx]);
    }
    cout<<cnt<<endl;

    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}