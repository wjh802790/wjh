///三角形分类 
//#include<bits/stdc++.h>
//using namespace std;
//int a[4],n=3;
//int main(){
//	for(int i=1;i<=3;i++){
//		cin>>a[i];
//	}
//	sort(a+1,a+n+1);
//	if(a[1]+a[2]<=a[3]){
//		printf("Not triangle\n");
//		return 0;
//	}
//	if(a[3]*a[3]==(a[2]*a[2]+a[1]*a[1])){
//		printf("Right triangle\n");
//	}else if(a[3]*a[3]<(a[2]*a[2]+a[1]*a[1])){
//		printf("Acute triangle\n");
//	}else if(a[3]*a[3]>(a[2]*a[2]+a[1]*a[1])){
//		printf("Obtuse triangle\n");
//	}if(a[1]==a[2]||a[2]==a[3]){
//		printf("Isosceles triangle\n");
//	}if(a[1]==a[2]&&a[2]==a[3]){
//		printf("Equilateral triangle\n");
//	}
//	return 0;
//} 

//月份天数 
//#include<bits/stdc++.h>
//using namespace std;
//int months[14]={0,31,28,31,30,31,30,31,31,30,31,30,31,29};
//int main(){
//	int year;
//	int month;
//	cin>>year>>month;
//	if(year%4==0&&year%100!=0 || year%400==0){
//		if(month==2){
//			cout<<months[13];
//		}else{
//			cout<<months[month];
//		}
//	}else{
//		cout<<months[month];
//		
//	}
//	
//	return 0;
//}

//ISBN号码
//#include<bits/stdc++.h> 
//using namespace std;
//long long count;
//int check(string s){
//	int len=s.size();
//	for(int i=0;i<len;i++){
//		if(s[i]=='-'){
//			s.erase[i];
//			len--;
//		}
//	}
//	int i=0;
//	while(i<len-1){
//		if(i==0){
//			count+=s[i];
//			i++;
//		}else{
//			count+=s[i]*2;
//			i++;
//		}
//	}
//	int c=count%158;
//	if(c==s[len]){
//		cout<<"right";
//		return 0;
//	}else{
//		return c;
//	}
//}
//int main(){
//	string s;
//	cin>>s;
//	check(s);
//	
//	return 0;
//}







