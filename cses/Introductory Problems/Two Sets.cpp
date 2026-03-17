
#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long val=n*(n+1);
    
    if (val % 4==0 ){
        long long sum=val/4;
        cout<<"YES"<<endl;
        vector<long long>v1,v2;
        for (auto i=n;i>0;i--){
            if (sum-i>=0){
                v1.push_back(i);
                sum-=i;
            }
            else{
                v2.push_back(i);
            }
            
        }
        //tere bhai ki printing
        cout<<v1.size()<<endl;
        for(auto ele: v1) cout<<ele<<" ";
        cout<<endl<<v2.size()<<endl;
        for(auto ele: v2) cout<<ele<<" ";
    }
    else {
        cout<<"NO";
    }
    

    return 0;
}