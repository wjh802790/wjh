//�ܽ᣺
//���鴫��ʱ�����ַ������ַ������ζ�����ʹ�������ָ����գ������������֪ʶ����
//�ַ���������Բ��������鳤�ȣ��������͵�������Ҫ�������鳤��
//sizeof ���ڱ����ʱ����ֵ�ģ����Բ��ܹ���̬��ȷ��һ��������ֵ��
//1��������Ϊ�������뺯������ָ�����ʽ���׵�ַ��
//������ϵͳ�ǲ�֪�����������������ֹ�ģ���˲���õ�����ĳ���
//2���������鴫�ݵ�����Ԫ�صĵ�ַ������sizeof(arr) / sizeof(arr[0])��ֵΪ1
//3���ַ�������ÿ��Ԫ�صĴ�С��Ϊ1�������еĵ�ַ�Ĵ�СΪ4��32λƽ̨�£���
//����sizeof(arr) / sizeof(arr[0])��ֵΪ4
//4�����ַ������Ľ�����־��'\0����strlen�������ڼ����ַ�������ʱ��
//����'\0'ʱֹͣ�����ַ����ĳ��ȣ������ַ��������ڴ��κ�ʹ��strlen�������㳤��


//�������鴫��
//1��ָ�����
//void text(int* arr)
//{
//    printf("%d\n", *(arr + 1));
//	printf("%d\n", arr[2]);
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
// 
//	text(arr);
// 
//	return 0;
//}
//2��������� 
//void text(int arr[])
//{
//	printf("%d\n", *(arr + 1));
//	printf("%d\n", arr[2]);
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
// 
//	text(arr);
// 
//	return 0;
//}










//�ַ����鴫��
//1��ָ����� 
//#include<bits/stdc++.h>
//using namespace std; 
//void text(char* arr)
//{
//	printf("%c\n", *(arr + 1));
//	printf("%c", arr[2]);
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c'};
// 
//	text(arr);
// 
//	return 0;
//}



//2���������
// void text(char arr[])
//{
//	printf("%c\n", *(arr + 1));
//	printf("%c", arr[2]);
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c'};
// 
//	text(arr);
// 
//	return 0;
//}




//�������鳤��

//�ַ�������
//������� 
//void text(char arr[])
//{
//	printf("%d", strlen(arr));//strlen�����������ַ�������
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
// 
//	text(arr);
// 
//	return 0;
//} 




 
//ָ����� 
//void text(char* arr)
//{
//	printf("%d", strlen(arr));//strlen�����������ַ�������
//}
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
// 
//	text(arr);
// 
//	return 0;
//}




//2���ַ�����
//�ɴ˿�֪���ַ����鴫��ʱ��ֻ���ڶ������麯���ڻ�����鳤��
//һ���ַ�Ĵ�СΪ4���ַ��ͱ����Ĵ�СΪ1����������������ô�СΪ4

//������� 
//void text(char arr[])
//{
//	printf("��ֵ�����������鳤�ȣ�%d\n", sizeof(arr)/sizeof(arr[0]));
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c' ,'d','e','f'};
// 
//	printf("�������������鳤�ȣ�%d\n", sizeof(arr) / sizeof(arr[0]));
// 
//	text(arr);
// 
//	return 0;
//}


//ָ�����
//void text(char* arr)
//{
//	printf("��ֵ�����������鳤�ȣ�%d\n", sizeof(arr)/sizeof(arr[0]));
//}
// 
//int main()
//{
//	char arr[] = { 'a','b','c' ,'d','e','f'};
// 
//	printf("�������������鳤�ȣ�%d\n", sizeof(arr) / sizeof(arr[0]));
// 
//	text(arr);
// 
//	return 0;
//} 



//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int a = 10;
//	int* p =&a;
//	cout<<*p<<endl;
//	cout<<"p�ĵ�ַ��"<<p<<endl;
//	cout<<"a�ĵ�ַ��"<<&a<<endl;
//	cout<<a<<endl;
//	//����ָ�� 
//	int** pa=&p;
//	
//	cout<<pa<<endl;
//	//** �����ò�������ʹ�ý����ò���pa����ʾp�ĵ�ַ 
//	cout<<** pa<<endl;
//	// ����ָ�� 
//	int*** ppa=&pa;
//	//ָ������� 
//	cout<<*** ppa<<endl;
//	
//	
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//������ 
//int sum(int arr[0],int a){
//	int count = 0;
//	for(int i=0;i<a;i++){
//		count+=arr[i];
//	}
//	return count;
//}
//int main(){
//	int a =0;
//	cin>>a;
//	int arr[100]={0};
//	for(int i=0;i<a;i++){
//		cin>>arr[i];
//	}
//	cout<<sum(arr,a);
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//ָ�봫�� 
//void swap(int* x,int* y){
//	int temp = *x;
//	*x=*y;
//	*y = temp;
//}
//int sum(int* arr,int* a){
//	int count=0,n=*a,c[0]=*arr;
//	for(int i=0;i<n;i++){
//		count+=c[i];
//	}
//	return count;

//}
//int sum(int* arr){
//	return sizeof(arr);
//}
//int main(){
	//���������������ʽ
	/*
	void swap(const int*);
	void swap(const int[]);
	void swap(const int[10]);
	*/ 
//	int a = 0,arr[100],count=0;
//	cin>>a>>b;
//	cout<<a<<" "<<b<<endl;
//	swap(&a,&b);
//	cout<<a<<" "<<b<<endl;
//	cin>>a;
//	for(int i=0;i<a;i++){
//		cin>>arr[i];
//	}
//	cout<<sum(arr);
//	return 0;
//} 


// �ܽ�
/* 
	���ݲ��������֣���һ�֣�swap(a,b)
							int swap(int x,int y)
					�ڶ��֣�swap(&a,&b)
							int swap(int* x,int* y) 
								int temp = *x;
								*x = *y;
								*y = temp;
	�������������֣���һ�֣�sum(arr,n)
								������,�����С
					�ڶ���: sum(&arr,&n) 

*/
//���ݱ�������Ϊ��ֵ 
//#include<bits/stdc++.h>
//using namespace std;
//void sum(int n,int *arr){
//	int count=0;
//	for(int i=0;i<n;i++){
//		count+=arr[i];
//	}
//	cout<<count;
//}
//int main()
//{
//	int n = 0,arr[10];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
////	sum(n,arr);
////	sum(arr,n); 
//	//��������������˼�ǣ��ǳ������õĳ�ʼֵ����Ϊ��ֵ
//	return 0;
//}
//#include<bits/stdc++.h>
//string swap(string* c){
//	cout<<*(c+1);
//}
//using namespace std;
//int main(){
//	string c;
//	cin>>c;
//	swap(c);
//	return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//void increase(int* n){
//	*n++;
//	printf("%d",*n);
//}
//int main(){
//	int n = 0;
//	cin >> n;
//	increase(n);
//	cout<<n;
//	return 0;
//} 

//#include<bits/stdc++.h>
//using namespace std;
//void swap(int* arr,int n){
//	
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]<arr[j]){
//				int temp = arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//}
//int main(){
//	int n=0;
//	cin>>n;
//	int arr[100];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	swap(arr,n);
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	return 0;
//} 


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int arr[100];
//	int arr2[100];
//	string s;
//	while(scanf("%s",&s)&&s!="EOF"){
//		
//	}
//	return 0;
//} 



























