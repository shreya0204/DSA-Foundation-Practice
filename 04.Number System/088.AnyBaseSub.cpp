/*
	
	Two numbers and it's base is given. Find the base subtraction n2 - n1.

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n1, n2, base;
	cin>>n1>>n2>>base;

	int ans = 0;
	int power = 0;
	int carry = 0;
	while(n2 > 0){
		int rem1 = n1%10;
		int rem2 = n2%10;
		n1 = n1/10;
		n2 = n2/10;

		int diff = 0;
		rem2 += carry;

		if(rem2>= rem1){
			carry = 0;
			diff = rem2 - rem1;
		}else{
			carry = -1;
			rem2 = rem2 + base;
			diff = rem2 - rem1;
		}

		ans += diff * pow(10, power);
		power++;
	}
	
	cout<<ans<<endl;

	return 0;
}