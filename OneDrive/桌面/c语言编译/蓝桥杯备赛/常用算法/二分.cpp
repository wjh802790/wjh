//����ģ��

/* 
bool check(int x){

}

int l=1,r=max;
while(r-l>l){
	int mid=l+r >> l;
	if(check(mid))
		l=mid;
	else
		r=mid;
}
cout<<l;
*/


//���� ���� Ѱ��ָ��Ԫ�� ���� 
//#include<bits/stdc++.h>
//using namespace std;
//int a[100000]; 
//int main(){
//	int n,x;
//	cin>>n>>x;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	//���ַ�
//	int start = 0;
//	int end = n-1; 
//	while(start<=end){
//		int mid = 1+(end-1)/2;
//		if(a[mid]==x){
//			cout<<mid;
//			return 0;
//		}else if(mid>x){
//			start = mid +1;
//		}else if(mid<x){
//			end = mid -1;
//		}
//		
//	}
//	cout<<"-1"<<endl;
//	//�������� 
////	for(int i=0;i<n;i++){
////		if(a[i]==x){
////			cout<<i;
////			return 0;
////		}
////	}
////	cout<<"-1";
//	return 0;
//} 
//Ѱ��ָ��Ԫ��II �ݼ� 
//#include<bits/stdc++.h>
//using namespace std;
//int a[100000];
//int main(){
//	int n,m;
//	n = input();
//	m = input();
//	getchar();
//	for(int i=0;i<n;i++){
//		a[i]=input();
//	}
//	cout<<n<<m;
//}
//Ѱ��ָ��Ԫ��III 
//#include<bits/stdc++.h>
//using namespace std;
//int a[100000];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int start = 0,end = n-1;
//	while(start<=end){
//		int mid= 1+(end-1/2);
//		if(a[mid]==m){
//			cout<<mid;
//		}else if(a[mid]>m){
//			cout<<mid;
//		}else if(a[mid]<m){
//			end = mid -1;
//		}
//	}
//	return 0;
//}
//�������� 
//int sou(int a[],int n,int m){
//	int start = m;
//	for(int i=0;i<n;i++){
//		if(a[i]>=start){
//			cout<<i;
//			return 0;
//		}
//	}
//	cout<<n;
//	return -1;
//}
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sou(a,n,m);
//	return 0;
//} 
