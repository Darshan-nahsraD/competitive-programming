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
    string s;cin>>s;
    // mp[string , int]
    map<string,int> mp;

    for(int i=0;i<n-3;i++){
        string str;
        for(int j=i;j<i+4;j++) str+=s[j];
        // cout<<str<<endl;
        mp[str]++;
    }
    // for(auto ele: mp) cout<<ele.first<<" "<<ele.second;
    // cout<<mp[to_string(2025)]<<endl;

    if(mp["2026"]>=1 || mp["2025"]==0) cout<<0<<endl;
    else {
        // cout<<"YEs";
        cout<<1<<endl;
    }
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}