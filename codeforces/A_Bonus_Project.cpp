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
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int brr[n];
    for(int i=0;i<n;i++) cin>>brr[i];

    vector<int> v(n,0);
    for(int i=n-1;i>=0;i--){
        int x=arr[i]/brr[i];
        if(k>=x) {
            v[i]=x;
            k-=x;
        }else{
            v[i]=k;
            k=0;
            break;
        }
    }
    if(k){
        for(int i=0;i<n;i++) cout<<0<<" ";
    }else{
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    // int t;cin>>t;while(t--)
        solve();
    
}

