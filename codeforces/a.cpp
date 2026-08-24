#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;    //Reading input from STDIN
	while(T--){
		int n,k;
		cin>>n>>k;
		int mini=INT_MAX;
		for (int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x < mini) mini=x;
		}
		if(mini<k) cout<< k-mini<<endl;
		else cout<<0<<endl;
	}
}