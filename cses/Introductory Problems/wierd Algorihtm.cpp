
#include <iostream>
using namespace std;


int main()
{
    long long a; 
    cin>>a;
    cout<<a<<" ";
    while (a!=1){
        if (a%2==0){
            a/=2;
        }
        else{
            a=(a*3) +1;
        }
        cout<<a<<" ";
    }
    return 0;
}