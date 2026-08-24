/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int k;cin>>k;

    if(n==k) {
        for(int i=0;i<n;i++) cout<<1<<" ";cout<<endl;
    }else if(k==1){
        for(int i=1;i<=n;i++) cout<<i<<" ";cout<<endl;
    }else{
        cout<<-1<<endl;
    }
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}