/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long
vector<vector<int>> g;
vector<int> vis;

void solve(){
    int n, m, k;cin>>n>>m>>k;

    int flag=1;
    int x, y;cin>>x>>y;
    int parity=abs(x+y)%2;
    for(int i=0;i<k;i++){
        int a, b;cin>>a>>b;
        if(abs(a+b)%2 == parity) flag=0;
    }
    if(flag){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}