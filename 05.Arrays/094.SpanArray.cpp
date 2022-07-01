/*

	Span of an array - difference between the max and min ele of an array.

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int max = INT_MIN;
	int min = INT_MAX;

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
		}else if(arr[i] < min){
			min = arr[i];
		}
	}

	cout<<max-min<<endl;

	return 0;
}