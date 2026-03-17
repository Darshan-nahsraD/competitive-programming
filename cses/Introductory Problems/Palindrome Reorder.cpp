#include <iostream>
#include <map>
#include <algorithm>

using namespace std;


int main(){
    string s,s1,s2,ans;
    map<char, int> box;
    cin>>s;
    for (auto ele:s){
        box[ele]++;
    }
    char odd_char = '\0'; 
    int odd_count = 0;
    for (auto ele : box){
        if (ele.second % 2 !=0){
            odd_count++;
            odd_char=ele.first;
        }
        if (odd_count>1){
            cout<<"NO SOLUTION";
            return 0;
        }
        // s1+=ele.first;
        // box[ele.first]-=1;
        s1 += string(ele.second / 2, ele.first);
    }
    s2 = s1;
    reverse(s2.begin(), s2.end());
    if (odd_count==1)ans =s1+odd_char+ s2;
    else ans=s1+s2;
    
    cout<<ans<<endl;

    return 0;
}