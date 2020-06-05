#include<bits/stdc++.h>
using namespace std;
int main() {
	stack<char> s;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(' || str[i]=='{' || str[i]=='['){
			s.push(str[i]);
		}
		if(str[i]==')' && s.top()=='('){
			s.pop();
		}
		else if(str[i]=='}' && s.top()=='{'){
			s.pop();
		}
		else if(str[i]==']' && s.top()=='['){
			s.pop();
		}
	}
	if(s.empty()){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
	return 0;
}

