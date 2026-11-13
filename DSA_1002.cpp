#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n,k;
	cin>>n>>k;
	vector<int>a(k+1);
	for(int i=1;i<=k;i++){//i bat dau tu 1 vi chua moc cho mang dat max
		cin>>a[i];
	}
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0) a[i]=0;// muon mang a[0] lam moc cuoi
	else{
		a[i]++;
	}
	while(i<k){
		a[i+1]=a[i]+1;
		i++;
	}
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n"; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		testCase();
	}
	return 0;
}
