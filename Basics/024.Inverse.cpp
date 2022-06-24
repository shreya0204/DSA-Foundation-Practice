// Inverse the number
// Example : 15234 <----> 41235
#include <bits/stdc++.h>
using namespace std;

int CountDigits(int n){
	int count = 0;
	while(n){
		count++;
		n = n/10;
	}
	return count;
}

int main(){

	int n;
	cin>>n;
	int count = CountDigits(n);
	int arr[count];
	int ans[count];
	int index = count - 1;
	while(n){

		int d = n%10;
		arr[index--] = d;
		n = n/10;
	}

	for(int i=0;i<count;i++){
		int num = arr[i];
		ans[num-1] = i + 1;
	}

	for(int i=0;i<count;i++){
		cout<<ans[i]<<" ";
	}

	return 0;
}