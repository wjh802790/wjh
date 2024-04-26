#include<bits/stdc++.h>
using namespace std;
int a[6];
int main(){
	int count=0;
	for(int i=0;i<6;i++){
		printf("%d",&a[i]);
		count+=a[i];
	}
	int count2=(1/30)*count;
	int i=0;
	if(a[i]<count2){
		printf("Yes");
	}else{
		printf("No");
	}
	
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int count=0;
//	for(int i=2;i<=100;i++){
//		for(int j=i;j<=100;j++){
//			if(i%j==0){
//				break;
//			} 
//			if(j==i){
//				count++;
//			}
//		}
//	}
//	printf("%d",count);
//
//	return 0;
//} 




//#include<bits/stdc++.h>
//using namespace std;
//long long n=999999999;
//long long t=1000000007;
//int main(){
//	for(long long i=1;i<=t;i++){
//		if((i*2021)%t==n){
//			printf("%lld",i);
//			return 0;
//		}
//	}
//	printf("0");
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//long long n;
//int main(){
//	long long count=0;
//	scanf("%lld",&n);
//	for(long long i=1;i<=n;i++){
//		for(long long j=1;j<=n;j++){
//			for(long long k=1;k<=n;k++){
//				if(i*j*k==n){
//					count++;
//				}
//			}
//		}
//	}
//	printf("%lld",count);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int c='L'-'A';
//	printf("%d",c+65);
//	return 0;
//}
