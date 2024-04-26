//#include<stdio.h>
//int main()
//{
//	int i,j,n,l;
//	int rs[100000];
//	scanf("%d",&n);
//	for(i=0;i<n-1;i++)
//	{
//		scanf("%d",&rs[i]);
//	}
//	printf("%d",n);
//	for(j=1;j<n;j++)
//	{
//		printf("%d",(n-(rs[j]+1)));
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n,i,j,m=0,x;
//	int arr[100000];
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	switch(j)
//	{
//		case 1:
//		while(j==n) 
//			j+=1;
//			m+=5;
//			break;
//		case 2:
//		while(j==n)
//			j+=3;
//			m+=5;
//			break;
//		default:
//			printf("error");
//			break;
//	}
//	printf("%d",m);
//}



//#include<stdio.h>
//int main()
//{
//	int n,h,i;
//	scanf("%d",n);
//	for(i=1;)
//}


////三角形面积
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,b,c,q,s;
//	scanf("%d%d%d",&a,&b,&c);
//	q = (a+b+c)/2;
//	s=sqrt(q*(q-a)*(q-b)*(q-c));
//	printf("%d",s);
//	return 0;
// } 


//九九乘法表 
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<10;i++)
//	{
//		for(j=1;j<10;j++)
//		{
//			printf("%d*%d=%d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	for(i=0;i<100;i++)
//	{
//		if(i*i/10%10==i||i*i/100==i)
//		printf("%d\n",i);
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int arr[9][9];
//	int i,j,l;
//	for(i=1;i<10;i++)
//	{
//		for(i=1;i<10;i++)
//		{
//			l=arr[i][j];
//		}
//	}
//	printf("%d",l);
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i,j,m;
//	for(i=2;i<=100;i++)
//	{
//		m=sqrt(i);
//		for(j=2;j<=m;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(i>m)
//		{
//			printf("%d\n",i);
//		}
//	}
//}


//int min(int min,int score[5])
//{
//	int i,min;
//	for(i=0;i<5;i++)
//	{
//		min=score[0];
//		if(min>score[i]);
//		min=score[i];
//	}
//	return min;
//}
//int max(int max,int score[5])
//{
//	int i,max;
//	for(i=0;i<5;i++)
//	{
//		min=score[0];
//		if(max<score[i]);
//		max=score[i];
//	}
//	return max;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int i,min,max;
//	int score[5]={88,75,83,98,67};
//	printf("数组最大值为%d,数组最小值为%d",max(max,score[5],min(min,score[5]));
//	
//	
//	
//	
//}

//#include<stdio.h>
//#define N 5
//int main()
//{
//	float score[N],max,min,sum=0,ave;
//	int i;
//	printf("请输入%d个学生成绩：",N);
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&score[i]);
//	}
//	max=min=score[0];
//	for(i=0;i<N;i++)
//	{
//		if(score[i]>max)
//		max=score[i];
//		if(score[i]<min)
//		min=score[i];
//		sum+=score[i];
//	}
//	ave=sum/N;
//	printf("max=%d,min=%d,ave=%d",max,min,ave);
//}
//数组求最小值，最大值，总和，平均值 
//#include<stdio.h>
//#define n 5
//int main()
//{
//	int i,max,min,avg,sum;
//	int score[5]={81,83,78,79,82};
//	max=score[0];
//	min=score[0];
//	for(i=0;i<5;i++)
//	{
//		if(max<score[i])
//		max=score[i];
//		if(min>score[i])
//		min=score[i];
//		sum+=score[i];
//	}
//	avg=sum/n;
//	printf("max=%d,min=%d,sum=%d,avg=%d",max,min,sum,avg);
//	return 0;
//}



//冒泡排序法 

//升序排列 
//#define N 
//#include<stdio.h>
//int main()
//{
//	int i,j,k;
//	int arr[N]={90,89,78,66,45};
//	for(i=0;i<5;i++)  //外层循环i控制趟数 
//	{
//		for(j=0;j<5-i;j++) //内层循环变量j控制每趟比较的次数 
//		{
//			if(arr[j]>arr[j+1])
//			{
//				k=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=k;
//			}
//		}
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}
//降序排列 
//#define N 
//#include<stdio.h>
//int main()
//{
//	int i,j,k;
//	int arr[N]={90,89,78,66,45};
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5-i;j++)
//		{
//			if(arr[j]<arr[j+1])
//			{
//				k=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=k;
//			}
//		}
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}








