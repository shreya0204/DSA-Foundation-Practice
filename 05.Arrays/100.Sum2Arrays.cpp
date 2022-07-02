/*
	
	arr1 =     2 3 4 5 6
	arr2 = 1 1 1 4 1 2 1

	ans =  1 1 3 7 5 7 7
	
*/
 #include<bits/stdc++.h>
 using namespace std;


int main(){

	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}

	// Logic

	int max = n1>n2? n1:n2;
	int ans[max];
	int c = 0;
	int i = n1-1;
	int j = n2-1;
	int k = max - 1;

	while(k>=0){
		int d = c;

		if(i>=0){
			d += arr1[i];
		}
		
		if(j>=0){
			d +=arr2[i];
		}

		c = d/10;
		d = d%10;

		ans[k] = d;
		i--;
		j--;
		k--;
	}

	if(c!=0){
		cout<<c<<" ";
	}

	for(int val : ans){
		cout<<val<<" ";
	}

	return 0;
}