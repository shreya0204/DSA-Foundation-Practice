/*	
	    1
	  2 3 2 
	3 4 5 4 3
	  2 3 2
	    1

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int space = n/2;
	int stars = 1;
	int val = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=space;j++){
			cout<<" ";
		}

		int cval = val;
		for(int j=1;j<=stars;j++){
			cout<<cval;
			
			if(j<=n/2) cval++;
			else cval--;
		}
		
		if(i<=n/2){
			space--;
			stars+=2;
			val++;
		}else{
			space++;
			stars-=2;
			val--;
		}
		cout<<endl;
	}


	return 0;
}