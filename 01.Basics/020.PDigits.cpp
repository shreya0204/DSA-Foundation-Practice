// Print digits of a number
// Exception : not printing zero like 100 is printed as 1
#include <bits/stdc++.h>
using namespace std;

int CountDigitsAndReturnPower(int n){
	int ten = 1;
	int count = 1;
	while(n){
		count++;
		n = n/10;
	}
	
	for(int i=1;i<count-1;i++){
		ten = ten*10;
	}
	return ten;
}

int main(){

	int n;
	cin>>n;
	int ten = CountDigitsAndReturnPower(n);
	while(ten!=0){
		int d = n/ten;
		cout<<d<<" ";
		n= n%ten;
		ten = ten/10;
	}

	return 0;
}