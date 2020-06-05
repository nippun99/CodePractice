#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	vector<int> *a;
	public:
	graph(int V){
		v=V;
		a=new vector<int>[v];
	}
		void addedge(int src,int dest){
		a[src].push_back(dest);
		a[dest].push_back(src);
	}
	bool checkbpart(int s,vector<bool> vis,vector<int> color){
		vis[s]=true;
		for(int i=0;i<a[s].size();i++){
			if(!vis[a[s][i]]){
				color[a[s][i]]=1-color[s];
				if(!checkbpart(a[s][i],vis,color))
					return false;
			}
			else if(color[s]==color[a[s][i]])
				return false;
		}
		return true;
	}
	
bool	dfs(int s){
		vector<bool> vis(v,false);
		vector<int> color(v,-1);
		color[s]=1;
		return checkbpart(s,vis,color);
	}
	
	
	
};

int main() {
	
		graph g(5);
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4);
//	g.addedge(0,4);
//	g.addedge(1,3);
	
	cout<<g.dfs(0);
	

	return 0;
}

