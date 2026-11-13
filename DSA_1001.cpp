#include<bits/stdc++.h>
using namespace std;

string s;
void testCase(){
	cin>>s;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='1'){
			s[i]='0';
		}
		else{
			s[i]='1';
			break;
		}
	}
	cout<<s;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		testCase();
		cout<<"\n";
	}
	return 0;
}
