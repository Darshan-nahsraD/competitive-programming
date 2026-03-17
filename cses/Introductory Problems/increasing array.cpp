
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n,x;
    vector<long long> arr;
    
    cin>>n;
    for(auto i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    long long moves=0;
    for(auto i=1;i<n;i++){
        if (arr[i]<arr[i-1]) {
            moves+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<moves;
    return 0;
}