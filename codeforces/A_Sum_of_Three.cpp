/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    if(n%3==0){
        if(n<=9)cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<"1 4 "<<n-5<<endl;
    }else {
        if(n<=5)cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<"1 2 "<<n-3<<endl;
    }
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}