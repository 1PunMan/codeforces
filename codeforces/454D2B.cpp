#include <bits/stdc++.h>
using namespace std;

char result[12][12];

int main()
{
	int x,y,i,j; bool flag=true;
    for(int i=0;i<11;i++)
        gets(result[i]);
    cin >> x >> y;
    x%=3,y%=3;
    if(x==0) x=3;
    if(y==0) y=3;
    for(i=4*(x-1);i<4*x;i++)
    {
        for(j=4*(y-1);j<4*y;j++)
            if(result[i][j]=='.')
            {
                flag=false;
                break;
            }
        if(!flag)
            break;
    }
    if(flag)
    {
        for(i=0;i<11;i++)
            for(j=0;j<11;j++)
                if(result[i][j]=='.')
                    result[i][j]='!';
    }
    else
    {
        for(i=4*(x-1);i<4*x;i++)
            for(j=4*(y-1);j<4*y;j++)
                if(result[i][j]=='.')
                    result[i][j]='!';
    }
    for(int i=0;i<11;i++)
    {
        printf("%s\n",result[i]);
    }
    return 0;
}
