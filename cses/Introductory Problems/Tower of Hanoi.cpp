#include <iostream>
#include <cmath>

using namespace std;
void fib(int n, int source, int helper , int distination){
    if (n==1) {cout<<source<<" "<<distination<<endl; return ;}
    fib(n-1, source, distination, helper);
    cout<<source<<" "<<distination<<endl;
    fib(n-1, helper, source, distination);
}

int main(){
    int n;
    cin>>n;
    cout<<pow(2,n) -1<<endl;
    fib(n,1,2,3);
    
    return 0;
}