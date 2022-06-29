#include <bits/stdc++.h>
using namespace std;


int main(){

	int end;
	cin>>end;

	int n1 = 0;
	int n2 = 1;
	cout<<n1<<" "<<n2<<" ";
	for(int i=2;i<end ;i++){
		int num = n1 + n2;
		n1 = n2;
		n2 = num;
		cout<<num<<" ";
	}

	return 0;
}