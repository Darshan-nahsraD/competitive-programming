#include <iostream>
using namespace std;

int main() {
    long long n,x;
    cin>>n;
    long long actual_sum=n*(n+1)/2;
    long long curr_sum=0;
    for(int i=1;i<n;i++){
        cin>>x;
        curr_sum+=x;
    }
    cout<<actual_sum-curr_sum;
    

    return 0;
}