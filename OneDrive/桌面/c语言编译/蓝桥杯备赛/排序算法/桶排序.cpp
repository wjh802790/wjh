#include<bits/stdc++.h>
using namespace std;
int n,t;
int main(){
	int a[100]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		a[t]++;
	}
	for(int i=1;i<=100;i++){
		for(int j=1;j<=a[i];j++){
			cout<<i<<" ";
		}
	}
	return 0;
}
