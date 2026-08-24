#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            int flag=0;
            for(int j=1;j<k;j++){
                if(i-j<0) break;
                if(s[i-j]=='1') {flag=1;break;}
            }
            if(flag==0) cnt++;
        }
    }
    cout<<cnt<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}