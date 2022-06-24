#include<bits/stdc++.h>

using namespace std;


int main(){
	int start, end;
	cin>>start>>end;
	for(int n = start;n<=end;n++){
		int count = 0;

		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				count++;
				break;
			}
		}
		if(count==0){
			cout<<n<<endl;
		}
	}

	return 0;
}