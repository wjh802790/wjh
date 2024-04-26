#include<bits/stdc++.h>
using namespace std;
//函数的指针
//c/c++内存分为三部分：栈区 堆区 静态区 

//动态内存分配:在堆区进行
//自主申请
//自主释放
// malloc callo realloc free
//void check(int* p,int sz){
//	for(int i=0;i<sz;i++){
//		if(*(p+i)<60){
//			printf("%d ",*(p+i));
//		}
//	}
//}
//int main(){
//	int* p=(int*)malloc(5*sizeof(int));
//	if(p==NULL){
//		return -1;
//	}
//	for(int i=0;i<5;i++){
//		scanf("%d",p+i);
//	}
//	check(p,5);
//	//找出60分以下的元素
//	free(p);
//	p=NULL; 
//	return 0;
//}

//int main(){
//	int *p=(int*)calloc(10,sizeof(int));
//	//calloc开辟空间全部初始化为0 
//realloc开辟新的空间 
//	if(p==NULL){
//		printf("开辟失败\n");
//		return -1;
//	}
//	//打印开辟好的空间
//	
//	for(int i=0;i<10;i++){
//		printf("%d\n",*(p+i));
//	}
//	int* ptr=realloc(p,15*(sizeof(int)));
//	//realloc开辟新的空间 
//	//realloc可能会开辟失败，开辟失败因此先用一个新指针接收 
//	free(p);
//	p=NULL; 
//	return 0;
//}
//int main() {
//	//malloc 和 free 必须一起使用，申请空间如果不释放掉，会产生内存泄露 
//	
//	
//	//原来的申请：
//	int arr[10]= {0}; 	//栈区
//	int* p=(int*)malloc(40);			//向堆区申请40个字节的空间
//		malloc申请空间但是不初始话 
//	//返回的是这40个字节的空间的起始地址(首元素地址)
//	//存储空间用指针
//	if(p==NULL) {
//		printf("动态内存申请失败\n");
//		return -1;
//	}
////	printf("%p",p);
//	//使用动态申请的空间
//	for(int i=0;i<10;i++){
//		*(p+i)=i;
//	} 
//	for(int i=0;i<10;i++){
//		printf("%d\n",*(p+i));
//	}
//
//
//	//释放空间
//	free(p);
//	p=NULL;
//	return 0;
//}


//返回指针值的函数
////函数指针：
//	//类型名（*指针变量名）（函数参数表列）
//定义指针变量，并不意味这个指针变量可以指向任何函数，它只能指向在定义是指定的函数
//如果函数无返回值或者没有参数，那就定义不了

//int max(int x,int y){
//	return x>y?x:y;
//}
//int min(int x,int y){
//	return x<y?x:y;
//}
//int main(){
//	//用函数名调用函数，只能调用所指定的一个函数，而通过指针变量调用函数比较灵活
//	//可以根据不同情况先后调用不同的函数
//	int x,y,n;
//	printf("请输入两个数据");
//	cin>>x>>y;
//	printf("1:找出较大值 || 2:找出较小值\n");
//	printf("请选择");
//	scanf("%d\n",&n);
//	int (*p)(int,int)=NULL;
//	if(n==1){
//		p=max;
//	}else if(n==2){
//		p=min;
//	}
//	int ret=(*p)(x,y);
//	printf("%d\n",ret);
//
//	return 0;
//}
//int add(int x,int y){
//	return x+y;
//}
//int main(){
//	int(*p)(int,int)=add;
//	int sum=(*p)(3,4);
//	//用函数指针变量调用函数时，只需要用指针代替函数名即可
//	int sum1=add(5,6);
//	printf("%d\n",sum);
//	printf("%d\n",sum1);
//	int sum2=(*p++)(3,4);
//	sum2=(*p+5)(3,4);
//	//对指向函数的指针变量不能进行算术运算如p++，++p，p+n等运算是无意义的
//
//	printf("%d\n",sum2);
//
//
//	return 0;
//}

//int main(){
//
//	printf("%p\n",add);
//	//add是函数的地址,pf是存放函数的地址的，所有pf是指针变量-函数指针
//	int(*p)(int,int)=add;
//	//定义函数指针
//
//	int(*p)(int,int);
//	//此时指针p没有初始化，并没有指向函数，后面就不能调用函 数
//	int sum=(*p)(3,4);
//	//函数指针变量
//	printf("%d",sum);
//	return 0;
//}


