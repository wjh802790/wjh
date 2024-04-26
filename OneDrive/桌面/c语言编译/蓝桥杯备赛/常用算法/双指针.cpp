//#include<bits/stdc++.h>
//using namespace std;
//int n,k,a[10001];
//int sum(int x,int y[],int s){
//	int flag=0;
//	for(int i=0;i<x;i++){
//		int count=y[i];
//		for(int j=i+1;j<=x;j++){
//			if(count+y[j]==0){
//				flag++;
//			}
//		}
//	}
//	return flag;
//}
//int main(){
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int c =sum(n,a[n],k);
//	printf("%d",c);
//	return 0;
//} 

//#include<bits/stdc++.h>
//using namespace std;
//int n,k,a[10001];
//int sum(int a[],int n,int s){
//	int i=0,j=n-1,flag=0;
//	while(i<n && j<=n){
//		if(a[i]+a[j]==s){
//			flag++;
//		}else if(a[i]+a[j]>s){
//			i++;
//		}else{
//			j--;
//		}
//	}
//	return flag;
//}
//int main(){
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	printf("%d",sum(a,n,k));
//	return 0;
//} 
//#include <cstdio>
//
//const int MAXN = 100000;
//int n, k, a[MAXN];
//
//int twoSum() {
//    int counter = 0;
//    int i = 0, j = n - 1;
//    while (i < j) {
//        if (a[i] + a[j] == k) {
//            counter++;
//            i++;
//            j--;
//        } else if (a[i] + a[j] < k) {
//            i++;
//        } else {
//            j--;
//        }
//    }
//    return counter;
//}
//
//int main() {
//    scanf("%d%d", &n, &k);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    printf("%d", twoSum());
//    return 0;
//}
