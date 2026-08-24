#include <bits/stdc++.h>
using namespace std;

int main() {
	long long num;
	cin >> num;    //Reading input from STDIN
	
	if (num%2 == 1) cout<<0<<endl;
	else if (num%4 == 0) cout<<num/4 - 1<<endl;
	else cout<<num/4<<endl;
}

