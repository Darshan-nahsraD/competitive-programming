/********ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् । उर्वारुकमिव बन्धनान् मृत्योर्मुक्षीय मामृतात् ॥********/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
//for mulitset => less_equal
using ll=long long ;
#define endl '\n'
vector<vector<int>> g;
vector<int> vis;

int check(int num){
    int sum=0;
    // int m=n;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
void solve(){
    int n;cin>>n;
    int sum=0;
    int m=n;
    while(n){
        sum+=n%10;
        n/=10;
    }
    if(sum%9==0 ){
        if(check(m+sum)==sum) {
        cout<<10<<endl;
        else if(m+)
    }
    }
    else cout<<0<<endl;
    
}

signed main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int t;cin>>t;while(t--)
        solve();
    
}