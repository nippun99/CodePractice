#include<bits/stdc++.h>
using namespace std;
int sol(){
	int n;
	int k;
	cin>>n>>k;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int l=0;
	int m=n-1;
	for(int i=0;i<k;i++){
		if(a[l]<b[m]){
			swap(a[l],b[m]);
			l++;
			m--;
		}
		else{
			break;
		}
	}
	int sm=0;
	for(int i=0;i<n;i++){
		sm+=a[i];
	}
	return sm;
	
}


int main() {
	int t;
	cin>>t;
	while(t--){
		cout<<sol()<<endl;
	}
	return 0;
}

