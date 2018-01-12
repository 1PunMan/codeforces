#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int yellow,blue,i,result=0; vector<long long int> req; req.resize(3);
	cin >> yellow >> blue;
	for(i=0;i<3;i++){
		cin >> req[i];
	}
	yellow=yellow-2*req[0];
	if(yellow<0) result+=-1*yellow;
	blue=blue-3*req[2];
	if(blue<0) result+=-1*blue;
	if(yellow>0&&blue>0){
		yellow=yellow-req[1];
		blue=blue-req[1];
		if(yellow<0) result+=-1*yellow;
		if(blue<0) result+=-1*blue;
	}
	else if(yellow<=0&&blue>0){
		blue=blue-req[1];
		if(blue<0) result+=-1*blue;
		result+=req[1];
	}
	else if(yellow>0&&blue<=0){
		yellow=yellow-req[1];
		if(yellow<0) result+=-1*yellow;
		result+=req[1];
	}
	else if(yellow<=0&&blue<=0){
		result+=2*req[1];
	}
	cout << result << endl;
}