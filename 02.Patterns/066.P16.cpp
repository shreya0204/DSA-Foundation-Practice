/*
	1     1
	12   21
	123 321
	1234321

*/

#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;
	
	int stars = 1;
	int space = n + (n-1) - 2;

	for(int i=1;i<=n;i++){
		int val = 1;

		for(int j=1;j<=stars;j++){
			cout<<val;
			val++;
		}
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		if(i==n){
			stars--;
			val--;
		}
		for(int j=1;j<=stars;j++){
			val--;
			cout<<val;
		}
		space-=2;
		stars++;
		cout<<endl;
	}

	return 0;
}