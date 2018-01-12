#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){	
	int n,res;
	cin >> n;
	if(n%2){
		n++;
		res = (n*n)/4;
	}
	else{
		res = (n/2)*(n/2+1);
	}
	cout << res << endl;
	return 0;
}