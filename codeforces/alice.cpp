#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        cout<<(((abs(a-b) - 1) % 2 ) ? "YES" : "NO") <<endl;
    }
    return 0;
}