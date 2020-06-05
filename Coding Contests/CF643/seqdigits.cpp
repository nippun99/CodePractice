#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sol(){
	ll a;
	ll k;
	cin>>a>>k;
	for(ll i=2;i<=k;i++){
		ll n=a;
		int small=INT_MAX;
		int large=INT_MIN;
		while(n){
			int x=n%10;
			small=min(x,small);
			large=max(x,large);	
			n/=10;
		}
		a=a+small*large;
	}
	return a;
	
}


int main() {
	int t;
	cin>>t;
	while(t--){
		cout<<sol()<<endl;
	}
	return 0;
}

