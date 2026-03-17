
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int count=1;
    for (int i=1;i<n;i++){
        if (v[i]!=v[i-1])count++;
    }
    cout<<count;

    return 0;
}