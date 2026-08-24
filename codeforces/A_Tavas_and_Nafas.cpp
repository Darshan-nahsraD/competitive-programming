#include <bits/stdc++.h>
using namespace std; 
#define int long long 

void solve(){
    int n;cin>>n;
    if(n==0) {cout<<"zero"; return;}
    string arr[20] = {"zero",
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen"
    };
    string twenties[10] = {"zero","zero",
        "twenty", "thirty", "forty", "fifty", "sixty",
        "seventy", "eighty", "ninety"
    };
    
    if(n<20) {cout<<arr[n]<<endl;return;}
    if(n%10==0) {cout<<twenties[n/10];return;}
  
    cout<<twenties[n/10]<<"-"<<arr[n%10];


}

signed main(){
    solve ();
}