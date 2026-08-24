/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;

void solve(){
    int n, a, b;cin>>n>>a>>b;
    string s;cin>>s;
    int x=0, y=0;
    int q=102;
    while(q--){
    for(int i=0;i<n;i++){
        if(s[i]=='N'){
            y++;
        }
        else if(s[i]=='S'){
            y--;
        }
        else if(s[i]=='E'){
            x++;
        }
        else {
            x--;
        }
        if(a==x && b==y){ cout<<"YES"<<endl;return;}
    }}
    cout<<"NO"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}