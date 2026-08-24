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
    int arr[n][2];
    map<int,int>mp;
    for(int i=0;i<n;i++) {cin>>arr[i][0]; mp[arr[i][0]]=i;}

    int flag=0;
    for(int i=1;i<=n;i++){
        arr[mp[i]][1]=flag;
        flag=1-flag;
    }

    for(int i=1;i<n;i++){
        if(arr[i][1]==arr[i-1][1]){
            cout<<"NO"<<endl; return;
        }
    }
    cout<<"YES"<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}