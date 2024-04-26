//#include<bits/stdc++.h>万能头文件
//#include<iostream>
//using namespace std;
//int main()
//{
//  cout <<  " " << endl;输出函数,输出内容为""内部的内容 
//	cout << "Hello,World!" << endl;
//	system("pause");
//	
//	return 0;
//}
//单行注释1
/*多行注释 */
  //变量创建的语法：数据类型 变量名 = 变量初始值 
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  	int a = 10;
//  	cout << "a = "<< a << endl;
//  	system("pause");
//  }
//常量创建 
/* 
1.#define 宏常量： #define 常量名 常量值  
*通常在文件上方定义，表示一个常量 
2.const修饰的变量: const 数据类型 常量名 = 常量值
*通常在变量定义前加关键字const，修饰该变量为常量，不可修改 
 
*/ 
/*#include<iostream>
using namespace std;
//常量的定义方式
//1.#define 宏常量
// 2.const修饰的变量
//1.#define 宏常量
//#define Day 7
int main()
{
	const int Day = 7;
	 Day = 14; //报错原因。Day被const修饰为常量，常量不可修改 
	//Day = 14; //报错原因，Day用#define 定义为常量，一旦修改就会报错 
	cout << "一周的天数为:" << Day << endl; 
	system("pause");
	return 0;
 }
 */
//关键字
//给变量命名时不能使用c++的关键字
//标识符命名规则
/*作用：C++规定给标识符（变量，常量）命名时。有一套自己的规则
1.*标识符不能是关键字

2.*标识符只能由字母，数字，下划线组成

3.*第一个字符必须为字母或者下划线

4.*标识符中字母区分大小写
（*给标识符命名时尽量起到“见名知意”的效果，方便自己和他人阅读） 




//数据类型存在的意义：给变量分配合适的内存空间 
//第二章数据类型：2.1：整形
/* 
数据类型                  占用空间                                             取值范围 
short（短整形）            2字节
int（整形）                4字节
long（长整形）             windows为4字节，linux为4字节（32位），8字节 （64位） 
long long（长长整形）      8字节
  
区别：在于所占内存空间不同，能表示的最大区间的范围不同


 
2.2sizeof关键字
作用 ：利用sizeof关键字可以统计数据类型所占内存大小
语法：sizeof（数据类型 / 变量） 
sizeof(short)
sizeof(int)*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 10;
////	cout << "int占用内存空间为" << sizeof(int) << endl;
////    cout << "int占用内存空间为" << sizeof(i) << endl;	
//cout << "long long占用内存空间为" << sizeof(long long) << endl;
//    //i在使用前用int数据类型定义，它自身也变成了整形变量 
//	system("pause");
//	return 0;
//}
//占用内存空间大型比较 
//short < int <=long <=long long 
//long在window为4字节，但是在linux中有4字节和8字节两种 




//2.3实型（浮点型）

// 数据类型               占用空间                        有效数字范围 
//1. float 单精度          4字节                             7位有效数字 
//2.double 双精度          8字节                             15-16位有效数字 
//区别在于有效数字的范围不同
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	float f1=3.14;
//	
//	cout << "f1="<<f1<<  endl;
//	//统计float占用的内存空间 
//	cout << "float占用的内存空间为："<<sizeof(float) <<endl;
//	
//	double dl=3.14159;
//	
//	cout << "dl="<<dl<<endl;
////	统计double占用内存空间 
//	cout << "double占用的内存空间为："<<sizeof(double)<<endl;
//	
//	//科学计数法 
//	float f2 =3e2；
//  cout << "f2" << endl; 
//f2=300
//  float f3=3e-2
//cout << "f3" << endl;
//f3=0.03 
//	e代表10的多少次方正整数代表3乘10的平方 ，负数代表3乘10的-2次方 
//	system("pause");
//	return 0;



//2.4字符型
// 1.字符型变量的创建方式 
//char ch = 'a';
// cout << ch <<endl;

//2.字符型变量所占内存大小 
//cout << "char字符型变量所占内存；" << sizeof(char) <<endl;
 
 //3.字符型变量常见错误
 //char ch2 = "b"'//创建字符型变量的时候要用单引号''
 // char ch2 = 'abcde';//创建字符型变量的时候，单引号内只能有一个字符
 
//4.字符型变量对应ASCII编码
// a - 97  A - 65
//cout << (int)ch << endl;
//字符型变量存储时是将对应的ASCII编码放入到存储单元 



//2.5转义字符
/*常用的转义字符：\n 换行符,
\\ 代表一个反斜线'\'（单独使用一个\会报错，在输出一个'\'的时候要使用两个\\,
\t 水平制表(HT) (跳到下一个TAB位置）作用是整齐的输出数据
 


//2.6字符串型需要用<string>头文件或者用万能头文件 
字符串创建1.char 变量名[] = "字符串值"
char str1[] = "helloworld" 
cout << str1 <<endl;
 
字符串创建2. string 变量名 = "字符串值" 
string str2 = "helloworld"


//2.7布尔类型bool
true  --真(本质是1)
false  --假(本质是0)

//1.创建bool数据类型
bool flag = true; 
cout << flag << endl;
结果:1,真的本质就是1 
//查看bool类型所占空间 
cout << "size of bool=" << sizeof(bool) << endl;

//2.8数据的输入 
cin >> 变量

1.整形输入 
int a =0;
cout <<"请给整形变量a赋值：" << endl;
cin >> a;
cout << "整形变量a=" << a << endl;

2.浮点型输入 
float b = 0;
cout << "请给浮点型变量b赋值: " << endl;
cin >> b;
cout << "浮点型变量b= " << b << endl; 
 
3.字符型输入
char c = 0;
cout << "请给字符型变量c赋值: " << endl;
cin >> c;
cout << "字符型变量c= " << c << endl;

4.字符串型输入
string d = 0;
cout << "请给字符串型变量d赋值：" << d << endl;
cin >> d;
cout << "字符串型变量d=" << d << endl;

5.布尔类型 
bool e = false;
cout << "请给布尔类型e赋值:" << e << endl;
cin >> e;
cout << "布尔类型变量e=" << e << endl; 
 


// } 猴子吃桃 
//#include<iostream>
//using namespace std;
//int main(void)
//{
//   int n;//代表第n天发现剩余1个 
//   cin>>n;
//   int s=1;//代表剩余的数量 
//   while(--n){
//      s=(s+1)*2;//循环操作计算前一天的剩余量 
//}
//cout<<s;
//return 0；
}
*/
//#include<bits/stdc++.h>
//using namespace std;
//int main(void)
//{
//	int n,count,max,temp0,temp;
//	cin>>n;//输入要判断的数字总个数
//	count=1;//初始化最长练好的计数长度
//	max=1;//初始化最长连号的最大长度
//	temp0=-1;
//	for(int i=0;i<n;i++)
//	{
//		cin>>temp;//输入接下来要判断的数字
//		if(temp==temp0+1)//如果连号 
//		count++;//计数加一
//		else
//		count=1;//连号终止，计数清空
//		if(count>max)
//		{
//			max=count;//更新最大连号长度 
//		 } 
//		 temp0=temp;//把当前的temp值移位 
//	 } 
//	 cout<<max;//输出最长连号
//	 return 0; 
//}
//指针数组 
//#include<bits/stdc++.h>
//using namespace std;
//int main(void)
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p=arr;
//	for(int i=0;i<10;i++)
//	{
//		cout << *p<<endl;
//		p++;
//	}
// } 


