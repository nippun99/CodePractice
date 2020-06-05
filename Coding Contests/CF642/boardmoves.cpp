#include<bits/stdc++.h>
using namespace std;
long long int sol(){
	int n;
	cin>>n;
	long long int moves=0;
	long long int total_p=0;
	long long int new_p=0;
	for(int i=n;i>=3;i=i-2){
		new_p=(4*(i-1));
		total_p+=new_p;
		moves+=total_p;
	}
	return moves;
}


int main() {
	int t;
	cin>>t;
	while(t--){
		cout<<sol()<<endl;
	}
	return 0;
}

