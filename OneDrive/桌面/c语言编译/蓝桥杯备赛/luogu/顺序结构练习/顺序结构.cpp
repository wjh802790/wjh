//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	double t;
//	int n;
//	cin>>t>>n;
//	int amount = 2*n;
//	double need = t/(double)n;
//	printf("%0.3lf\n",need);
//	printf("%d",amount);
//	return 0;
//} 

//上学迟到


//思想：可能会提前出发，但是提前时间不会超过一天
//那就判断最坏的情况，所花费的时间n=n+24*60;
//然后用t=ceil(s/v)+10得到行走时间，然后n=n-t得出剩下时间,if(n>=24*60)n-=24*60; 
//		向上取整，否则c++逻辑会向下取整导致行走时间少 		判断是否在前一天 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int s,v;
//	cin>>s>>v;
//	int n=8*60+24*60;
//	int t=ceil(s*1.0/v)+10;
//	//			s或v需要乘以1.0，否则s/v的结果还是会被向下取整 
//	n-=t;
//	if(n>=24*60)
//		n-=24*60;
//	int h=n/60;	//出发时 
//	int f=n%60;	//出发分
//	if(f<10){
//		if(h<10){
//			cout<<"0"<<h<<":"<<"0"<<f;
//		}else{
//			cout<<h<<":"<<"0"<<f;
//		}
//	}else{
//		if(h<10)
//		cout<<"0"<<h<<":"<<f;
//		else
//		cout<<h<<":"<<f;
//	}
//	
//	return 0;
//}
