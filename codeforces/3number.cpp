#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

ulli countTwoNumsSum(ulli target, ulli limit) {
    // return how many pairs of numbers from 0 to limit that sum upto 
    // target 
    if (target <= limit){
        return target + 1;
    }
    else {
        return (2*limit) - target + 1;
    }
}

void solve() {
    int k, s;
    cin >> k >> s;
    
    if (k == 0 && s > 0) {
        cout<< 0 << endl;
        return;
    }

    ulli limit = min(k, s);
    ulli count = 0;
    
    for (int x=0; x<=limit; x++) {
        count += countTwoNumsSum(s-x, limit);
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}