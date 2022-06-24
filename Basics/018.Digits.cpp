// Count Digits In A Number
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int count = 1;
	while(n){
		count++;
		n = n/10;
	}
	cout<<count;

	return 0;
}