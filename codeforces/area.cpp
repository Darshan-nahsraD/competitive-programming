#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int totalarea= 4* m * n;

        for(int i=0;i<n;i++){
            int a,b;
            int area;
            cin>>a>>b;
            area= 4*(((m*m - m*a )- b)/m);
            totalarea-=area;

        }
        cout<<totalarea<<endl;
    }
    

    return 0;
}