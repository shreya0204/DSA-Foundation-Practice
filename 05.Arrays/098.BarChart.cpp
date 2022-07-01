/*
	arr = [5,3,4,1,0,2]

	*
	*   *
	* * *
	* * *    *
	* * * *  *

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int max = INT_MIN;

	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	int index = 0;
	for(int i=max;i>0;i--){
		for(int j=0;j<n;j++){
				if((arr[j] - i) >= 0){
					cout<<"*";
				}else{
					cout<<" ";
				}
		}
		cout<<endl;
	}

	return 0;
}