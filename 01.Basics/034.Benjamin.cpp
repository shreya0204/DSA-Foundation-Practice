// Bejamin Bulbs
/*	If there are n bulbs n voltage fluctuations will happen in each fluctuation bulb state is reversed
	from on to off and vice versa.
	determine after n fluctuations how many bulb will be switched on given all bulbs were switched off 
	initially.

	Logic : The perfect square number will be switched on as they have odd number of factors  

*/
#include <bits/stdc++.h>
using namespace std;


int main(){


	int n;
	cin>>n;

	for(int i = 1;i*i<=n;i++){
		cout<<i*i<<" ";
	}

	return 0;
}