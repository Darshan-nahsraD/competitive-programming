/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n, s;cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int mn=*min_element(arr, arr+n);
    int mx=*max_element(arr, arr+n);

    if(s<=mn) cout<<mx-s<<endl;
    else if(s>=mx) cout<<s-mn<<endl;
    else {
        int x=s-mn +mx-mn;
        int y=mx-s+mx-mn;
        cout<<min(x, y)<<endl;
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}