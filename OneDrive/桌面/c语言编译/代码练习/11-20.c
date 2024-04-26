//p1428 小鱼比可爱 
//#include<stdio.h>
//int main()
//{
//	int n,m,a[1000],flag=0,i;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		for(m=i;m>=0;m--)
//		{
//			if(a[i]>a[m])
//			{
//				flag++;
//			}
//		}
//		printf("%d ",flag);
//	}
//	return 0;
//}

//p1427 小鱼的数字游戏
//#include<stdio.h>
//int main()
//{
//	char n[20],*p=&n;
//	int i;
//	for(i=0;i<19;i++)
//	{
//		scanf("%c",n[i]);
//	}
//	while(*p!=0)
//	{
//		printf("%c",p[i]);
//		i--;
//	}
//	
//	
// } 

//p5727 冰雹猜想
//#include<stdio.h>
//int main()
//{
//	int n,i,a[1000],flag;
//	scanf("%d",&n);
//	while(n!=1)
//	{
//		flag++;
//		a[0]=n; 
//		for(i=1;i<flag;i++)
//		{
//			if(n%2==1)
//		{
//			n=n*3+1;
//			a[i]=n;
//		}
//			else
//			n=n/2;
//			a[i]=n;	
//		}
//	
//	}
//	for(i=0;i<flag;i++)
//	{
//		printf("%d",a[i]); 
//	}
// } 


//p5733 自动修正

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100]={0},n;
	scanf("%s",n);
	int len=strlen(n);
	strcpy(a,n);
	printf("%s",a);
	
 } 

