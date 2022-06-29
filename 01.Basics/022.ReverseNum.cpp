// Print Reverse of a Number 
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	while(n){
		int d = n%10;
		cout<<d<<" ";
		n = n/10;
	}

	return 0;
}