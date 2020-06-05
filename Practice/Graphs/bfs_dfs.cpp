#include<bits/stdc++.h>
using namespace std;

class graph{
	public:
	int v;
	vector<int> *a;
	graph(int V){
		v=V;
		a=new vector<int> [v];
	}
	
void addEdge(int u,int v){
	a[u].push_back(v);	
}	
void bfs(int s){
	map<int,bool> vis;
	queue<int> q;
	for(int i=0;i<v;i++){
		vis[i]=false;
	}
	q.push(s);
	vis[s]=true;
	while(!q.empty()){
		int n=q.front();
		cout<<n<<" ";
		q.pop();
		for(int i=0;i<a[n].size();i++){
			if(!vis[a[n][i]]){
				q.push(a[n][i]);
				vis[a[n][i]]=true;
			}
		}
	}
	
	
	
}


void dfsu(int st,bool visited[]){
	visited[st]=true;
	cout<<st<<" ";
	
	for(int i=0;i<a[st].size();i++){
		if(!visited[a[st][i]])
			dfsu(a[st][i],visited);
	}
	
}

void dfs(int st){
	bool *visited= new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	dfsu(st,visited);
	
}


};




int main() {
	
	graph g(4);
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    g.bfs(2);
    cout<<endl;
    g.dfs(2);
	

	return 0;
}

