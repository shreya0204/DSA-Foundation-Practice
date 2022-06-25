/*
	
	  *
	 * *
	*   *
	 * *
	  *


*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;

	int is = -1, stars = 1, os = (n-1)/2;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=os;j++){
			cout<<" ";
		}
		for(int j=1;j<=stars;j++){
			cout<<"*";
		}
		for(int j=1;j<=is;j++){
			cout<<" ";
		}
		for(int j=1;j<=stars && !(is<0);j++){
			cout<<"*";
		}
		for(int j=1;j<=os;j++){
			cout<<" ";
		}

		if(i<=n/2){
			os--;
			is+=2;
		}else{
			os++;
			is-=2;
		}
		cout<<endl;
	}


	return 0;
}