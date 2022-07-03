/**/
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n1, n2;
	cin>>n;

	int arr1[n1];

	for(int i=0;i<n1;i++){
		cin>>arr1[n];
	}

	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}

	// Logic


	int diff[n2];
	int c= 0;
	int i=n1-1;
	int j= n2-1;
	int k = n2 - 1;


	while(k>=0){
		int d = 0;
		int val = i>=0? arr1[i] : 0;
		if(arr2[j] + c  >= arr1[i]){
			d = arr2[j] + c - val;
			c = 0;
		}else{
			d = arr2[j] + c + 10 - val;
			c = -1;
		}

		diff[k] = d;

		i--;
		j--;
		k--;
	} 

	int index = 0;
	while(index < n2 - 1){
		if(diff[index] == 0){
			index++;
		}else{
			break;
		}
	}

	while(index < n2 - 1){
		cout<<diff[index++]<<" ";
	}

	return 0;
}