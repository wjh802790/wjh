//倍增   构造 位运算 
//前缀和 差分 离散化
//贪心 双指针 二分 









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

//1、K倍区间


//大佬代码 
//#include <iostream>
//using namespace std;
//const int N=100010;
////因为是前缀和，数还是比较大的
//long long  a[N];
////这里cnt[]最差情况也就所有数的余数相同（最大也就100000），不需要long long
//int cnt[N];
//int main()
//{
//  int n,m;
//  cin>>n>>m;
////余数为0说明本身就是可已被整除（可以模拟一下，如果初始为零会有有什么后果，这里就不说了）
//  cnt[0]=1;
////一般像求这种区间数量的，都非常大要long long
//  long long res=0;
//  for(int i=1;i<=n;i++){
////自己前缀自己
//    scanf("%d",&a[i]);
//    a[i]+=a[i-1];
//    //加上之前和自己有相同余数的区间数量（两个构成一个可以被K整除的区间）
//    res+=cnt[a[i]%m];
////累加自己，因为后面还有可能有可以和他组成可被K整除的区间
//    cnt[a[i]%m]++;
//  }
//  cout<<res<<endl;
//  return 0;
//}
//自己代码 
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
//2、分巧克力

//大佬代码 
//求巧克力的块数：除法 
//bool check(int x){	//边长为x的正方形 
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
//		if(check(mid)){	//mid边长是满足的 
//			max=mid;
//			l=mid+1;	//要求最大边长，继续判断 
//		}else{
//			r=mid-1;	//说明不满足，需要缩减边长 
//		}
//	}
//	cout<<max;
//	
//	return 0;
//}

//3、九宫幻方
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
 
