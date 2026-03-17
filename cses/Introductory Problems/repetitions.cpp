#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int curr_count=1;
    int max_count=1;
    for(int i=1;i<s.size();i++){
        if (s[i]==s[i-1]) {
            curr_count++;
            
        }
        else curr_count=1;
        if (curr_count>max_count) max_count=curr_count;
    }
    cout<<max_count;
    
    return 0;
}