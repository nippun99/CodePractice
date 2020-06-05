#include<bits/stdc++.h>
using namespace std;
int knapsack(int* wts,int* pri, int w,int n,int* dp){
	if(w==0 || n==0){
		dp[n]=0;
		return 0;
	}
	
	if(wts[n-1]>w){
		dp[n]=knapsack(wts,pri,w,n-1,dp);
		return dp[n];
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int inc=pri[n-1]+knapsack(wts,pri,w-wts[n-1],n-1,dp);
	int exc=knapsack(wts,pri,w,n-1,dp);
	int ans= max(inc,exc);
	dp[n]=ans;
	return ans;
}

int main() {
	int pri[]={60,100,120};
	int wts[]={10,20,30};
	int w=50;
	int n=3;
	int dp[100];
	for(int i=0;i<100;i++){
		dp[i]=-1;
	}
	cout<<knapsack(wts,pri,w,n,dp);

	return 0;
}

