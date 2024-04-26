//#include<stdio.h>
//int main()
//{
//	int arr[10]={9,6,5,0,7,8,1,4,3,2};
//	int i;
//	int* p=&arr;
//	for(i=0;i<10;i++)
//	{
////		printf("1:%d",*(p+i));
//		printf("%d",*p);
//	}
//	return 0;
// }

 
 
 
//结构体指针的操作 

//结构体成员操作符
/*
	.:	结构体.成员名
	->:	结构体指针->成员名 

*/ 
//#include<stdio.h>
//struct stu{
//	int sid;
//	char name[20];
//	float score;
//};
//int main()
//{
//	struct stu s = {2022,"张三",88.2};
//	//struct stu * 表名该指针类型为结构体指针 
//	struct stu * p=&s; 
//	printf("1:%d %s %f\n",s.sid,s.name,s.score); 
//	//1、结构体变量.成员变量 
//	printf("2:%d %s %f\n",(*p).sid,(*p).name,(*p).score);
//	//*p指针解引用 取到结构体s的地址 先解引用(*P)就相当于s    (解引用操作).成员变量 
//	printf("3:%d %s %f\n",p->sid,p->name,p->score);
//	//ps->指向对象  更直观 强推荐 
//	return 0;
//}



////操作符 & *  ()强制类型转换 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n",&a);
//	//& -- 取地址操作符  %p打印地址 
//	int * pa = &a;
//	/* *pa 取到a的地址，它就是一个指针，指针是用来专门存放地址的，因为a的数据类型是int型
//	所以该指针类型也是int型 
//	*/
//	*pa = 20;//*-- 解引用操作符--间接访问操作符 
//	 printf("%d\n",a) ;
//	 int b = (int)3.14159;
//	 printf("%d",b);
//	return 0;
//}




//数组指针传参



//一维数组传参 
////对于一维数组名进行传参,会被退化为数组首元素的地址 
//void test(int arr[]){
//	printf("%d\n",sizeof(arr));
//	//8
//}
//
//void test1(char arr1[]){
//	printf("%d\n",sizeof(arr1));
//	//8
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int arr[100]={0};
//	char arr1[20]={0};
//	printf("%d\n",sizeof(arr)); //400
//	printf("%d\n",sizeof(arr1)); //20
//	test(arr);
//	test1(arr1);
//	return 0;
//}


//二维数组传参 
//void test(int arr[10][10])
//{
//	printf("%d\n",sizeof(arr));
//	//8
//}
//void test1(char ch[20][20])
//{
//	printf("%d\n",sizeof(ch));
//	//8
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int arr[10][10]={0};  //400
//	char ch[20][20]={0};  //400
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch)); 
//	test(arr);
//	test1(ch);
//	return 0;
//}



//&& ||  与运算 或运算 
//#include<stdio.h>
//int main()
//{
////	int i=0,a=1,b=2,c=3,d=4;
//	int i=0,a=0,b=2,c=2,d=4;
//	i = a++ || ++b || d++;//1 3 2 4
//	//a=0,为假，所以进行++b运算，b！=0为真，所以不进行d+=运算 
////	i = a++ && ++b && d++;  //2 3 3 5
//	//&& 按位与运算，a++!=0,b自增，a自增，最后d自增 
////	i = a++ || ++b || d++; //2 2 3 4  
//	//|| 按位或运算 a++！=0，所以为真，之后不进行运算 b不变，d不变 
//	printf("a=%d b=%d c=%d d=%d i=%d",a,b,c,d,i);
//	return 0;
// } 


//逗号表达式  从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//#include<stdio.h>
//int main()
//{
//	int a=5;
//	int b=3;
//	int c = (a>b,a+=b,a,b=a+1);
//	printf("%d",c);
// } 




//[] 下标引用操作符  ()函数调用操作符 


//int sum(int x,int y)
//{
//	int z=x+y;
//	return z;
// } 
//#include<stdio.h>
//int main()
//{
//	int a[10]={5,3,4,9,7,1,0,2,6,8};
//	printf("%d\n",a[5]); 
//	int b =3,c=7;
//	int n=sum(b,c);
//	printf("%d\n",n);
//}


//了解 整形提升  只有short类型（两个字节）和char类型（一个字节）会发生整形提升 
/*

C的整形算术运算总是至少以缺省类型的精度来进行的，为了获得这个精度，表达式中的字符型和短整型操作数在使用之前被转换

为普通类型，这种转换称为整形提升.

比如： char a,b,c;    a = b + c;

b和c的值被提升为普通整形，然后在执行加法运算. 加法运算的结果将被截短,然后再存储于a中。 这个例子的结果和使用8位运

算的结果是相同的，但是下面这个例子当中，它的结果就不再相同. 这个例子用于计算一系列字符的简单校验和：

a = (~a ^ b << 1) >> 1;

由于存在求补和左移操作，所以8位的精度是不够的. 标准要求进行完整的整形求值,所以对这类表达式的结果，不会存在歧义性.
*/



//算术转换  如果操作数的数据类型不同，那么需要先将字节数的数据类型转化为那个高的数据类型在进行计算 
