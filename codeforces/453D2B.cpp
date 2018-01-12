#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int result=1;
vector<int> color(10001,0);
vector<int> visited(10001,0);
void dfs(vector<vector<int>> tree,int start){
	visited[start]=1;
	for(int i=0;i<tree[start].size();i++){
		int edge=tree[start][i];
		if(!visited[edge]){
			if(color[edge]!=color[start]){
				result++; }
				dfs(tree,edge);
			
		}
	}
}

int main(){
	int i,n,temp; vector<vector<int>> tree; 
	scanf("%d",&n);
	tree.resize(n+1); 
	for(i=2;i<=n;i++){
		scanf("%d",&temp);
		tree[i].push_back(temp);
		tree[temp].push_back(i);
	}
	for(i=0;i<n;i++){
		scanf("%d",&temp);
		color[i+1]=temp;
	}
	dfs(tree,1);
	printf("%d\n",result);
	return 0;
}