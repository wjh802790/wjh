//#include<bits/stdc++.h>����ͷ�ļ�
//#include<iostream>
//using namespace std;
//int main()
//{
//  cout <<  " " << endl;�������,�������Ϊ""�ڲ������� 
//	cout << "Hello,World!" << endl;
//	system("pause");
//	
//	return 0;
//}
//����ע��1
/*����ע�� */
  //�����������﷨���������� ������ = ������ʼֵ 
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  	int a = 10;
//  	cout << "a = "<< a << endl;
//  	system("pause");
//  }
//�������� 
/* 
1.#define �곣���� #define ������ ����ֵ  
*ͨ�����ļ��Ϸ����壬��ʾһ������ 
2.const���εı���: const �������� ������ = ����ֵ
*ͨ���ڱ�������ǰ�ӹؼ���const�����θñ���Ϊ�����������޸� 
 
*/ 
/*#include<iostream>
using namespace std;
//�����Ķ��巽ʽ
//1.#define �곣��
// 2.const���εı���
//1.#define �곣��
//#define Day 7
int main()
{
	const int Day = 7;
	 Day = 14; //����ԭ��Day��const����Ϊ���������������޸� 
	//Day = 14; //����ԭ��Day��#define ����Ϊ������һ���޸ľͻᱨ�� 
	cout << "һ�ܵ�����Ϊ:" << Day << endl; 
	system("pause");
	return 0;
 }
 */
//�ؼ���
//����������ʱ����ʹ��c++�Ĺؼ���
//��ʶ����������
/*���ã�C++�涨����ʶ��������������������ʱ����һ���Լ��Ĺ���
1.*��ʶ�������ǹؼ���

2.*��ʶ��ֻ������ĸ�����֣��»������

3.*��һ���ַ�����Ϊ��ĸ�����»���

4.*��ʶ������ĸ���ִ�Сд
��*����ʶ������ʱ�����𵽡�����֪�⡱��Ч���������Լ��������Ķ��� 




//�������ʹ��ڵ����壺������������ʵ��ڴ�ռ� 
//�ڶ����������ͣ�2.1������
/* 
��������                  ռ�ÿռ�                                             ȡֵ��Χ 
short�������Σ�            2�ֽ�
int�����Σ�                4�ֽ�
long�������Σ�             windowsΪ4�ֽڣ�linuxΪ4�ֽڣ�32λ����8�ֽ� ��64λ�� 
long long���������Σ�      8�ֽ�
  
����������ռ�ڴ�ռ䲻ͬ���ܱ�ʾ���������ķ�Χ��ͬ


 
2.2sizeof�ؼ���
���� ������sizeof�ؼ��ֿ���ͳ������������ռ�ڴ��С
�﷨��sizeof���������� / ������ 
sizeof(short)
sizeof(int)*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 10;
////	cout << "intռ���ڴ�ռ�Ϊ" << sizeof(int) << endl;
////    cout << "intռ���ڴ�ռ�Ϊ" << sizeof(i) << endl;	
//cout << "long longռ���ڴ�ռ�Ϊ" << sizeof(long long) << endl;
//    //i��ʹ��ǰ��int�������Ͷ��壬������Ҳ��������α��� 
//	system("pause");
//	return 0;
//}
//ռ���ڴ�ռ���ͱȽ� 
//short < int <=long <=long long 
//long��windowΪ4�ֽڣ�������linux����4�ֽں�8�ֽ����� 




//2.3ʵ�ͣ������ͣ�

// ��������               ռ�ÿռ�                        ��Ч���ַ�Χ 
//1. float ������          4�ֽ�                             7λ��Ч���� 
//2.double ˫����          8�ֽ�                             15-16λ��Ч���� 
//����������Ч���ֵķ�Χ��ͬ
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	float f1=3.14;
//	
//	cout << "f1="<<f1<<  endl;
//	//ͳ��floatռ�õ��ڴ�ռ� 
//	cout << "floatռ�õ��ڴ�ռ�Ϊ��"<<sizeof(float) <<endl;
//	
//	double dl=3.14159;
//	
//	cout << "dl="<<dl<<endl;
////	ͳ��doubleռ���ڴ�ռ� 
//	cout << "doubleռ�õ��ڴ�ռ�Ϊ��"<<sizeof(double)<<endl;
//	
//	//��ѧ������ 
//	float f2 =3e2��
//  cout << "f2" << endl; 
//f2=300
//  float f3=3e-2
//cout << "f3" << endl;
//f3=0.03 
//	e����10�Ķ��ٴη�����������3��10��ƽ�� ����������3��10��-2�η� 
//	system("pause");
//	return 0;



//2.4�ַ���
// 1.�ַ��ͱ����Ĵ�����ʽ 
//char ch = 'a';
// cout << ch <<endl;

//2.�ַ��ͱ�����ռ�ڴ��С 
//cout << "char�ַ��ͱ�����ռ�ڴ棻" << sizeof(char) <<endl;
 
 //3.�ַ��ͱ�����������
 //char ch2 = "b"'//�����ַ��ͱ�����ʱ��Ҫ�õ�����''
 // char ch2 = 'abcde';//�����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ�
 
//4.�ַ��ͱ�����ӦASCII����
// a - 97  A - 65
//cout << (int)ch << endl;
//�ַ��ͱ����洢ʱ�ǽ���Ӧ��ASCII������뵽�洢��Ԫ 



//2.5ת���ַ�
/*���õ�ת���ַ���\n ���з�,
\\ ����һ����б��'\'������ʹ��һ��\�ᱨ�������һ��'\'��ʱ��Ҫʹ������\\,
\t ˮƽ�Ʊ�(HT) (������һ��TABλ�ã�������������������
 


//2.6�ַ�������Ҫ��<string>ͷ�ļ�����������ͷ�ļ� 
�ַ�������1.char ������[] = "�ַ���ֵ"
char str1[] = "helloworld" 
cout << str1 <<endl;
 
�ַ�������2. string ������ = "�ַ���ֵ" 
string str2 = "helloworld"


//2.7��������bool
true  --��(������1)
false  --��(������0)

//1.����bool��������
bool flag = true; 
cout << flag << endl;
���:1,��ı��ʾ���1 
//�鿴bool������ռ�ռ� 
cout << "size of bool=" << sizeof(bool) << endl;

//2.8���ݵ����� 
cin >> ����

1.�������� 
int a =0;
cout <<"������α���a��ֵ��" << endl;
cin >> a;
cout << "���α���a=" << a << endl;

2.���������� 
float b = 0;
cout << "��������ͱ���b��ֵ: " << endl;
cin >> b;
cout << "�����ͱ���b= " << b << endl; 
 
3.�ַ�������
char c = 0;
cout << "����ַ��ͱ���c��ֵ: " << endl;
cin >> c;
cout << "�ַ��ͱ���c= " << c << endl;

4.�ַ���������
string d = 0;
cout << "����ַ����ͱ���d��ֵ��" << d << endl;
cin >> d;
cout << "�ַ����ͱ���d=" << d << endl;

5.�������� 
bool e = false;
cout << "�����������e��ֵ:" << e << endl;
cin >> e;
cout << "�������ͱ���e=" << e << endl; 
 


// } ���ӳ��� 
//#include<iostream>
//using namespace std;
//int main(void)
//{
//   int n;//�����n�췢��ʣ��1�� 
//   cin>>n;
//   int s=1;//����ʣ������� 
//   while(--n){
//      s=(s+1)*2;//ѭ����������ǰһ���ʣ���� 
//}
//cout<<s;
//return 0��
}
*/
//#include<bits/stdc++.h>
//using namespace std;
//int main(void)
//{
//	int n,count,max,temp0,temp;
//	cin>>n;//����Ҫ�жϵ������ܸ���
//	count=1;//��ʼ������õļ�������
//	max=1;//��ʼ������ŵ���󳤶�
//	temp0=-1;
//	for(int i=0;i<n;i++)
//	{
//		cin>>temp;//���������Ҫ�жϵ�����
//		if(temp==temp0+1)//������� 
//		count++;//������һ
//		else
//		count=1;//������ֹ���������
//		if(count>max)
//		{
//			max=count;//����������ų��� 
//		 } 
//		 temp0=temp;//�ѵ�ǰ��tempֵ��λ 
//	 } 
//	 cout<<max;//��������
//	 return 0; 
//}
//ָ������ 
//#include<bits/stdc++.h>
//using namespace std;
//int main(void)
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p=arr;
//	for(int i=0;i<10;i++)
//	{
//		cout << *p<<endl;
//		p++;
//	}
// } 


