//#include<bits/stdc++.h>
//using namespace std;
//int num1[1010];
//int num2[1010];
//int zhu[2050];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		cin>>num1[i];
//	}
//	for(int i=0;i<m;i++){
//		cin>>num2[i];
//	}
//	int len=m+n;
//	for(int i=0;i<len;i+=2){
//		zhu[i]=num1[i];
//		zhu[i+1]=num2[i+1];
//	}
//	sort(zhu,zhu+len);
//	int l=0;
//	int r=sizeof(zhu)/sizeof(zhu[0])-1;
//	if((r+1)%2){
//		printf("%d\n",zhu[(l+r)/2]);
//	}else{
//		int mid1=(l+r)/2;
//		int mid2=mid1-1;
//		int ech=(zhu[mid1]+zhu[mid2])/2;
//		printf("%d\n",zhu[ech]);
//	}
//	return 0;
//}


