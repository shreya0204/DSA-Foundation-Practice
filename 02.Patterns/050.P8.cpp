/*
	
	    *
	   *
	  *
	 *
	*

*/

#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;


	int x = 1;
	int y = n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==x && j==y){
				cout<<"*";
				x++;
				y--;
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}