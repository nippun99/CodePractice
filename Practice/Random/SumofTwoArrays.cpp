#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> a,b;
	a={1,2,3,4,5,6,7,8,9,10};
	b={16,17,65,34,23,42,54};
	
	int dp[100][100];
	for(int i=0;i<b.size();i++){
		for(int j=0;j<a.size();j++){
			dp[i][j]=a[j]*10+b[i];
		}
	}
	int count=0;
	bool arr[100]={false};
	
	for(int i=0;i<b.size();i++){
		for(int j=0;j<a.size();j++){
			if(dp[i][j]%3==0 || dp[i][j]%5==0){
				cout<<dp[i][j]<<endl;
				
			}
		}
	}
	

	return 0;
}

