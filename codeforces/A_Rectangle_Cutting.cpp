/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int a, b;cin>>a>>b;
    if((a&1) && (b&1)) {cout<<"NO"<<endl;return;}
    if(((a&1)==0 && b==a/2) && (b&1)) cout<<"NO"<<endl;
    else if(((b&1)==0 && b/2==a) && (a&1)) cout<<"NO"<<endl;
    else if(((a&1)==0 && b==a/2) && ((b&1)==0 && b/2==a) ) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}