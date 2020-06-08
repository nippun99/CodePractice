#include<bits/stdc++.h>
using namespace std;
class graph{
	int v;
	vector<int> *a;
	public:
	graph(int V){
		v=V;
		a= new vector<int>[v];
	}
	void addedge(int y,int x){
		a[y].push_back(x);
	}
	void toposort(){
		vector<int> ideg(v,0);
		queue<int> q;
		for(int i=0;i<v;i++){
			for(int j=0;j<a[i].size();j++){
				ideg[a[i][j]]++;
			}
		}
		for(int i=0;i<v;i++){
			if(ideg[i]==0){
				q.push(i);
			}
		}
		
		while(!q.empty()){
			int n=q.front();
			q.pop();
			cout<<n<<"-->";
			for(int j=0;j<a[n].size();j++){
				ideg[a[n][j]]--;
				if(ideg[a[n][j]]==0){
					q.push(a[n][j]);
				}
			}	
		}
	}
	
	
	
};


int main() {
	graph g(3);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(2,1);
	g.toposort();
	

	return 0;
}

