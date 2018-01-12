#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int i=0,n,k,l=1,r,result=0; bool flag=true;
	cin >> n >> k; r=n;

  if(k==1)
  cout << n << endl;
  else
  {
    while(n>=l)
    {
        l<<=1;
    }
    l >>=1;
    while(l!=0)
    {
      result+=l;
      l>>=1;
    }
    cout << result << endl;
  }
  return 0;

}