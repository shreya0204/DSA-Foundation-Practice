/*
	
	Method-2 : Iterating from left to right
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

	st.push(0);


	for(int i=1;i<n;i++){
		while( st.size() > 0 && num[i] > num[st.top()]){
			nge[st.top()] = num[i];
			st.pop();
		}
		st.push(i);
	}

	while(st.size() > 0){
		nge[st.top()] = -1;
		st.pop();
	}

	for(int i=0;i<n;i++){
		cout<<"Next greater element of "<<num[i]<<" is "<<nge[i]<<endl;
	}


	return 0;
}