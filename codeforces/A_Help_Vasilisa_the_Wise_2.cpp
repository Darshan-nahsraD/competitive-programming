#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int r1, r2, c1, c2, d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int a, b, c, d;
    for(int i=1;i<10;i++){
        a=r1-i;
        b=c1-i;
        c=r2-c1+i;
        if(a>9 || a<=0) continue;
        if(b>9 || b<=0) continue;
        if(c>9 || c<=0) continue;
        if(a+c!=c2 || a+b != d2 || b+c != r2) continue;
        set<int>st;
        st.insert(i);
        st.insert(a);
        st.insert(b);
        st.insert(c);
        if(st.size()!=4) continue;
        cout<<i<<" "<<a<<endl;
        cout<<b<<" "<<c<<endl;
        return;
    }
    cout<<-1<<endl;

    
}

signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}