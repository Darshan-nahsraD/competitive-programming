/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    int n;cin>>n;
    int arr[n];
    int mx=-1, mn=1e18;map<int,int> mp;
    for(int i=0;i<n;i++) {cin>>arr[i]; 
        mp[arr[i]]++;
        mx=max(mx, arr[i]);
        mn=min(mn, arr[i]);
    }

    int a=mp.begin()->second;

    int b=prev(mp.end())->second;

    // cout<<a<<" "<<b<<endl;

    cout<<a* b* 2<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}