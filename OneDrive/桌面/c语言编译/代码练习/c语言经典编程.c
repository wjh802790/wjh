//#include<stdio.h>
/*题目古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
　　　后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
1.程序分析：　兔子的规律为数列1,1,2,3,5,8,13,21… */
//int main()
//{
//	long r1,r2;
//	int m,sum;
//	for(m=1;m<=24;m++)
//	{
//		printf("%12d %12d",r1,r2);
//		if(m%2==0)printf("\n");
//		r1=r1+r2;
//		r2=r1+r2;
//	}
//	
//}

//#include<stdio.h>
//#include<math.h>
///*判断101-200之间有多少个素数，并输出所有素数。
//1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
//　　　　　　则表明此数不是素数，反之是素数*/
//int main()
//{
//	int i,j,n;
//	for(i=101;i<=200;i++)
//	{
//		n=sqrt(i+1);
//		for(j=2;j<=n;j++)
//		{
//			if(i%j==0)
//			break;
//			if(1)
//			printf("%d",i);
//			
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
///*打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
//　　　本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
//1.程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。*/
//int main()
//{
//	int n,g,s,b;
//	printf("水仙花数:");
//	for(n=100;n<=999;n++)
//	{
//		g = n%10;
//		s = n/10%10;
//		b = n/100;
////	2、	g = n%10;
////		s = n/10%10;
////		b = n/100%10;
//		if(n==g*g*g+s*s*s+b*b*b)
//		printf("%d\n",n); 
//	}
//	
//	printf("\n");
//}
//#include<stdio.h>
///*
//质数： 
//1、质数p的约数只有两个：1和p。
//2、算术基本定理：任一大于1的自然数，要么本身是质数，要么可以分解为几个质数之积，且这种分解是唯一的。
//题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。 
//程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成： 
//(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
//(2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数你n,
//　重复执行第一步。
//(3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。 */
//int main()
//{
//	int n,m;
//	int k =1;
//	printf("请输入一个数:");
//	scanf("%d",&n);
//	printf("%d=",n);
//	for(m=2;m<n;m++)
//	{
//		while(n!=k)
//		{
//			if(n%m==0)
//			{
//				printf("%d*",m);
//				n=n/m;
//			}
//			else 
//			break;
//		}
//	
//	}
//	printf("%d",n);
//}
//#include<stdio.h>
///*题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，
//　　　60分以下的用C表示。
//1.程序分析：(a>b)?a:b这是条件运算符的基本例子。*/
//int main()
//{
//	int score;
//	char grade;
//	printf("请输入一个分数:");
//	scanf("%d",&score);
//	grade = (score>=90)? 'A':(score>=60?'B':'C' );
// 三位运算符嵌套判断 （判断条件1）？'':（判断条件2 '':''） 
//	printf("grade=%c",grade);
// } 
//#include<stdio.h>
/*
如果数a能被数b整除，a就叫做b的倍数，b就叫做a的约数
一个自然数a能被自然数b整除，则称a为b的倍数
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
1.程序分析：利用辗除法*/
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d%d", &a, &b);//99,18
//	int m = a;
//	int n = b;
//	while (a%b != 0){
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("最大公约数为：%d\n", b);
//	printf("最小公倍数为：%d\n",m*n/b);
//	return 0;
//}
//#include<stdio.h>
///*
//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
//1.程序分析：利用while语句,条件为输入的字符不为'\n'.*/
//int main()
//{
//	char c;
//	int letters=0,space=0,digit=0,others=0;
//	printf("请输入一行字符:");
//	while((c=getchar())!='\n')
//	 {
//	 	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
//	 		letters++;
//	 		else if(c==' ')
//	 			space++;
//	 			else if(c>='0'&&c<='9')
//	 			digit++;
//	 			else
//	 			others++;
//	 		
//	 }
//	 printf("char=%d letters=%d space=%d digit=%d others=%d",c,letters,space,digit,others);
// } 
//#include<stdio.h>
/*
题目：题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
　　　共有5个数相加)，几个数相加有键盘控制。
1.程序分析：关键是计算出每一项的值。*/
//int main()
//{
//	int a,n,count=0;
//	long int sum,gd;
//	printf("请输入一个两个数a和n\n");
//	scanf("%d %d",&a,&n);
//	printf("a=%d n=%d\n",a,n);
//	while(count<=n)
//	{
////		gd=gd+n;
//		sum=sum+n;
//		a=a*10*a;
//		++count;
//	}
//	printf("a+aa+...=%ld\n",sum);
//	
// } 

//#include<stdio.h>
///*题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
//　　　找出1000以内的所有完数。
//1. 程序分析：请参照程序<--上页程序14.*/
//int main()
//{
//	int arr[100];
//	int i,j,k,n;
//	for(i=2;i<1000;i++)
//	{
//		n=0;
//		k=i;
//		for(j=1;j<i;j++)
//		{
//			if(i%j==0)
//			{
//			n++;
//			k=k-j;
//			arr[n]=j;
//			}
//			if(k==0)
//			{
//				printf("%d 是完数",i);
//				printf("%d\n",arr[n]);
//			}
//		}
//	}
//}

//#include<stdio.h>
/*题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
　　　第10次落地时，共经过多少米？第10次反弹多高？
1.程序分析：见下面注释*/
//int main()
//{
//	float hg=100.0,sn=hg/2;
//	int n;
//	for(n=2;n<=10;n++)
//	{
//		sn=sn+2*hg; //第n次落地共经历多少米 
//		hg=hg/2;     //第n次反跳高度 
//	}
//	printf("%f\n",sn);    
//	printf("%f\n",hg);
//	
//}

//#include<stdio.h>
///*题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
//　　　　　　掉不满足条件的排列。*/ 
//int main()
//{
//	int i,j,k;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			for(k=0;k<5;k++)  //个位十位百位的取值范围都是一样，只要不能相等即可 
//			{
//				if(i!=k&&i!=j&&j!=k)
//				printf("%d %d %d\n",i,j,k);
//			}
//		}
//	}
//	
//}

/*题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
　　　于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
　　　成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
　　　40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
　　　100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。*/
#include<stdio.h>
int main()
{
	
	return 0;
}
