#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> al[],int u,int v){
	al[u].push_back(v);	
	al[v].push_back(u);	
}
void printlist(vector<int> al[],int v){
	for(int i=0;i<v;i++){
		cout<<i<<" ke ";
		for(int j=0;j<al[i].size();j++){
			cout<<al[i][j];
		}
		cout<<endl;
	}
}

int main() {
	int v=5;
	vector<int> al[v];
	addedge(al,0,1);
	addedge(al,0,4);
	addedge(al,1,4);
	addedge(al,1,3);
	addedge(al,2,3);
	addedge(al,3,4);
	addedge(al,1,2);
	printlist(al,v);
	return 0;
}

