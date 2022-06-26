/*	
	  		*
	  		*	*
	*	*	*	*	*
	  		*	*
	  		*

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int cspace = n/2;
	int val = 1;
	int space = n/2;	
	for(int i=1;i<=n;i++){
		if(i==(n/2)+1){
			for(int j=1;j<=n;j++){
				cout<<"*"<<" ";
			}
			val--;
		}else{
			for(int j=1;j<=cspace;j++){
				cout<<" "<<" ";
			}
			for(int j=1;j<=val;j++){
				cout<<"*"<<" ";
			}
			for(int j=1;j<=space;j++){
				cout<<" "<<" ";
			}
			if(i<=n/2){
				val++;
				space--;
			}else{
				val--;
				space++;
			}
		}
		cout<<endl;
	}

	return 0;
}