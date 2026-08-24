/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;

void solve(){
    int n, k;cin>>n>>k;
    string s;cin>>s ;
    int i=0;
    int cnt=0;
    int last=-1e9;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            last=i;
        }else{
            if(last<i-k) cnt++;
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