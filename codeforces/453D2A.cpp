#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int teleporters,house,i,curr,next,result=-1;
	cin >> teleporters >> house;
	vector<int> mark; mark.resize(house+1,0);
	for(i=0;i<teleporters;i++){
		cin >> curr >> next;
		if(next>mark[curr])mark[curr]=next;
	}i=mark[0];
	while(teleporters--){
		if(result==*max_element(mark.begin(),mark.begin()+i)){
			break;
		}
		else{
			if(result<*max_element(mark.begin(),mark.begin()+i)){
				result=*max_element(mark.begin(),mark.begin()+i);
			}
			i=result+1;
			//cout << result << " ";
		}
	}
	if(result==house) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}