//输出Hello，World! 
//#include<stdio.h>
//int main()
//{
//	printf("Hello,World!\n");
//	return 0;
//}
//输出字符菱形 
//#include<stdio.h>
//int main()
//{
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//	printf(" ***\n");
//	printf("  *\n");
//}
//字符三角形 
//#include<stdio.h>
//int main()
//{
//	char n;
//	scanf("%c",&n);
//	printf("  %c\n",n);
//	printf(" %c%c%c\n",n,n,n);
//	printf("%c%c%c%c%c\n",n,n,n,n,n,n);
//}
//苹果采购游戏 
//#include<stdio.h>
//int main()
//{
//	int m,n,z;
//	scanf("%d %d",&m,&n);
//	z = m*n;失败原因：没有正确读取题目的意思，m+n只是每个人一个的情况，当每个人n个时，应该是m*n 
//	printf("%d",z);
//}
//输入一个小写字母得到其大写字母 
//1.
//#include<stdio.h>
//int main()
//{
//	char n,m;
//	printf("输入一个小写字母：\n");
//	m=getchar();
//	n=m-32;
//	printf("%c",n);
//}
//2.
//#include<stdio.h>
//int main()
//{
//	char m,n;
//	scanf("%c",m); 
////	 失败原因：scanf读取了输入的字符导致getchar读取不到小写字母的ASCII码 
////	m=getchar();
//	n=m-32;
//	printf("%c",n);
//}
//数字反转 
//#include<stdio.h>
//int main()
//{
//	float a,b,c,d,e;
//	scanf("%f",&m);
//	n=
//}#include<stdio.h>
//#include<stdio.h> 
//int main()
//{
//	char n,m;
//	printf("输入一个小写字母：\n");
//	m=getchar();
//	n=m-32;
//	printf("%c",n);
//}
//水仙花数 
//#include <stdio.h>
//
//int main(int argc, char *argv[])
//
//{
//
//int i, j, k, n;
//
//printf("\n输出100--999所有的水仙花数:\n");
//
//for (n = 100; n <= 999; n++) // 循环每个数字往循环体里面去判断
//
//{
//
//i = n / 100; /*分解出百位*/
//
//j = n / 10 % 10; /*分解出十位*/
//
//k = n % 10; /*分解出个位*/
//
///* 个位十位百位的立方和等于该数的本身n ，则输出该水仙花数*/
//
//if (n == (i * i * i + j * j * j + k * k * k))
//
//{
//
//printf("%5d", n); // %5d表示以十进制格式输出，宽度为5
//
//}
//
//}
//
//printf("\n");
//
//return 0;
//
//}
//斐波那契数列 
//#include <stdio.h>
//
//int main(int argc, char *argv[])
//
//{
//
//long f1, f2;
//
//f1 = f2 = 1;
//
//printf("\n输出斐波那契数列20项数据如下:\n");
//
//for (int i = 1; i <= 20; i++)
//
//{
//
//printf("%12ld %12ld", f1, f2);
//
//if (i % 2 == 0) /* 控制输出每行四个数字 */
//
//printf("\n");
//
//f1 = f1 + f2; /* 前两个月加起来赋值给第三个月 */
//
//f2 = f1 + f2; /* 前两个月加起来赋值给第三个月 */
//
//}
//
//printf("\n");
//
//return 0;
//
//}
//猴子吃桃问题：猴子第一天吃了若干个桃子，当即吃了一半，还不解馋，又多吃了一个； 第二天，吃剩下的桃子的一半，还不过瘾，又多吃了一个；以后每天都吃前一天剩下的一半多一个，到第10天想再吃时，只剩下一个桃子了。问第一天共吃了多少个桃子？
//
//【程序分析】：
//
//采取逆向思维的方法，从后往前推断。第10天剩一个，前一天则为d9 = （d10 +1）*2，以此推算前一天。可以采用递归如下：
//
//Day10--------------------------1
//
//Day9-------------------------- 4
//
//Day8------------------------- 10
//
//Day7-------------------------22
//
//Day6-------------------------46
//
//Day5-------------------------94
//
//Day4-------------------------190
//
//Day3-------------------------382
//
//Day2-------------------------766
//
//Day1-------------------------1534
//
//【程序源码】：
//
///*********************************************
//
//运行平台:Windows 10专业版
//
//开发工具:Visual Studio 2017
//
//编程语言:C语言
//
//整理作者:Sirius
//
//修改日期:2020年2月8日
//
//**********************************************/
//
//#include <stdio.h>
//
//int main(int argc, char *argv[])
//
//{
//
//int day = 9;
//
//int x1, x2; /* x1表示前一天，x2表示后一天 */
//
//x2 = 1; /* 第10天，剩下一个 */
//
//for(;day>=1;day--) /* 从第9天开始递推到第1天 */
//
//{
//
///* x2表示后一天的 */
//
//x1 = (x2 + 1) * 2;
//
//x2 = x1;
//
//}
//
//printf("\n\n猴子第一天共计摘下：%d个桃子\n\n", x1);
//
//return 0;
//
//}
//猴子吃桃问题：猴子第一天吃了若干个桃子，当即吃了一半，还不解馋，又多吃了一个； 第二天，吃剩下的桃子的一半，还不过瘾，又多吃了一个；以后每天都吃前一天剩下的一半多一个，到第10天想再吃时，只剩下一个桃子了。问第一天共吃了多少个桃子？
//
//【程序分析】：
//
//采取逆向思维的方法，从后往前推断。第10天剩一个，前一天则为d9 = （d10 +1）*2，以此推算前一天。可以采用递归如下：
//
//Day10--------------------------1
//
//Day9-------------------------- 4
//
//Day8------------------------- 10
//
//Day7-------------------------22
//
//Day6-------------------------46
//
//Day5-------------------------94
//
//Day4-------------------------190
//
//Day3-------------------------382
//
//Day2-------------------------766
//
//Day1-------------------------1534
//
//【程序源码】：
//
///*********************************************
//
//运行平台:Windows 10专业版
//
//开发工具:Visual Studio 2017
//
//编程语言:C语言
//
//整理作者:Sirius
//
//修改日期:2020年2月8日
//
//**********************************************/
//
//#include <stdio.h>
//
//int main(int argc, char *argv[])
//
//{
//
//int day = 9;
//
//int x1, x2; /* x1表示前一天，x2表示后一天 */
//
//x2 = 1; /* 第10天，剩下一个 */
//
//for(;day>=1;day--) /* 从第9天开始递推到第1天 */
//
//{
//
///* x2表示后一天的 */
//
//x1 = (x2 + 1) * 2;
//
//x2 = x1;
//
//}
//
//printf("\n\n猴子第一天共计摘下：%d个桃子\n\n", x1);
//
//return 0;
//
//}
//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//
//【程序分析】：
//
//根据源程序如下进行详细分析。
//
//【程序源码】：
//
///*********************************************
//
//运行平台:Windows 10专业版
//
//开发工具:Visual Studio 2017
//
//编程语言:C语言
//
//整理作者:Sirius
//
//修改日期:2020年2月8日
//
//**********************************************/
//
//#include <stdio.h>
//
//int main(int argc, char *argv[])
//
//{
//
//double sn = 100.0, hn = sn / 2;
//
//for (int n = 2; n <= 10; n++)
//
//{
//
//sn = sn + 2 * hn;/*第n次落地时共经过的米数*/
//
//hn = hn / 2; /*第n次反跳高度*/
//
//}
//
//printf("\n球所经过的路程为:%lf米\n", sn);
//
//printf("第10次反弹调度为:%lf米\n\n", hn);
//
//return 0;
//
//}
//洛谷p8752 
//#include<stdio.h>
//int main()
//{
//	int m,n,x,y,i,count;
//	int arr[5]={0};
//	printf("请输入5个年份：");
//	scanf("%d",&arr[i]);
//	for(i=0;i<5;i++)
//	{
//		if(m==x&&y==(n+1))
//		{
//			printf("%d",&arr[i]);
//		}
//	}
//	return 0;
//}
//失败原因，没有表示清楚变量
//用户输入的年份 int a = 0; 
//m,n,x,y应该表示的是个位，十位，百位，千位
//m= a%10; n =m%10; x = n%10; y = x%10; 
//c正确代码

