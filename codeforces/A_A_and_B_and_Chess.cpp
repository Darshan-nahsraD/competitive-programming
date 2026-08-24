#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    char arr[8][8];
    map<char,int>mp;
    mp['Q']=9;
    mp['q']=9;
    mp['r']=5;
    mp['R']=5;
    mp['N']=3;
    mp['n']=3;
    mp['b']=3;
    mp['B']=3;
    mp['P']=1;
    mp['p']=1;
    int black=0,white=0;
    // cout<<"Yes"<<endl;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='k' || arr[i][j]=='K') continue;
            if(arr[i][j]>='a' && arr[i][j]<='z') black+= mp[arr[i][j]];
            else if(arr[i][j]>='A' && arr[i][j]<='Z') white+= mp[arr[i][j]];
        }
    }
    if(black==white) cout<<"Draw"<<endl;
    else if(black>white) cout<<"Black"<<endl;
    else cout<<"White"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}