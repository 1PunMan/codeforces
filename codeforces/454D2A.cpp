#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int p,m,s,ma;
	
		cin >> p >> m >> s >> ma;
		if(ma>s*2||ma>=m||s>2*ma){
			cout << -1 << endl;
		}
		else{
			cout << 2*p << endl << 2*m << endl << max(s,ma) << endl;
		}
	
	return 0;
}