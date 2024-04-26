//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int len = 0;
//	int max = 0;
//	int arr[1000]={0};
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&arr[i]);
//	for(i=0;i<n;i++)
//	{
//	if(arr[1+i]==arr[i]+1)
//	len++;
//	if(a[i+1]!=a[i]+1)
//		{
//			if(max<len)
//			{
//				max=len;
//			}
//			len=0;
//		}
//	}
//	if(n==1)
//	printf("%d",max);
//	else
//	printf("%d",++max);
//	密码确认 
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s",&password);
//	printf("请确认(Y/N):>");
////1,	getchar();
//2,	while((ch=getchar())!='\n')
//{
//	;
//}
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("确认成功！"); 
//	}
//	else
//	{
//		printf("确认失败");
//	}


//只输入0到9的数字字符 
//int ch = 0;
//while((ch=getchar()) != EOF)
//{
//	if(ch<'0'||ch>'9')
//	continue;
//	putchar(ch);
//}

//for循环
//int i = 0;
//for(i=1;i<=10;i++)
//{
//	if(i==5)
//		continue;  //continue作用跳过本次循环后面的代码 
//	printf("%d",i);
// } 
 //不可在for循环体内改变循环变量 “i = 5”，正确的是“i == 5” 
 /*死循环,因为continue跳过本次循环后面的代码，i++被跳过了，i的值无法改变，所以再进入循环i还是5，死循环。 
 while(i<=10)
 {
 	if(i==5)
 		continue;
 	i++;   
  }
  */ 
//  int i = 0;
//  int j = 0;
//  for(i=0;i<=2;i++)
//  {
//  	for(j=0;i<i;i++)
//  	{
//  		printf("*");
//	}
//	printf("\n");
//  } 

//	return 0;
// } 

//洛谷p1420 
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int count=0;
//	int max=0;
//	long arr[1000];
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&arr[i]);
//	for(i=0;i<n;i++)
//	{
//		if(a[1+i]==a[i]+1)
//		count++;
//		if(a[i+1]!=a[i]+1)
//		{
//			if(max<count)
//			{
//				max=count;
//			}
//			count=0;
//		}
//	}
//	if(n==1)
//	printf("%d",max);
//	else
//	printf("%d",++max);
//	return 0;
//	
//}
