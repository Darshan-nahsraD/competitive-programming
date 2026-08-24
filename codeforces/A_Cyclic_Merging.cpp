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
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> v;
    v.push_back(max(arr[0], arr[n-1]));
    for(int i=1;i<n;i++){
        v.push_back(max(arr[i], arr[i-1]));
    }
    sort(v.begin(), v.end());
    v.pop_back();
    int sum=0;
    for(auto ele: v) sum+=ele;
    cout<<sum<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}