//#include<stdio.h>
//int main()
//{
//	int score;
//	printf("输入学生成绩:");
//	scanf("%d",&score);
//	switch(score)
//	{
//		case1'score<60':
//		printf("不及格\n");
//		break;
//		case2'score>=60':
//		printf("及格\n");
//		break;
//		case3'score>=70':
//		printf("中等\n");
//		break;
//		case4'score>=80':
//		printf("良好\n");
//		break;
//		case5'score>=90':
//		printf("优秀\n");
//		break;
//		default:
//				printf("输入错误\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int score;
//	printf("输入学生成绩(0-100)：");
//	scanf("%d",&score);
//}
//分支语句switch输出学生成绩表归类 
//#include<stdio.h>
//int main()
//{
//	int score;
//	printf("输入学生成绩：");
//	scanf("%d",&score);
//	switch(score/10)
//	{
//		case 10:
//		printf("完美\n");
//		break;
//		case 9:
//		printf("优秀\n");
//		break;
//		case 8:
//		printf("良好\n");
//		break;
//		case 7:
//		printf("中等\n");
//		break;
//		case 6:
//		printf("及格\n");
//		break;
//		default:
//		printf("不及格\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	float x,y;
//	int ge,shi,bai,qian,z;
//	printf("请输入一个浮点数：");
//	scanf("%f",&x);
//	z = x*10;
//	ge = z%10;
//	shi = ge%10;
//	bai = shi%10;
//	qian = bai%10;
//	y = ge*1000+shi*100+bai*10+qian;
//	printf("%d\n",ge);
//	printf("%d\n",shi);
//	printf("%d\n",bai);
//	printf("%d\n",qian);
//	return 0;
//}
//数字反转 
//1。#include<stdio.h>
//int main()
//{
//	char a,b,c,d;
//	scanf("%c%c%c.%c\n",&a,&b,&c,&d);
//	printf("%c.%c%c%c\n",d,c,b,a);
//	return 0;
//}
//2，
//#include<stdio.h>
//int main()
//{
//	char a,b,c,d;
//	printf("请输入一个浮点数：");
//	scanf("%c%c%c.%c",&a,&b,&c,&d);
//	printf("%c.%c%c%c\n",d,c,b,a);
// } 


////猴子吃桃
//#include<stdio.h>
//int main()
//{
//	int i,n,m;
//	printf("请输入天数：");
//	scanf("%d",n);
//	for(m=1;m<n;m++)
//	{
//		i=2*i+1;
//	}
//	printf("小猴买了%d个桃子\n",i);
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int m=1;
//	while(--n)
//	{
//		m=(m+1)*2;
//	}
//	printf("小猴摘了%d个桃子",m);
//	return 0;
//}
