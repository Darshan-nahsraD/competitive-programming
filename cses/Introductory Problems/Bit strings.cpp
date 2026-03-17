
#include <iostream>
#include <cmath>
#define mod 1000000007
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=1;
    for (int i=1;i<=n;i++){
        ans=(ans*2) % mod;
    }
    cout<<ans;
    return 0;
}



