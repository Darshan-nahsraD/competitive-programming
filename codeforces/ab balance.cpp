#include<bits/stdc++.h>
using namespace std;
void solve (){
    string s ;
    cin>>s;
    int ab=0, ba=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a' && s[i+1]=='b') {ab++; continue;}
        if(s[i]=='b' && s[i+1]=='a') {ba++; continue;}
        
    }
    if(ab==ba){
        cout<<s<<endl;return;
    }
    if(ba>ab){
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') {s[i]='a';cout<<s<<endl;return;}
        }
    }
    if(ba<ab){
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') {s[i]='b';cout<<s<<endl;return;}
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}