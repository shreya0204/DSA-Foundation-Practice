// Rotate a number
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

	int n,k;
	cin>>n>>k;
	int count = CountDigits(n);

	// Handling k > count
	k = k%count;
	// Handling negative value of k
	if(k<0) k = k + count;

	int div = 1;
	int mul = 1;
	for(int i=1;i<=count;i++){
		if(i<=k) div = div*10;
		else mul = mul * 10;
	}

	// n=3645 k=2 ==> 4500+36
	int rem = n%div; 
	int ans = (rem*mul) + (n/div);

	cout<<ans<<endl;
	return 0;
}