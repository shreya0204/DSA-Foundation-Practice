// Count the frequency of a digit in a nuumber
#include <bits/stdc++.h>
using namespace std;

int CountFrequency(int n, int target){
	int count=0;
	while(n){
		int rem = n%10;
		if(rem==target){
			count++;
		}
		n = n/10;
	}
	return count;
}


int main(){

	int n, target;
	cin>>n>>target;

	int ans = CountFrequency(n, target);
	cout<<ans<<endl;

	return 0;
}