#include<bits/stdc++.h>
using namespace std;
//��������
//int f[5][9]={0};
//int w[5]={0,2,3,4,5};
//int v[5]={0,3,4,5,8}; 
//int main(){
//	int i,j;
//	memset(f,0,sizeof(f));
//	//��f�������ֽڻ����ַ�'0'������ָ������ַ����ĳ�ʼ��
//	for(int i=1;i<5;i++){
//		for(int j=1;j<9;j++){
//			if(w[i]>j)	//�����i��װ����
//				f[i][j]=f[i-1][j];
//			else		//���װ���£�����͵��Ҳ���Բ�͵��ȡ���ߵ����ֵ
//				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]); 
//							//��͵			͵ 
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

// ǰ׺�͡��������ɢ��
//�������
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