//��ַ���ݣ��ı�ʵ�� 
//int swap(int *p1,int *p2)
//{
//	int temp = *p1;
//	*p1=*p2;
//	*p2=temp;
////	cout<<"*p1="<<*p1<<endl;
////	cout<<"*p2="<<*p2<<endl;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a= 10;
//	int b = 20;
//	swap(a,b);
//	cout<<a<<endl;
//	cout<<b<<endl;
// } 


//ֵ����,���ı�ʵ�� 
//int swap1(int a,int b)
//{
//	int temp = a;
//	a=b;
//	b=temp;
//}
// #include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a=10;
//	int b=20;
//	swap1(a,b);
//	cout<<a<<endl;
//	cout<<b<<endl; 
//}

//ð������

//void bubblespot(int *arr,int len)
//{
//	for(int i =0;i<len-1;i++)
//	{
//		for(int j=0;j<len-i-1;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
// } 
//
// void printspot(int * arr,int len)
// {
// 	for(int i=0;i<len;i++)
// 	{
// 		cout<<arr[i]<<endl;
//	 }
// }
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int arr[10]={4,3,6,9,1,2,10,8,7,5};
//	int len=sizeof(arr)/sizeof(arr[0]);
//	bubblespot(arr,len);
//	printspot(arr,len);
//	return 0;
// } 



//
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
////����ṹ��ʱstruct����ʡ�� 
//struct student{
//	string name;
//	int age;
//	int score;
//	//�����ִ����ṹ����� 
//}s3;
//int main()
//{
//	//�����ṹ���������ʡ��struct 
//	student s1;
//	//��һ�ִ����ṹ����� 
//	s1.name="���κ�";
//	s1.age=18;
//	s1.score=88;
//	cout<<"����:"<<s1.name<<"����:"<<s1.age<<"����:"<<s1.score<<endl; 
//	//�ڶ��ִ����ṹ����� 
//	struct student s2={"���ǽ�",18,60};
//	cout<<"����:"<<s2.name<<"����:"<<s2.age<<"����:"<<s2.score<<endl;
//	
//}


//
////�ṹ������
//
////1������ṹ��
//struct student{
//	string name;
//	int age;
//	int score;
//}; 
////2�������ṹ������
//struct student stuarr[3]=
//{
//	{"����",18,100}��
//	{"����",18,80},
//	{"����",19,80} 
//}
////3�� ���ṹ�������е�Ԫ�ظ�ֵ
//stuarr[2].name="����"��
//stuarr[2].age=82;
//stuarr[2].score=60; 

////4�������ṹ������ 
//for(int i=0;i<3;i++)
//{
//	cout<<"����:"<<stuarr[i].name
//		<<"����:"<<stuarr[i].age
//		<<"����:"<<stuarr[i].score<<endl;
//}






//�ṹ��ָ��

//���ò�����->����ͨ���ṹ��ָ����ʽṹ������ 
