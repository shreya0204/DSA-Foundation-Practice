/*
	
	A number and it's base is given change it in decimal
	
*/
#include <bits/stdc++.h>
using namespace std;


int main(){


	int n, base;
	cin>>n>>base;

	int ans = 0;
	int power = 0;
	while(n){
		int rem = n%10;
		ans += rem * pow(base, power);
		power++;
		n = n/10;
	}

	cout<<ans<<endl;


	return 0;
}