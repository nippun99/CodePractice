#include<bits/stdc++.h>
using namespace std;
int main() {
	map<int,string,greater <int>> m;
	m.insert(make_pair(30,"ABC"));
	m.insert(make_pair(15,"bcs"));
	m.insert(make_pair(20,"jdfhkaj"));
	m.insert(make_pair(40,"Ashhh"));
	
	map<int,string> :: iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}