//斐波那契数列
//1 1 2 3 5 8 13 ...
//#include<stdio.h>
//int fibon(int n)
//{
//	if(n==1||n==2)
//	{
//		return 1;
//		}	
//		else
//		{
//			return fibon(n-1)+fibon(n-2);
//		}
//}
//int main()
//{
//	int i;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\n",fibon(i));
//	}
//	return 0;
// } 


//递归求阶乘n！
//#include<stdio.h>
//long x1(int n)
//{
//	long m;
//	if(n==0)
//	m=1;
//	else
//	m=x1(m-1)*m;
//	return m;
// } 
// int main()
// {
// 	long m=0;
// 	int n;
// 	scanf("%d",&n);
// 	printf("的阶乘为%d",x1(n));
// 	return 0;
// }

//#include<stdio.h>
//int age(int n)
//{
//	int c;
//	if(n==1)
//	c=10;
//	else 
//	c=age(n-1)+2;
//	return c;
//}
//int main()
//{
//	printf("%d",age(3));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5]={1,3,5,7,9};
//	int i,*p=a;
//	*(a+2)=4;
//	for(i=0;i<5;i++)
//	{
//		printf("%d",*(p+i));
//		printf("\n");
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d",p[i]);
//		printf("\n");
//	}
//	
//	for(p=a;p<a+5;p++)
//	{
//		printf("%d",*p);
//	}
//}



//二维数组求对角线之和 
//#include<stdio.h>
//int main()
//{
//	int a[3][3],sum=0;
//	int i,j;
//	printf("请输入元素:");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}	
//	}
//	for(i=0;i<3;i++)
//	{
//		sum+=a[i][i];
//	}
//	printf("%d",sum);
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


//求圆周长面积 
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


//开平方 
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

//求质数

//100-200
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i,j,l;
//	for(i=100;i<=200;i++)
//	{
//		for( j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//	{
//		printf("%d\n",i);
//	}
//	}
//	
//	
// } 

//输出100以内的素数 
// #include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i,j,l;
//	for(i=0;i<=100;i++)
//	{
//		for( j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//	{
//		printf("%d\n",i);
//	}
//	}
//	
//	
// } 
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i,j,l;
//	for(i=0;i<=100;i++)
//	{
//		l=sqrt(i);
//		for(j=2;i<l;j++)
//		{
//			if(i%j==0)
//			break;
//		}
//		if(i==j)
//		{
//			printf("%d",i);
//		}
//	}
// } 




//gets()的作用，获取输入的字符串，相当于scanf输入字符串,
//while循环可以得到输入字符串的长度 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char msg[100];
//	int len=0,i,n,left,right;
//	scanf("%d",&n);
//	getchar();
//	
//	gets(msg);
//	while(msg[len]!='\0')
//	{
//		len++;
//	}
//	left=0;
//	right=sizeof(msg[len])/sizeof(msg[0]);
//	printf("%d %d %d\n",left,right,len);
////	for(i=0;i<n;i++)
////	{
////		
////	}
////	
//	
//	printf("%d",len);
//}

//int min(int a[m])
//{
//	while(m!=0)
//	{
//		m--;
//		a[m]=a[m]+a[m-1];
//	}
//	for(i=0;i<n;i++)
//	{
//		a[i]=a[m];
//		while(a[i]<a[i+1])
//		{
//			a[i]=a[i+1];
//		}
//	}
//	return a[i];
//}
//#define N 1000
//#include<stdio.h>
//int main()
//{
//	int n,m,a[N],i,sum,c;
//	scanf("%d %d",&n,&m);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d\n",&a[i]);
//	}
//		for(i=0;i<n;i++)
//	{
//		sum=min(a[m]);
//	}
//	printf("%d",sum);
//
//}
//#define N 10000
//#include<stdio.h>
//int main()
//{
//	char a[N];
//	char* p=a;
//	int n,i;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%c",a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		printf("%c",a[i]);
//	}
//	return 0;
//	
//	
//}






