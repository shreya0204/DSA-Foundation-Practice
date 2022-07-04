/*
	
	Next Greater Element to Right
	Method-1 : Iterating from right to left

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;
	vector<int> num;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		num.push_back(x);
	}

	stack<int> st;
	vector<int> nge(n);

	st.push(num[n-1]);
	nge[n-1] = -1;
	for(int i=n-2;i>=0;i--){
		
		while(st.size() > 0 && num[i] >= st.top()){
			st.pop();
		}
		if(st.size()==0){
			nge[i] = -1;
		}else{
			nge[i] = st.top();
		}

		st.push(num[i]);
	}

	for(int i=0;i<n;i++){
		cout<<"NGE of "<<num[i]<<" to the left is "<<nge[i]<<endl;
	}


	return 0;
}