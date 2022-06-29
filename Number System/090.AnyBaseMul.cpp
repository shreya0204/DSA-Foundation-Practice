/*

*/
#include <bits/stdc++.h>
using namespace std;

int AnyBaseAddition(int n1, int n2, int base){
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

	return ans;
}

int getProductWithSingleDigit(int base, int n1, int digit){
	
	int ans = 0;
	int carry = 0;
	int power = 0;

	while(n1> 0 || carry > 0){
		int rem1 = n1%10;
		n1= n1/10;

		int mul = rem1 * digit + carry;
		carry = mul/base;
		mul = mul%base;

		ans += mul * pow(10, power);
		power++;
	}

	return ans;
}	

int main(){

	int n1, n2, base;
	cin>>n1>>n2>>base;
	
	int ans = 0;
	int power = 0;
	
	while(n2> 0){
		int digit = n2%10;
		n2 = n2/10;

		int singleProduct = getProductWithSingleDigit(base, n1, digit);
		ans = AnyBaseAddition(ans, singleProduct * pow(10, power++), base);

	}

	cout<<ans<<endl;

	return 0;
}