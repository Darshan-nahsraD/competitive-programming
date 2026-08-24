#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int k,s;cin>>k>>s;
    set<tuple<int,int,int>>st;

    for(int i=0;i<=min(s,k);i++){
        int sum=s-i;
        int x=i,y=min(s,k);
        while(x<=y){
            if(x+y==sum){
                st.insert({i,x, y});
                x++;y--;
            }
            else if(x+y>sum) y--;
            else x++;
        }

    }
    
    int cnt=0;
    for(auto &ele : st){
        int x, y, z;
        tie(x,y,z)=ele;
        // cout<<x<<" "<<y<<" "<<z<<endl;
        if(x==y && y==z) cnt+=1;
        else if(x==y || y==z || x==z) cnt+=3;
        else cnt+=6;
    }
    cout<<cnt<<endl;

    
    
}

signed main(){
    ios_base:: sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}