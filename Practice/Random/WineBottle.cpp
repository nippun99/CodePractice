#include<bits/stdc++.h>
using namespace std;

int profit(int* wine,int b,int e,int y){
	if(b>e){
		
		return 0;
	}
	
	int op1=wine[b]*y + profit(wine,b+1,e,y+1);
	int op2=wine[e]*y + profit(wine,b,e-1,y+1);
	return max(op1,op2);
}


int main() {
	int wine[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>wine[i];
	}
	cout<<profit(wine,0,n-1,1);
	
	return 0;
}

