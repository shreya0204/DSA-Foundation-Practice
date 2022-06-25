/*

	*** ***
	**   **
	*     *
	**   **
	*** ***

*/

#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;

	int stars = (n/2)+1;
	int space = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=stars;j++){
			cout<<"*";
		}
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=stars;j++){
			cout<<"*";
		}
		if(i<=n/2){
			space+=2;
			stars--;
		}else{
			space-=2;
			stars++;
		}
		cout<<endl;
	}
	return 0;
}