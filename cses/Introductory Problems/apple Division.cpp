#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if (n==1) {cout<<n; return 0;}
    
    
    long long arr[n];
    for (long long i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    
    
    if (n==2) {cout<<abs(arr[0]-arr[1]); return 0;}
    
    long long box1,box2;
    box1=0;
    box2=0;
    
    for (auto ele : arr){
        if (box1>=box2){
            box2+=ele;
        }
        else{
            box1+=ele;
        }
    }
    cout<<abs(box1-box2);

    return 0;
}