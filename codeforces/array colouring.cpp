#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool odd=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2 ==1 ){
                
                if(odd==true)odd=false;
                else if(odd==false) odd=true;
                
            }
                
        }
        cout<<((odd)? "yes": "no")<<endl;
        
        
    }
}