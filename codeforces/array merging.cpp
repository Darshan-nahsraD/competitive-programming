#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    unordered_map<int, int > m,p;
    int curr=-1;
    int count=0;
    for(int i=0;i< n;i++){
        if (a[i] == curr) count++;
        else count = 1;
        m[a[i]] = max(m[a[i]], count);
        curr = a[i];
    }
     curr=-1;
     count=0;

    for(int i=0;i< n;i++){
        if(b[i]==curr) count++;
        else count=1;
        
        p[b[i]]= max(p[b[i]],count);
        curr=b[i];
    }

    long long mx=0;
    
    for(auto ele : m){
        
        int x=ele.second; 
        int y=((p.find(ele.first)==p.end())? 0 : p[ele.first]); 
        long long sum=x+y;
        mx=max(mx, sum);
        // cout<<x<<" "<<y<<endl;
    }
    for(auto ele : p){
        
        int x=ele.second; 
        int y=((m.find(ele.first)==m.end())? 0 : m[ele.first]); 
        long long sum=x+y;
        mx=max(mx, sum);
        // cout<<x<<" "<<y<<endl;
    }
    cout<<mx<<endl;

}
int main (){
    int t;cin>>t;
    while(t--){
        solve();

    }
}
// 4
// 3
// 4
// 3
// 6