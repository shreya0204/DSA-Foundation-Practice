/*
	
	0
	1 1
	2 3 5
	8 13 21 34

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;

	int n1 = 0;
	int n2 = 1;
	int sum = n1+n2;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<n1<<" ";
			sum = n1+n2;
			n1 = n2;
			n2 = sum;
		}
		cout<<endl;
	}

	return 0;
}