#include<bits/stdc++.h>
using namespace std;
int tiles(int n,int* dp){
	if(n==1 || n==4){
		dp[n]=n;
		return dp[n];
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans= tiles(n-1,dp)+tiles(n-4,dp);
	dp[n]=ans;
	return ans;
	
}

int main() {
	int n;
	cin>>n;
	int dp[100];
	for(int i=0;i<100;i++){
		dp[i]=-1;
	}
	cout<<tiles(n,dp);
	return 0;
}

