#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
	if(n==0 || r==0 || (n==r)){
		return 1;
	}
	return nCr(n-1,r)+nCr(n-1,r-1);
	
	
}

int main() {
	cout<<nCr(4,2);
	return 0;
}

