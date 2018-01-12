#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,k; string s,result; bool flag=true; char c;
	getline(cin,s);
	for(i=0;i<s.size();i++){
		c=s[i];
		if(isspace(c)){
			k=i;
			break;
		}
	}
	result+=s[0];
	for(i=1;i<k;i++){
		if(s[i]<s[k+1]) result+=s[i];
		else break;
	}
	result+=s[k+1];
	cout << result <<endl;
	return 0;
}