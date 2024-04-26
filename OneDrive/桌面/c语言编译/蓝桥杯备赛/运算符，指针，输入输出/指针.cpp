//总结：
//数组传参时不论字符串、字符、整形都可以使用数组和指针接收，并且利用相关知识调用
//字符串数组可以不传递数组长度，其它类型的数组需要传递数组长度
//sizeof 是在编译的时候求值的，所以不能够动态的确定一个变量的值。
//1、数组作为参数传入函数是以指针的形式（首地址）
//，所以系统是不知道该数组是在哪里截止的，因此不会得到数组的长度
//2、整形数组传递的是首元素的地址，所以sizeof(arr) / sizeof(arr[0])的值为1
//3、字符型数组每个元素的大小都为1，而所有的地址的大小为4（32位平台下），
//所以sizeof(arr) / sizeof(arr[0])的值为4
//4、而字符串它的结束标志是'\0’，strlen函数会在计算字符串长度时，
//遇到'\0'时停止计算字符串的长度，所以字符串可以在传参后使用strlen函数计算长度


//整形数组传参
//1、指针接收
//void text(int* arr)
//{
//    printf("%d\n", *(arr + 1));
//	printf("%d\n", arr[2]);
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
// 
//	text(arr);
// 
//	return 0;
//}
//2、数组接收 
//void text(int arr[])
//{
//	printf("%d\n", *(arr + 1));
//	printf("%d\n", arr[2]);
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
// 
//	text(arr);
// 
//	return 0;
//}










//字符数组传参
//1、指针接收 
//#include<bits/stdc++.h>
//using namespace std; 
//void text(char* arr)
//{
//	printf("%c\n", *(arr + 1));
//	printf("%c", arr[2]);
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c'};
// 
//	text(arr);
// 
//	return 0;
//}



//2、数组接收
// void text(char arr[])
//{
//	printf("%c\n", *(arr + 1));
//	printf("%c", arr[2]);
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c'};
// 
//	text(arr);
// 
//	return 0;
//}




//传递数组长度

//字符串数组
//数组接收 
//void text(char arr[])
//{
//	printf("%d", strlen(arr));//strlen函数用来求字符串长度
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
// 
//	text(arr);
// 
//	return 0;
//} 




 
//指针接收 
//void text(char* arr)
//{
//	printf("%d", strlen(arr));//strlen函数用来求字符串长度
//}
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
// 
//	text(arr);
// 
//	return 0;
//}




//2、字符数组
//由此可知，字符数组传参时，只能在定义数组函数内获得数组长度
//一块地址的大小为4，字符型变量的大小为1，在其它函数内求得大小为4

//数组接收 
//void text(char arr[])
//{
//	printf("传值函数内求数组长度：%d\n", sizeof(arr)/sizeof(arr[0]));
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c' ,'d','e','f'};
// 
//	printf("主函数内求数组长度：%d\n", sizeof(arr) / sizeof(arr[0]));
// 
//	text(arr);
// 
//	return 0;
//}


//指针接收
//void text(char* arr)
//{
//	printf("传值函数内求数组长度：%d\n", sizeof(arr)/sizeof(arr[0]));
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c' ,'d','e','f'};
// 
//	printf("主函数内求数组长度：%d\n", sizeof(arr) / sizeof(arr[0]));
// 
//	text(arr);
// 
//	return 0;
//} 



//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int a = 10;
//	int* p =&a;
//	cout<<*p<<endl;
//	cout<<"p的地址："<<p<<endl;
//	cout<<"a的地址："<<&a<<endl;
//	cout<<a<<endl;
//	//二级指针 
//	int** pa=&p;
//	
//	cout<<pa<<endl;
//	//** 解引用操作，不使用解引用操作pa仅表示p的地址 
//	cout<<** pa<<endl;
//	// 三级指针 
//	int*** ppa=&pa;
//	//指针解引用 
//	cout<<*** ppa<<endl;
//	
//	
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//传数组 
//int sum(int arr[0],int a){
//	int count = 0;
//	for(int i=0;i<a;i++){
//		count+=arr[i];
//	}
//	return count;
//}
//int main(){
//	int a =0;
//	cin>>a;
//	int arr[100]={0};
//	for(int i=0;i<a;i++){
//		cin>>arr[i];
//	}
//	cout<<sum(arr,a);
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//指针传递 
//void swap(int* x,int* y){
//	int temp = *x;
//	*x=*y;
//	*y = temp;
//}
//int sum(int* arr,int* a){
//	int count=0,n=*a,c[0]=*arr;
//	for(int i=0;i<n;i++){
//		count+=c[i];
//	}
//	return count;

//}
//int sum(int* arr){
//	return sizeof(arr);
//}
//int main(){
	//传递数组的三种形式
	/*
	void swap(const int*);
	void swap(const int[]);
	void swap(const int[10]);
	*/ 
//	int a = 0,arr[100],count=0;
//	cin>>a>>b;
//	cout<<a<<" "<<b<<endl;
//	swap(&a,&b);
//	cout<<a<<" "<<b<<endl;
//	cin>>a;
//	for(int i=0;i<a;i++){
//		cin>>arr[i];
//	}
//	cout<<sum(arr);
//	return 0;
//} 


// 总结
/* 
	传递参数有两种：第一种：swap(a,b)
							int swap(int x,int y)
					第二种：swap(&a,&b)
							int swap(int* x,int* y) 
								int temp = *x;
								*x = *y;
								*y = temp;
	传递数组有两种：第一种：sum(arr,n)
								数组名,数组大小
					第二种: sum(&arr,&n) 

*/
//传递变量必须为左值 
//#include<bits/stdc++.h>
//using namespace std;
//void sum(int n,int *arr){
//	int count=0;
//	for(int i=0;i<n;i++){
//		count+=arr[i];
//	}
//	cout<<count;
//}
//int main()
//{
//	int n = 0,arr[10];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
////	sum(n,arr);
////	sum(arr,n); 
//	//这个报错的中文意思是：非常量引用的初始值必须为左值
//	return 0;
//}
//#include<bits/stdc++.h>
//string swap(string* c){
//	cout<<*(c+1);
//}
//using namespace std;
//int main(){
//	string c;
//	cin>>c;
//	swap(c);
//	return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//void increase(int* n){
//	*n++;
//	printf("%d",*n);
//}
//int main(){
//	int n = 0;
//	cin >> n;
//	increase(n);
//	cout<<n;
//	return 0;
//} 

//#include<bits/stdc++.h>
//using namespace std;
//void swap(int* arr,int n){
//	
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]<arr[j]){
//				int temp = arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//}
//int main(){
//	int n=0;
//	cin>>n;
//	int arr[100];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	swap(arr,n);
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	return 0;
//} 


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int arr[100];
//	int arr2[100];
//	string s;
//	while(scanf("%s",&s)&&s!="EOF"){
//		
//	}
//	return 0;
//} 



























