/**/
#include <bits/stdc++.h>
using namespace std;


int main(){

	string s;
	cin>>s;
	bool isValid = 1;
	stack<char> st;

	for(int i=0;i<s.size();i++){
		int charAtI = s[i];
		if(charAtI=='(' || charAtI == '{' || charAtI == '['){
			st.push(charAtI);
		}else if(charAtI==')' || charAtI=='}' || charAtI==']'){
			if(charAtI==')' && st.top()=='(' || charAtI=='}' && st.top()=='{' || charAtI==']' && st.top()=='['){
				st.pop();
			}else{
				isValid = 0;
				break;
			}
		}
	}

	if(st.size() ==0 && isValid == 1){
		cout<<"True"<<endl;
	}else{
		cout<<"False"<<endl;
	}

	return 0;
}