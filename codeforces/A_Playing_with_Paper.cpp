#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int a, b;
    cin>>a>>b;
    int ans=0;
    while(a>0 && b>0){
        if(a>=b){
            ans+=a/b;
            a=a%b;
        }
        else{
            ans+=b/a;
            b=b%a;
        }
    }
    
    cout<<ans<<endl;
}