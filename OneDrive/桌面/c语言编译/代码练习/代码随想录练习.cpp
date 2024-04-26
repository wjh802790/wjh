#include<bits/stdc++.h>
using namespace std;
//背包问题
//int f[5][9]={0};
//int w[5]={0,2,3,4,5};
//int v[5]={0,3,4,5,8}; 
//int main(){
//	int i,j;
//	memset(f,0,sizeof(f));
//	//把f中所有字节换做字符'0'，用于指针或者字符串的初始化
//	for(int i=1;i<5;i++){
//		for(int j=1;j<9;j++){
//			if(w[i]>j)	//如果第i件装不下
//				f[i][j]=f[i-1][j];
//			else		//如果装得下，可以偷，也可以不偷，取二者的最大值
//				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]); 
//							//不偷			偷 
//			 
//		}			
//	} 
//	for(int i=0;i<5;i++){
//		for(int j=0;j<9;j++){
//			printf("f[%d][%d]=%d\n",i,j,f[i][j]);
//		}
//	}
//	return 0;
//} 

// 前缀和、差分与离散化
//求区间和
//int a[1010],sum[1010];
//int main(){
//	int n,m;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		sum[i]=a[i]+sum[i-1];
//	}
//	cin>>m;
//	while(m--){
//		int l,r;
//		cin>>l>>r;
//		cout<<sum[r]-sum[l-1]<<endl;
//	}
//	return 0;
//} 

