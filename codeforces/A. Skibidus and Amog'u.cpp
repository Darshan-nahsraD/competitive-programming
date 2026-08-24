#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;

    s.erase((--s.end()));
    s.erase((--s.end()));
    s.append("i");
    cout<<s<<endl;
}
int main (){
    int t;cin>>t;
    while(t--){
        solve();

    }
}