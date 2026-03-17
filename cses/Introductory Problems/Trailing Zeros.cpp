#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans=0;
    while (n>=1){
        if(n/5 >=1) ans=ans + n/5;
        n/=5;
    }
    
    cout<<ans;
    return 0;
}