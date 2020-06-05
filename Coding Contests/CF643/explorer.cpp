#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sol(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	map<int,int> m;
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	int gp=0;
	for(auto it=m.begin();it!=m.end();it++){
		while((it->second) >= (it->first)){
			it->second -= it->first;
			gp++;
		}
	}
	
	return gp;
}


int main() {
	int t;
	cin>>t;
	while(t--){
		cout<<sol()<<endl;
	}
	return 0;
}

