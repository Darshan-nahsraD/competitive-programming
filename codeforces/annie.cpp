#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long sum=0;
        long long a, b,c;
        cin>>a>>b>>c;
        if(a<b){ cout<<"Second"<<endl;continue;}
        if(a>b){ cout<<"First"<<endl;continue;}
        cout<<((c%2 ==1)? "First" : "Second")<<endl;
        
        
    }
}