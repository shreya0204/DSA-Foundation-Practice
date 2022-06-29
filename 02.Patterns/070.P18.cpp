/*	
	
	*******
	 *   *
	  * *
	   *
	  ***
	 *****
	*******

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int stars = n;
	int ospace = 0;
	int ispace = 0;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=ispace;j++){
			cout<<" ";
		}
		for(int j=1;j<=stars;j++){
			if(i>1 && i<=n/2 && j>1 && j<stars){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		if(i<=n/2){
			stars-=2;
			ispace++;
		}else{
			stars+=2;
			ispace--;
		}
		cout<<endl;
	}

	return 0;
}