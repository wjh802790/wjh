//����   ���� λ���� 
//ǰ׺�� ��� ��ɢ��
//̰�� ˫ָ�� ���� 









//#include<bits/stdc++.h>
//using namespace std; 
//struct stu{
//	int id;
//	int yu,shu,ying;
//	int count;
//}stu[3];
//
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>stu[i].yu>>stu[i].shu>>stu[i].ying;
//		stu[i].count=stu[i].yu+stu[i].shu+stu[i].ying;
//		stu[i].id=i;
//	}
//	int flag=0;
//	sort(stu,stu+n);
//	for(int i=1;i<n;i++){
//		for(int j=i+1;j<=n;j++){
//			if((stu[j].yu-stu[i].yu<=5) && (stu[j].shu-stu[i].shu<=5) && (stu[j].ying-stu[i].ying<=5) && (stu[j].count-stu[i].count<=10))
//				flag++;
//		}
//	}
//	cout<<flag<<endl;
//	return 0;
//} 

//1��K������


//���д��� 
//#include <iostream>
//using namespace std;
//const int N=100010;
////��Ϊ��ǰ׺�ͣ������ǱȽϴ��
//long long  a[N];
////����cnt[]������Ҳ����������������ͬ�����Ҳ��100000��������Ҫlong long
//int cnt[N];
//int main()
//{
//  int n,m;
//  cin>>n>>m;
////����Ϊ0˵��������ǿ��ѱ�����������ģ��һ�£������ʼΪ�������ʲô���������Ͳ�˵�ˣ�
//  cnt[0]=1;
////һ�������������������ģ����ǳ���Ҫlong long
//  long long res=0;
//  for(int i=1;i<=n;i++){
////�Լ�ǰ׺�Լ�
//    scanf("%d",&a[i]);
//    a[i]+=a[i-1];
//    //����֮ǰ���Լ�����ͬ������������������������һ�����Ա�K���������䣩
//    res+=cnt[a[i]%m];
////�ۼ��Լ�����Ϊ���滹�п����п��Ժ�����ɿɱ�K����������
//    cnt[a[i]%m]++;
//  }
//  cout<<res<<endl;
//  return 0;
//}
//�Լ����� 
//int n,k;
//long long a[10010],ans[10010];
//long long count;
//int main(){
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		ans[i]=a[i]+ans[i-1];
//		count+=
//	}
//
//	cout<<flag<<endl;
//	return 0;
//}
//int h[100010]={0};
//int w[100010]={0};
//int n,k;
//2�����ɿ���

//���д��� 
//���ɿ����Ŀ��������� 
//bool check(int x){	//�߳�Ϊx�������� 
//	int sum=0;
//	for(int i=0;i<n;i++){
//		sum+=(h[i]/x)*(w[i]/x);
//	}
//	if(sum>=k)return true;
//	else
//	return false;
//}
//int main(){
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>h[i>>w[i];]
//	}
//	int l=1;
//	int r=100000;
//	int max=0;
//	while(l<=r){
//		int mid=(r+l)/2;
//		if(check(mid)){	//mid�߳�������� 
//			max=mid;
//			l=mid+1;	//Ҫ�����߳��������ж� 
//		}else{
//			r=mid-1;	//˵�������㣬��Ҫ�����߳� 
//		}
//	}
//	cout<<max;
//	
//	return 0;
//}

//3���Ź��÷�
//int i[3][3]={0};
//int main(){
//	for(int x=0;x<3;x++){
//		for(int y=0;y<3;y++){
//			cin>>[x][y];
//		}
//	}
//	check
//	return 0;
//} 
 
