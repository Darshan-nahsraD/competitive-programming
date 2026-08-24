#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    // int lcm=12;
    if(n&1 || n==2) {cout<<-1<<endl; return;}
    if(n==4|| n==6) {cout<<1<<" "<<1<<endl; return;}
    if(n%12 == 0){
        cout<<n/6<<" "<<n/4<<endl;
        return;
    }
    
            long long mx,mn;
            mx=(n/12)*3;
            mn=(n/12)*2;
            if(n%12 ==2) {mx+=0;mn+=1;}
            else if(n%12 ==4) {mx+=1;mn+=1;}
            else if(n%12 ==6) {mx+=1;mn+=1;}
            else if(n%12 ==8) {mx+=2;mn+=2;}
            else if(n%12==10) {mx+=2;mn+=2;}
            cout<<mn<<" "<<mx<<endl;
            // 1 1
            // -1
            // 4 6
            // 166374058999707392 249561088499561088
            
}
int main (){
    int t;cin>>t;
    while(t--){
        solve();

    }
}