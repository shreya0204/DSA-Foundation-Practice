/*
	5 * 1 = 5
	5 * 2 = 10
	5 * 3 = 15
	5 * 4 = 20
	5 * 5 = 25
	5 * 6 = 30
	5 * 7 = 35
	5 * 8 = 40
	5 * 9 = 45
	5 * 10 = 50

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int inc = 1;
	for(int i=1;i<=10;i++){
		cout<<n<<" * "<<inc<<" = "<<n*inc<<endl;
		inc++;
	}

	return 0;
}