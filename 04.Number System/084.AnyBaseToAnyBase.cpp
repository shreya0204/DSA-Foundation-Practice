/*
	

*/
#include <bits/stdc++.h>
using namespace std;

int AnyBaseToDecimal(int n, int base){
	int ans = 0;
	int power = 0;
	while(n){
		int rem = n%10;
		ans += rem * pow(base, power);
		power++;
		n = n/10;
	}
	return ans;
}

int AnyDecimalToBase(int n, int base){
	int ans = 0;
	int power = 0;
	while(n){
		int rem = n%base;
		ans += rem * pow(10, power);
		power++;
		n = n/base;
	}
	return ans;
}

int main(){

	int n, base1, base2;
	cin>>n>>base1>>base2;

	int base1ToDecimal = AnyBaseToDecimal(n, base1);
	int ans = AnyDecimalToBase(base1ToDecimal, base2);

	cout<<ans<<endl;


	return 0;
}