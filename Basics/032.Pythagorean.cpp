// Pythagorean Triplets - tell whether from 3 numers right angle tringle is possible or not
#include <bits/stdc++.h>
using namespace std;


int main(){

	int a, b, c;
	cin>>a>>b>>c;

	int max = a>b ? a>c? a : c : b>c? b : c;
	int hyp, base, per;
	
	if(max == a){
		hyp = max;
		base = b;
		per = c;
	}else if(max==b){
		hyp = b;
		base = a;
		per = c;
	}else{
		hyp = c;
		per = a;
		base = b;
	}

	if(hyp * hyp == ((base*base) + (per * per))){
		cout<<"True"<<endl; 
	}else{
		cout<<"False"<<endl;
	}
	

	return 0;
}