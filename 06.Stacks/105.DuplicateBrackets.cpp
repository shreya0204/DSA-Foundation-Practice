/*

	(a + b) + (( c + d )) --> true ( yes, duplicacy is there)
	((a + b) + (c + d )) ---> false (no, no duplicacy)  

*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	string s;
	cin>>s;
	stack<char> st;
	bool isFalse = 1;
	for(int i=0;i<s.size();i++){
		int charAtI = s[i];
		if(charAtI == ')'){
			if(st.top() == '('){
				isFalse = 0;
				break;
			}else{
				while(st.top()!='('){
					st.pop();
				}
				st.pop();
			}
		} else{
			st.push(charAtI);
		}
	}

	isFalse == 0? cout<<"False"<<endl : cout<<"True"<<endl;

	return 0;
}