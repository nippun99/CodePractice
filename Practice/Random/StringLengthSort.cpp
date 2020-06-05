#include<bits/stdc++.h>
using namespace std;

string transform(string s){
	
	vector<string> str;
	string temp="";
	for(int i=0;i<s.length()-1;i++){
		if(s[i]==' '){
			str.push_back(temp);
			temp="";
			continue;
		}
		temp.append(1,s[i]);
	}
	
	vector
	
	cout<<str[2];
	return " "; 
}

int main() {
	string s="Geeks I from am";		
	cout<<transform(s);
	return 0;
}

