// GCD and LCM of a number
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n1 , n2;
	cin>>n1>>n2;
	int originaln1 = n1, originaln2 = n2;
	int smaller = n1<n2? n1 : n2;
	int larger = n1>n2? n1 : n2;
	
	// GCD - Greatest Common Divisor - Largest number that can divide both numbers
	int divisor = smaller;
	int divident = larger;

	int rem = divident%divisor;
	while(rem){
		divident = divisor;
		divisor = rem;
		rem = divident%divisor; 
	}

	int gcd = divisor;
	int lcm = (originaln1*originaln2)/gcd;

	cout<<"GCD is : "<<gcd<<" and LCM is : "<<lcm<<endl;

	return 0;
}