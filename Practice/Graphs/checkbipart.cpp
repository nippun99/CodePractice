#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	vector<int> *a;
	public:
	graph(int V){
		int v=V;
		a=new vector<int>[v];
	}
	
	void addedge(int src,int dest){
		a[src].push_back(dest);
		a[dest].push_back(src);
	}
	bool bpart(int s){
		vector<bool> visited(v,false);
		queue<int> q;
		vector<int> color(v,-1);
		q.push(s);
		visited[s]=true;
		color[s]=1;
		while(!q.empty()){
			int p=q.front();
			q.pop();
			for(int i=0;i<a[p].size();i++){
				if((!visited[a[p][i]])  && color[a[p][i]]==-1){
					q.push(a[p][i]);
					visited[a[p][i]]=true;
					color[a[p][i]]=1-color[p];
				}
				else if(color[a[p][i]]==color[p]){
					return false;
				}
			}
			
		}
		return true;
		
		
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
	
	cout<<g.bpart(0);

	return 0;
}

