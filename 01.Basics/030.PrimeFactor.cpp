// Print all prime factors of a number
// Example : Prime Factor of 24 is 2 2 2 3
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;

	for(int div=2; div * div <=n;div++){
		while(n%div == 0){
			n = n/div;
			cout<<div<<" "; 
		}
	}

	// For those numbers who are prime themselves
	// Example factors of 46 : 2 23 
	// This case will handle 23
	if(n!=1){
		cout<<n<<endl;
	}



	return 0;
}