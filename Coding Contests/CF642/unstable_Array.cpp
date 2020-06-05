#include<bits/stdc++.h>
using namespace std;

int sol(){
	int n,m;
	cin>>n>>m;
	if(n==1){
		return 0;
	}
	else if(n==2){
		return m;
	}
	else{
		return 2*m;
	}
}

int main() {
int t;
cin>>t;
while(t--){
	cout<<sol()<<endl;
}
	return 0;
}

