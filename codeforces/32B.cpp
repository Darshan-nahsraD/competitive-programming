
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s; 
    string ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.') ans.push_back('0');
        else if (i<s.size()-1 && (s[i]=='-' && s[i+1]=='-')) {ans.push_back('2');i++;}
        else if (i<s.size()-1 && (s[i]=='-' && s[i+1]=='.')) {ans.push_back('1');i++;}
    }
    cout<<ans;
    return 0;
}