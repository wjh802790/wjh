// �������̽ṹ 
//1��˳��ṹ 
//2�� ѡ��ṹ 
//3��ѭ���ṹ

//ѡ��ṹ 
//if��� 
  
//���и�ʽif���
//if��������{��������ִ�е����}
//#include<bits/stdc++.h> 
//using namespace std;
//
//int main()
//{
//  int score =0;
//  cout << "���������score��" << endl;
//  cin >> score;
//  cout << "������ķ���Ϊscore��"<< score <<endl;
//  if(score>=600&&score<=650)
//  {
//  	cout << "��ϲ������һ����ѧ!" <<endl;
//  }
//  else if(score<600)
//  {
//  	cout << "��Ҫ���ġ�" << endl;
//  }
//  else if(score>=650&&score<700)
//  {
//  	cout << "��ϲ������211��ѧ��" << endl;
//  }
//  else
//  {
//  	cout << "��ϲ����Ϊ״Ԫ��" <<endl;
//  }
//  system("pause");
//  return 0;
//}
//����
//��ʾ�û�����һ���߿����Է���������ʾ�߿����������ݷ����������ж�
//�����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ���ϱ���
//��һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�֣������˴�

//1�� 
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int score = 0;
//	cout << "���������ĸ߿�����:" << endl;
//	cin >> score;
//	cout << "���ĸ߿�����Ϊscore:" << score <<endl;
//	if(score>600)
//	{
//		cout << "��ϲ������һ��" << endl;
//	}
//	else if(score>=600&&score<650)
//	{
//		cout << "��ϲ�������˴�" <<endl;
//	}
//	else if(score>=650&&score<700)
//	{
//		cout << "��ϲ�������廪" <<endl;
//	}
//	else if(score>=700)
//	{
//		cout << "��ϲ��ϲ�ᱱ��¼ȡ֪ͨ��" <<endl;
//	} 
//	else if(score>=500&&score<600)
//    {
//		cout << "��ϲ�����϶���" <<endl;
//	 }
//	else if(score>=400&&score<500)
//	 {
//	 	cout << "��ϲ����������" <<endl;
//	 }
//	 else
//	 {
//	 	cout << "δ���ϱ���" << endl;
//	 }
//	system("pause");
//	return 0;
//}
//2��
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int score = 0;
//	cout << "���������ĸ߿�������" <<endl;
//	cin >> score;
//	cout << "���ĸ߿�����Ϊ:" <<score<< endl;
//	if(score>600)
//		{
//			cout << "��ϲ������һ����ѧ"<<endl;
//			if(score>700)
//				{
//					cout << "���ܿ��뱱����ѧ" <<endl;
//				}
//			else if(score>650)
//	    		{
//					cout << "���ܿ����廪��ѧ"<<endl;
//				}	
//			else
//				{
//					cout <<"���ܿ��������ѧ"<<endl;
//				}		
//	}
//	else if(score>=500)
//	{
//		cout << "���ܿ��������ѧ"<<endl;
//	}
//	else if(score>=400)
//	{
//		cout << "���ܿ���������ѧ"<<endl;
//	}
//	else
//	{
//		cout <<"��δ�ܿ��ϴ�ѧ�������Ŭ����"<<endl;
//	}
//	system("pause");
//	return 0;
//}
//��ֻС��˭���� 

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	cout << "��������ֻС��abc�����أ�"<<endl;
//	cin >> a;
//	cin >>b;
//	cin >> c;
//	cout << "a="<<a<<endl;
//	cout << "b="<<b<<endl;
//	cout << "c="<<c<<endl;
//	if(a>b)
//	{
////		cout <<"a��b��"<<endl;
//		if(a>c)
//		{
//			cout << "a����"<<endl;
//		}
//		else if(a<c)
//		{
//			cout<< "c����"<<endl;
//		}
//	}
//	else if(a<b)
//	{
////		cout<<"b��a��"<<endl;
//		 if(b>c)
//		{
//			cout<<"b����"<<endl;
//		}
//		else if(b<c)
//		{
//			cout<<"c����"<<endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//��Ŀ����� a��b��c
#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = 0;
//c = 1>0?a+b:b-a; //�Ƚ�Ϊ�棬��a+b��ֵ����c����֮��b-a����c 
//cout << "c="<<c<<endl;
//c = a>b?a:b; //���Ƚϣ����ֵ����c 
//cout << "c="<<c<<endl;
//system("pause");
//return 0;
// } 


//swtich���
/*
swtich(���ʽ)
{
case ���1��ִ����䣻 break; 
case ���2��ִ����䣻 break;
...
default��ִ����䣻 break;
}
*/ 



//ѭ���ṹ
//while(ѭ������){ѭ�����} 
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