//#include<stdio.h>
//int main()
//{
//int a = 0; //个位
//int b = 0; //十位
//int c = 0; //百位
//int d = 0; //千位
//int e = 0; //每次输入的数据 
//int count = 0; //计数 
//int i = 0;
//for(i=0;i<5;i++)
//	{
//	scanf("%d",&e);
//	a = e%10;
//	b = a%10;
//	c = b%10;
//	d = c%10;
//	}
//	if(d==b&&a==c+1)
//		{
//		count++;
//		}
//	}
//	printf("%d",count);
//printf("%d %d %d %d",a,b,c,d);
//	return 0;
//	
//}


//在原有基础上将int类型使用char类型输入，代码更简单
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	char q,b,s,g;
//	int i;
//	int count;
//	for(i=0;i<5;i++)
//	{
//		cin>>q>>b>>s>>g;
//		if(q==s&&g-b==1)
//		{
//			count++;
//		}
//	}
//	cout<<count;
//	return 0;
//}


//c++ 暴力解法 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int q,b,s,g,count,a,i;
//	for(i=0;i<5;i++)
//	{
//		cin>>a;
//		g=a%10;
//		a/=10;
//		s=a%10;
//		a/=10;
//		b=a%10;
//		a/=10;
//		q=a%10;
//		if(q==s&&g-b==1)
//		{
//			count++;
//		}
//	}
//	cout<<count;
//	return 0;
//}


