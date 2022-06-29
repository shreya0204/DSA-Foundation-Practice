/*
	
	A number is given in decimal form -- need to convert it in given number base.

*/
#include <bits/stdc++.h>
using namespace std;


int main(){


	int n, base;
	cin>>n>>base;

	int ans = 0;
	int power = 0;
	while(n){
		int rem = n%base;
		ans += rem * pow(10, power);
		power++;
		n = n/base;
	}

	cout<<ans<<endl;

	return 0;
}