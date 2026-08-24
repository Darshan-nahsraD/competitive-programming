#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, s, k;
    cin>>n>>s>>k;
    set<int> st;
    while(k--){
        int y;cin>>y;
        st.insert((y));
    }
    int i=s;
    int j=s+1;
    int x=INT_MAX;
    while(i>0){
        if(st.find(i)==st.end()){ x=min(x,abs(i-s));break;}

        // cout<<i<<" ";
        i--;
    }
    // cout<<endl;
    while(j<=n){
        if(st.find(j)==st.end()){ x=min(x,abs(j-s));break;}
        // cout<<j<<" ";
        j++;
    }
    cout<<x<<endl;


}

int main(){
    ios_base:: sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
}