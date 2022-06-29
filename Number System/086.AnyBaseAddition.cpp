/*
	
	Two numbers and it's base is given. Find the base addition

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n1, n2, base;
	cin>>n1>>n2>>base;

	int ans = 0;
	int power = 0;
	int carry = 0;
	while(n1>0|| n2>0 || carry>0){
		int rem1 = n1%10;
		int rem2 = n2%10;
		n1 = n1/10;
		n2 = n2/10;

		int sum = rem1 + rem2 + carry;
		// Carry taken
		carry = sum/base;
		// remainder taken
		sum = sum%base;

		ans +=sum * pow(10, power);
		power++;
	}

	cout<<ans<<endl;

	return 0;
}