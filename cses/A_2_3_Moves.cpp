#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(abs(x)==1){cout<<2<<endl;continue;}
        if(x%3==0) cout<<x/3<<endl;
        else cout<<x/3 +1 <<endl;

    }
}