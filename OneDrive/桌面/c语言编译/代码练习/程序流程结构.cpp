// 程序流程结构 
//1，顺序结构 
//2， 选择结构 
//3，循环结构

//选择结构 
//if语句 
  
//单行格式if语句
//if（条件）{条件满足执行的语句}
//#include<bits/stdc++.h> 
//using namespace std;
//
//int main()
//{
//  int score =0;
//  cout << "请输入分数score：" << endl;
//  cin >> score;
//  cout << "您输入的分数为score："<< score <<endl;
//  if(score>=600&&score<=650)
//  {
//  	cout << "恭喜您考上一本大学!" <<endl;
//  }
//  else if(score<600)
//  {
//  	cout << "不要灰心。" << endl;
//  }
//  else if(score>=650&&score<700)
//  {
//  	cout << "恭喜您考上211大学！" << endl;
//  }
//  else
//  {
//  	cout << "恭喜您成为状元！" <<endl;
//  }
//  system("pause");
//  return 0;
//}
//案例
//提示用户输入一个高考考试分数，并显示高考分数，根据分数做如下判断
//分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科
//在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600分，考入人大。

//1， 
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int score = 0;
//	cout << "请输入您的高考分数:" << endl;
//	cin >> score;
//	cout << "您的高考分数为score:" << score <<endl;
//	if(score>600)
//	{
//		cout << "恭喜您考上一本" << endl;
//	}
//	else if(score>=600&&score<650)
//	{
//		cout << "恭喜您考上人大" <<endl;
//	}
//	else if(score>=650&&score<700)
//	{
//		cout << "恭喜您考上清华" <<endl;
//	}
//	else if(score>=700)
//	{
//		cout << "恭喜您喜提北大录取通知书" <<endl;
//	} 
//	else if(score>=500&&score<600)
//    {
//		cout << "恭喜您考上二本" <<endl;
//	 }
//	else if(score>=400&&score<500)
//	 {
//	 	cout << "恭喜您考上三本" <<endl;
//	 }
//	 else
//	 {
//	 	cout << "未考上本科" << endl;
//	 }
//	system("pause");
//	return 0;
//}
//2，
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int score = 0;
//	cout << "请输入您的高考分数：" <<endl;
//	cin >> score;
//	cout << "您的高考分数为:" <<score<< endl;
//	if(score>600)
//		{
//			cout << "恭喜您考入一本大学"<<endl;
//			if(score>700)
//				{
//					cout << "您能考入北京大学" <<endl;
//				}
//			else if(score>650)
//	    		{
//					cout << "您能考入清华大学"<<endl;
//				}	
//			else
//				{
//					cout <<"您能考入人民大学"<<endl;
//				}		
//	}
//	else if(score>=500)
//	{
//		cout << "您能考入二本大学"<<endl;
//	}
//	else if(score>=400)
//	{
//		cout << "您能考入三本大学"<<endl;
//	}
//	else
//	{
//		cout <<"您未能考上大学，请继续努力。"<<endl;
//	}
//	system("pause");
//	return 0;
//}
//三只小猪谁最重 

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	cout << "请输入三只小猪abc的体重："<<endl;
//	cin >> a;
//	cin >>b;
//	cin >> c;
//	cout << "a="<<a<<endl;
//	cout << "b="<<b<<endl;
//	cout << "c="<<c<<endl;
//	if(a>b)
//	{
////		cout <<"a比b重"<<endl;
//		if(a>c)
//		{
//			cout << "a最重"<<endl;
//		}
//		else if(a<c)
//		{
//			cout<< "c最重"<<endl;
//		}
//	}
//	else if(a<b)
//	{
////		cout<<"b比a重"<<endl;
//		 if(b>c)
//		{
//			cout<<"b最重"<<endl;
//		}
//		else if(b<c)
//		{
//			cout<<"c最重"<<endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//三目运算符 a？b：c
#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = 0;
//c = 1>0?a+b:b-a; //比较为真，将a+b的值赋给c，反之将b-a赋给c 
//cout << "c="<<c<<endl;
//c = a>b?a:b; //作比较，大的值赋给c 
//cout << "c="<<c<<endl;
//system("pause");
//return 0;
// } 


//swtich语句
/*
swtich(表达式)
{
case 结果1：执行语句； break; 
case 结果2：执行语句； break;
...
default：执行语句； break;
}
*/ 



//循环结构
//while(循环条件){循环语句} 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a =0;
	int b =0;
//	for(a=0;a<10;a++)
//	{
//		for(b=0;b<a;b++)
//		{
//			cout<<"*"<<endl;
//		}
//		cout<<"\n"<<endl;
//	}
//	while(a<10)
//	{
//		cout <<"a="<<a<<endl;
////		a++;
////		++a;
//	}
	system("pause");
	return 0;
}

