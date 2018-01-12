#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,count=0,size=0; vector<int> present(256,0); vector<char> intersection; string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(size==0){
			size=s.size();
			for(i=2;i<s.size();i++){
				present[s[i]]=1;
			}
		}
		else if(s[0]='!'){
			for(i=2;i<s.size();i++){
				if(present[s[i]==1) present[s[i]]=2;
			}
			
		}
	}
	return 0;
}