//void print(char* pa,char* pb){
//	while(*pa!='\0'){
//		*pb++=*pa++;
//	}
//	*pb=*pa;
//	//拷贝'\0'
//}
//int main(){
//	void (*print1)(char*,char*)=print;
//	char* a="abcd";
//	char* b="efgh";
//	(*print1)(a,b);
//	printf("%s\n",a);
//	printf("%s\n",b);
//	return 0;
//}
//int add(int x,int y){
//	return x+y;
//}
//int main(){
//	//函数指针padd，是指向add的函数
//	//函数指针是一个指针用来存放函数的地址
//	//函数名就是函数的地址
//	int (*padd)(int,int)=add;
////函数指针：
//	//类型名（*指针变量名）（函数参数表列）
//	int ret=(*padd)(2,3);
//	printf("%d\n",ret);
//	printf("%p",*padd);
////
//	return 0;
//}
//int main(){
//	int ret=add(1,3);
//	printf("%d\n",ret);
//	printf("%p\n",add);
//	return 0;
//}
//指针字符串
//int main(){
//	//引用数组元素
//	//可以用下标法（数组名和下标）
//	//也可以用地址法（*（a+3））引用数组元素a[3]
//	//字符指针变量同理，
//	//字符指针变量与字符数组区别在于
//	//指针变量指向的字符串元素不能修改，只能读取，数组可以修改读取
//	//指针只是开辟一个存储空间存放地址（第1个字符的地址）
//	//数组是开辟多个存储单元存储各元素的值
//	char a[]="hello wjh";
//	char *p="abcdef";
//	printf("%c\n",a[3]);
//	printf("%c\n",*(a+3));
//	printf("%c\n",*(p+3));
//	printf("%c\n",p[3]);
//	return 0;
//}
//int main(){
//	char *p="abcdef";			//指针存放的区域是常量区（只读数据区）
////	*(p+2)='w';
//	//指针p存放的字符串是常量字符串,只能读取，不能修改
//	printf("%s",p);
//	//1、字符指针变量中存放的是地址（字符第1个字符的地址）
//	char a[]="abcdef";			//数组
//	//2、数组名是地址，是常量，不能被赋值
//	//指针是变量， 指针存放的元素的地址，但是指向的元素可以更改
//	printf("%c\n",*(p+3));		//*(p+i)==p[i]
//
//
//	//3、编译时为字符数组分配若干存储单元，存储各元素的值
//	//		而对于字符指针变量，只分配一个存储单元
//	printf("%c\n",p[3]);
//	printf("%c\n",*p);
//	//4、指针变量的值可以改变，数组名代表一个固定的值（数组首元素的地址）不能改变
//	p=p+3;
//	printf("%c\n",*p);
//	//5、字符数组中的各位元素的值是可以改变的，但字符指针变量指向的字符串常量
//	//的内容是不可以被取代的（不能对它们再赋值）
//	a[2]='w';		//合法，w取代a数组元素a[2]的原值c
////	*(p+2)='w';		//非法
//	printf("%c\n",a[2]);
//	printf("%c\n",*(p+2));
//	return 0;
//
//}
//void print1(char* pa,char* pb){
//	while(*pb++=*pa++){
////解析：*pa依次赋值给*pb，但因为是后置++，当*pa指向'\0'的时候
//		//'\0'的 ASCII值为0，0赋给*pb的时候，整个while的值为0，为假，
//		//*pb不把'\0'录入
//		;
//	}
//}
//int main(){
//	char a[]="hello world";
//	char b[20]={0};
//	print1(a,b);
////	strcpy(b,a);
//	//头文件string.h
//	printf("%s\n",b);
//	return 0;
//}
//void print(char* pa,char* pb){
//	while(*pa!='\0'){
//		*pb++=*pa++;
//	}
//	*pb=*pa;
//	//拷贝'\0'
//}
//int main(){
//	char a[]="hello world";
//	char b[20]={0};
//	print(a,b);
//	printf("%s\n",b);
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	char* pa=a;
//	char* pb=b;
//	for(;*pa!='\0';pa++,pb++){
//		*pb=*pa;
//	}
//	*pb='\0';
//	printf("%s\n",b);
//	printf("%s\n",a);
//	printf("%s\n",*pb);
//	printf("%s\n",*pa);
//	//*pa *pb 输出为null的原因是，最后*pa *pb存放的是'\0'
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	char* pa=a;
//	char* pb=b;
//	while(*(pa+i)!='\0'){
//	//while循环停止条件，'\0'之前的字符全部读入b
//		*(pb+i)=*(pa+i);
//		i++;
//	}
//	*(pb+i)=*(pa+i);
//	//'\0'录入
//	printf("%s\n",b);
//	printf("%s\n",a);
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	while(a[i]!='\0'){
//		b[i]=a[i];
//		i++;
//	}
//	b[i]=a[i];
//	printf("%s\n",b);
//	printf("%s\n",a);
//
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	for(i=0;a[i]!='\0';i++){
//		b[i]=a[i];
//	}
//	b[i]='\0';
//	printf("%s\n",b);
//	printf("%s\n",a);
//
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	for(i=0;*(a+i)!='\0';i++){
//		*(b+i)=*(a+i);
//	}
//	*(b+i)='\0';
//	printf("%s",a);
//
//	return 0;
//}

//指针引用数组
//void print1(int* p,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d",*(p+i));
//	}
//}
//void print2(int *p,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d",*p+i);
//	}
//}
//void print3(int arr[],int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d",arr[i]);
//	}
//}

//void print4(int* q,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",*q,sz);
//	*q=10;
//	printf("%d %d\n",*q,sz);
//指针存放的是数组首元素的地址，改变指针变量的值，
//也就是相当于在改变数组首元素地址存放的值
//}
//void print5(int a[],int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",a,sz);
//	printf("%d %d\n",a,sz);
//	a[0]=10;
//	sz=11;
//
//	printf("%d %d\n",a,sz);
//}
//void print6(int a[],int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",a,sz);
//	sz = 11;
//	a[0]=10;
//}
//void print7(int q,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",q,sz);
//	q=10;
//	sz=11;
//}
//	总结
//	如果传入的是指针或者数组首元素的地址，改变形参会改变实参的值
//	但如果传入的是实参的值，改变形参的不会改变实参
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print1(arr,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}
//
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print2(arr,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print3(p,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}


//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print4(p,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print5(arr,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print6(p,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print7(arr[3],sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}

//int main(){

//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int* p=arr;
//	for(int i=0;i<sz;i++){
//		printf("%d",*(p+i));
//	}
//		return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
////		sz = 10,数组容量大小
//	int* p =arr;
//	for(int i=0;i<sz;i++){
//	printf("%d\n",*p);
//	p++;
//	}
//	return 0;
//}


//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int right=sizeof(arr)/sizeof(arr[0])-1;
////	right=9,表示的是数组最后一个元素的下标
//	printf("%d\n",arr[right]);
//	int left=0;
////	数组首元素的下标
//	printf("%d\n",arr[left]);
//	int* p =arr;
//	for(int i=left;i<=right;i++){
//	printf("%d\n",*p);
//	p++;
//	}
//	return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//	指针存放的是地址
//	int * p=&arr[0];
//	//指针存放的是数组首元素地址
//	for(int i=0;i<sz;i++){
//		printf("%d\n",*p);
//		p++;
//	}
//	return 0;
//}
//


//

//int main(){
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int sz = sizeof(a)/sizeof(a[0][0]);	 sz=12
//
//	/*
//	1  2  3  4	a[0]
//	5  6  7  8	a[1]
//	9 10 11 12	a[2]
//	   */
////	二维数组首元素的地址指向的是数组a[0][4],指向的是数组的第一行
//	printf("%d\n",sz);
////	for(int i=0;i<sz;i++){
////		printf("%d\n",a[i][1]);
////	}
//	return 0;
//}
//int main(){
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int sz = sizeof(a)/sizeof(a[0]);
////	sz = 3
//	printf("%d\n",sz);
//	/*
//	1  2  3  4	a[0]
//	5  6  7  8	a[1]
//	9 10 11 12	a[2]
//	   */
////	二维数组首元素的地址指向的是数组a[0][4],指向的是数组的第一行
//
//	for(int i=0;i<sz;i++){
//		printf("%d\n",a[i][0]);
//	}
//	return 0;
//}
//int a[10010][10010];
//void print(int a[x][y],int x,int y){
//	for(int i=0;i<x;i++){
//		for(int j=0;j<y;j++){
//			printf("%d",a[i][j]);
////			printf("%d\n",a[i-1][j]);
////			printf("%d\n",a[i][j-1]);
////			printf("%d",a[i+1][j]);
////			printf("%d\n",a[i][j+1]);
//		}
//	}
//}
//int main(){
//	int i,j;
//	cin>>i>>j;
//	for(int x=0;x<i;x++){
//		for(int y=0;y<j;y++){
//			cin>>a[x][y];
//		}
//	}
//	print(&a,&i,&j);
//
//	return 0;
//}

//二维数组 ？
//int a[10010][10010];
//void print(int **a,int i,int j){
//	for(int r=0;r<i;r++){
//		for(int l=0;l<j;l++){
//			printf("%d",*(*(a+i)+j));
//		}
//	}
//}
//int main(){
//	int x,y;
//	cin>>x>>y;
//	for(int i=0;i<x;i++){
//		for(int j=0;j<y;j++){
//			cin>>a[i][j];
//		}
//	}
//	print(a[][],x,y);
//	return 0;
//}

//int main(){
//	char a[]="hello world";
//	int sz=sizeof(a)/sizeof(a[0]);
//	//通过下标访问数组元素
//	for(int i=0;i<sz;i++){
//		printf("%c",a[i]);
//	}
//	printf("%s\n",a);
//	return 0;
//}
//int main(){
//	string s = 'hello world';
//	int *p=s;
//	printf("%c",s[10]);
//
//	return 0;
//}