//地址传递，改变实参 
//int swap(int *p1,int *p2)
//{
//	int temp = *p1;
//	*p1=*p2;
//	*p2=temp;
////	cout<<"*p1="<<*p1<<endl;
////	cout<<"*p2="<<*p2<<endl;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a= 10;
//	int b = 20;
//	swap(a,b);
//	cout<<a<<endl;
//	cout<<b<<endl;
// } 


//值传递,不改变实参 
//int swap1(int a,int b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
// #include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a=10;
//	int b=20;
//	swap1(a,b);
//	cout<<a<<endl;
//	cout<<b<<endl; 
//}

//冒泡排序法

//void bubblespot(int *arr,int len)
//{
//	for(int i =0;i<len-1;i++)
//	{
//		for(int j=0;j<len-i-1;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
// } 
//
// void printspot(int * arr,int len)
// {
// 	for(int i=0;i<len;i++)
// 	{
// 		cout<<arr[i]<<endl;
//	 }
// }
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[10]={4,3,6,9,1,2,10,8,7,5};
//	int len=sizeof(arr)/sizeof(arr[0]);
//	bubblespot(arr,len);
//	printspot(arr,len);
//	return 0;
// } 



//
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
////定义结构体时struct不能省略 
//struct student{
//	string name;
//	int age;
//	int score;
//	//第三种创建结构体变量 
//}s3;
//int main()
//{
//	//创建结构体变量可以省略struct 
//	student s1;
//	//第一种创建结构体变量 
//	s1.name="王嘉豪";
//	s1.age=18;
//	s1.score=88;
//	cout<<"姓名:"<<s1.name<<"年龄:"<<s1.age<<"分数:"<<s1.score<<endl; 
//	//第二种创建结构体变量 
//	struct student s2={"张亚杰",18,60};
//	cout<<"姓名:"<<s2.name<<"年龄:"<<s2.age<<"分数:"<<s2.score<<endl;
//	
//}


//
////结构体数组
//
////1、定义结构体
//struct student{
//	string name;
//	int age;
//	int score;
//}; 
////2、创建结构体数组
//struct student stuarr[3]=
//{
//	{"张三",18,100}，
//	{"李四",18,80},
//	{"王五",19,80} 
//}
////3、 给结构体数组中的元素赋值
//stuarr[2].name="赵六"；
//stuarr[2].age=82;
//stuarr[2].score=60; 

////4、遍历结构体数组 
//for(int i=0;i<3;i++)
//{
//	cout<<"姓名:"<<stuarr[i].name
//		<<"年龄:"<<stuarr[i].age
//		<<"分数:"<<stuarr[i].score<<endl;
//}






//结构体指针

//利用操作费->可以通过结构体指针访问结构体属性 