//求100-200之间的素数
//错误代码 
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		for(n=2;n<i;n++)
//		{
//			if(n%i==0)
//			{
//				;
//			}
//			else
//			printf("%d",i);
//		}
//	}
//	return 0;
// } 
//#include<stdio.h>
//int main()
//{
//	int i,N,m,n,min,max,mid;
//	printf("请输入一个整数N:");
//	scanf("%d",&N);
//	getchar();
//	int arr[N];
//	for(N=0;N<100;N++)
//	{
//		for(i=0;i<100;i++)
//		{
//			scanf("%d",&arr[i]);
//			printf(" ");
//		}
//	}
//	max=sizeof(arr)/sizeof(arr[0]);
//	printf("%d",max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if((n%4==0)&&(n%100!=0)||(n%400==0))
//	printf("1");
//	else 
//	printf("0");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int m,n,i,j,k;
//	scanf("%d",&n);
//	m = n - 2;
//	int arr1[10000]={n};
//	if(n>=3)
//	arr1[1]=m;
//	while(n>=2)
//	{
//		n--;
//		for(i=2;i<n;i++)
//		{
//			if(n%i==0)
//			break;
//			else
//			for(j=2;j<n;j++)
//			{
//				arr1[j]=n;
//			}
//			
//		}
//		
//	}
//	for(i=0;i<n;i++){
//	printf("%d %d\n",arr1[i],arr[i+1]);	
//	}
//	
////}
//#include<stdio.h>
//int main()
//{
//	int i,j,s;
//	for(i=1;i<10;i++)
//	{
//		for(j=1;j<10;i++)
//		{
//			s=i*j;
//			printf("%d*%d=%d",i,j,s);
//			printf("\n");
//		}
//		
//	}
//	return 0;
//}
//闰年判断 
//#include<stdio.h>
//int main()
//{
//	int year;
//	printf("请输入年份：");
//	scanf("%d",&year);
//	if(year%4==0&&year%100!=0||year%400==0)
//	printf("%d是闰年\n",year);
//	else
//	printf("%d不是闰年\n",year);
//	return 0;
//}

//求十位、百位、千位
//#include<stdio.h>
//int main()
//{
//	int n,g,s,b,q;
//	printf("请输入一个数：");
//	scanf("%d",&n);
//	g = n%10;
//	s = n/10%10;
//	b = n/100%10;
//	q = n/1000%10;
//	printf("%d的个位是%d十位是%d百位是%d千位是%d",n,g,s,b,q);
//	return 0;
// } 


//求1000以内水仙花数
//#include<stdio.h>
//int main()
//{
//	int i,g,s,b;
//	for(i=1;i<1000;i++)
//	{
//		g = i%10;
//		s = i/10%10;
//		b = i/100%10;
//		if(i==g+g*g+s*s*s+b*b*b)
//		{
//			printf("%d是水仙花数\n",i);
//
//		}
//			}
//	return 0;
// } 

//#include<stdio.h>
//int main()
//{
//	int r;
//	float s,c;
//	printf("请输入圆的半径：");
//	scanf("%d",&r);
//	printf("圆的面积：%4f",3.14*r*r);
//	printf("圆的周长：%4f",2*3.14*r);
//	return 0;
//}



////
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int a=4;
//	int b;
//	b=sqrt(a);
//	printf("%d",b);
//	
//}


//#include<stdio.h>
//int main()
//{
//	int n,i,l=0,k,j;
//	int arr[10000];
//	scanf("%d",&n);
//	for(j=0;j<n;j++)
//	{
//		scanf("%d",arr[j]);
//	}
//	
//	for(i=0;i<=n;i++)
//	{
//	
//			if(arr[i]!=arr[i+1])
//			{
//				for(k=i;k<=n-1;k++)
//				{
//					arr[k]=arr[k+1];
//					l++;
//				}
//			}
//			
//		
//		
//	}
//	printf("%d",l);
//		 
//}


//#include<stdio.h>
//int main()
//{
//	int n,i,j,l,sum;
//	int sj[100000];
//	scanf("%d",&n);
//	for(j=0;j<n;j++)
//	{
//		scanf("%d",&sj[j]);
//		
//	}
//	printf("%d",n);
//	for(l=1;l<n;l++)
//	{
//		printf("%d",n-sj[l]);
//	}
//}
//

//#include<stdio.h>
//int main()
//{
//	int n = 5;
//	int i,arr[5],l,j;
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(j=0;j<i;j++)
//	{
//		printf("%d",arr[j]);
//	}
// } 





#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d",a,b,c,d);
	f=(c*60+d-a*60-b);
	e=f/60;
}







