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
//	����ȷ�� 
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s",&password);
//	printf("��ȷ��(Y/N):>");
////1,	getchar();
//2,	while((ch=getchar())!='\n')
//{
//	;
//}
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("ȷ�ϳɹ���"); 
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}


//ֻ����0��9�������ַ� 
//int ch = 0;
//while((ch=getchar()) != EOF)
//{
//	if(ch<'0'||ch>'9')
//	continue;
//	putchar(ch);
//}

//forѭ��
//int i = 0;
//for(i=1;i<=10;i++)
//{
//	if(i==5)
//		continue;  //continue������������ѭ������Ĵ��� 
//	printf("%d",i);
// } 
 //������forѭ�����ڸı�ѭ������ ��i = 5������ȷ���ǡ�i == 5�� 
 /*��ѭ��,��Ϊcontinue��������ѭ������Ĵ��룬i++�������ˣ�i��ֵ�޷��ı䣬�����ٽ���ѭ��i����5����ѭ���� 
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

//���p1420 
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
