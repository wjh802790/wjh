//#include<bits/stdc++.h>
//using namespace std;
//int a[100];
//int main(){
//	int len=0,count=0;
//	for(int i=0;i<7;i++){
//		cin>>a[i];
//		len++;
//	}
//	sort(a,a+len);
//	for(int i=0;i<len;i++){
//		count+=a[i];
//	}
//	if(count>0){
//		cout<<"IMissYou!"<<endl;
//		cout<<count;
//	}else{
//		cout<<"OvO";
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//void ge(long long a,long long b){
//	long count = 1;
//	for(long i=1;i<=b;i++){
//		count*=a;
//	}
//	if(count>1000000000){
//		cout<<"-1";
//	}else{
//		cout<<count;
//	}
//}
//long long a,b;
//int main(){
//	cin>>a>>b;
//	ge(a,b);
//	return 0;
//}
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//int main(){
////	string c;
////	cin>>c;
//	string s;
//	int res=0;
//	s=input(); 
//	res = len(s);
////	int len = length(c);
//	int i = 1;
//	
//	cout<<res;
//	return 0;
//} 
//高精度减法 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string c1,c2;
//	getline(cin,c1);
//	getline(cin,c2);
//	int a1[210]={0};
//	int a2[210]={0};
//	int a3[210]={0};
//	char flag='+';
//	if(c1.size()<c2.size()||c1.size()==c2.size()&&c1<c2){
//		swap(c1,c2);
//		flag='-';		
//	} 
//	for(int i=0;i<c1.size();i++){
//		a1[i]=c1[c1.size()-i-1]-'0';
//	}
//	for(int i=0;i<c2.size();i++){
//		a2[i]=c2[c2.size()-i-1]-'0';
//	}
//	for(int i=0;i<c1.size();i++){
//		if(a1[i]<a2[i]){
//			a1[i]=a1[i]+10;
//			a1[i+1]=a1[i+1]-1;
//		}
//		a3[i]=a1[i]-a2[i];
//	}
//	if(flag=='-'){
//		cout<<flag;
//	}
//	int index=0;
//	for(int i=c1.size()-1;i>=0;i--){
//		if(a3[i]!=0){
//			index=i;
//			break;
//		}
//	}
//	for(int i=index;i>=0;i--){
//		cout<<a3[i];
//	}
//} 

//#include <bits/stdc++.h>
//using namespace std;
//const int MAX=100000;
//int a[MAX],n;
//int main()
//{
//  cin>>n;
//  for(int i=0;i<n;i++){
//      cin>>a[i];
//  }
// for(int i= 0;i<n-1;i++){
//    for(int j=i+1;j<=n-1;j++){
//        if(a[j]<a[i]){
//        int temp = a[i];
//            a[i]=a[j];
//            a[j]=temp;
//      }
//    }
//  
// }
//  for(int i=0;i<n;i++){
//    printf("%d",a[i]);
//    printf(i<n?" ":"\n");
//  }
//
//  return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	char c;
//	for(int i=0;i<26;i++){
//		for(int j=1;j<=26-i;j++){
//			cout<<" ";
//		}
//		for(int j=1;j<=i;j++){
//			c=j+'A'-1;
//			cout<<c;
//		}
//		for(int j=i-1;j>=1;j++){
//			c=j+'A'-1;
//			cout<<c;
//		}
//		cout<<endl;
//	}
//	return 0;
//} 


