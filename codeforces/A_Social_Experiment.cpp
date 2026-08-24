/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;

void solve(){
    int n;cin>>n;
    if(n==2 || n==7) cout<<2<<endl;
    else if(n==3) cout<<3<<endl;
    else if(n&1) cout<<1<<endl;
    else cout<<0<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}