
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=1;i<=t;i++){
        long long a,b;
        cin>>a>>b;
        if (b>a) swap(a,b);
        if (a>2*b) cout<<"NO"<<endl;
        else{
            a=a%3;b=b%3;
            if (b>a) swap(a,b);
            if ((a==0 && b==0) || (a==2 && b==1)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}