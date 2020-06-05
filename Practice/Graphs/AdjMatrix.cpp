#include<bits/stdc++.h>
using namespace std;
void addedge(vector<vector<int>> &adj, int u,int v){
	adj[u][v]=1;
	adj[v][u]=1;
}

void printlist(vector<vector<int>> adj,int v){
	for(int i=0;i<v;i++){
		cout<<i<<" ke edge: ";
		for(int j=0;j<v;j++){
		if(adj[i][j]==1)
			cout<<j<<",";
		}
		cout<<endl;
	}
	
	
}

int main() {
	int v=5;
	vector<vector<int>> adj(v,vector<int>(v,0));	 
	addedge(adj,0,1);
	addedge(adj,0,4);
	addedge(adj,1,4);
	addedge(adj,1,3);
	addedge(adj,2,3);
	addedge(adj,3,4);
	addedge(adj,1,2);
	printlist(adj,v);
	
	return 0;
}

