/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
#define endl '\n'
#define int long long

void solve(){
    // int n;cin>>n;
    int n, k, m;cin>>n>>k>>m;
    string s;cin>>s;

    int prev=-1;
    string ans="";
    for(int i=0;i<n;i++){
        set<char>st;int curr;char ch;
        for(int j=prev+1;j<m;j++){
            if(st.find(s[j])==st.end()){
                curr=j; ch=s[j];
            }
            st.insert(s[j]);
            if(st.size()==k) break;
        }
        if(st.size()<k) {
            cout<<"NO"<<endl;
            for(char xx='a';xx<'a'+k;xx++){
                if(st.find(xx)==st.end()) {ans.push_back(xx);break;}
            }
            int num=n-ans.size();
            while(num--){
                ans.push_back('a');
            }
            cout<<ans<<endl;return;
        }

        ans.push_back(ch);
        prev=curr;
    }
    cout<<"YES"<<endl;
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;cin>>t;while(t--)
        solve();
    
}