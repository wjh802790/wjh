#include<bits/stdc++.h>
using namespace std;
//������ָ��
//c/c++�ڴ��Ϊ�����֣�ջ�� ���� ��̬�� 

//��̬�ڴ����:�ڶ�������
//��������
//�����ͷ�
// malloc callo realloc free
//void check(int* p,int sz){
//	for(int i=0;i<sz;i++){
//		if(*(p+i)<60){
//			printf("%d ",*(p+i));
//		}
//	}
//}
//int main(){
//	int* p=(int*)malloc(5*sizeof(int));
//	if(p==NULL){
//		return -1;
//	}
//	for(int i=0;i<5;i++){
//		scanf("%d",p+i);
//	}
//	check(p,5);
//	//�ҳ�60�����µ�Ԫ��
//	free(p);
//	p=NULL; 
//	return 0;
//}

//int main(){
//	int *p=(int*)calloc(10,sizeof(int));
//	//calloc���ٿռ�ȫ����ʼ��Ϊ0 
//realloc�����µĿռ� 
//	if(p==NULL){
//		printf("����ʧ��\n");
//		return -1;
//	}
//	//��ӡ���ٺõĿռ�
//	
//	for(int i=0;i<10;i++){
//		printf("%d\n",*(p+i));
//	}
//	int* ptr=realloc(p,15*(sizeof(int)));
//	//realloc�����µĿռ� 
//	//realloc���ܻῪ��ʧ�ܣ�����ʧ���������һ����ָ����� 
//	free(p);
//	p=NULL; 
//	return 0;
//}
//int main() {
//	//malloc �� free ����һ��ʹ�ã�����ռ�������ͷŵ���������ڴ�й¶ 
//	
//	
//	//ԭ�������룺
//	int arr[10]= {0}; 	//ջ��
//	int* p=(int*)malloc(40);			//���������40���ֽڵĿռ�
//		malloc����ռ䵫�ǲ���ʼ�� 
//	//���ص�����40���ֽڵĿռ����ʼ��ַ(��Ԫ�ص�ַ)
//	//�洢�ռ���ָ��
//	if(p==NULL) {
//		printf("��̬�ڴ�����ʧ��\n");
//		return -1;
//	}
////	printf("%p",p);
//	//ʹ�ö�̬����Ŀռ�
//	for(int i=0;i<10;i++){
//		*(p+i)=i;
//	} 
//	for(int i=0;i<10;i++){
//		printf("%d\n",*(p+i));
//	}
//
//
//	//�ͷſռ�
//	free(p);
//	p=NULL;
//	return 0;
//}


//����ָ��ֵ�ĺ���
////����ָ�룺
//	//��������*ָ����������������������У�
//����ָ�������������ζ���ָ���������ָ���κκ�������ֻ��ָ���ڶ�����ָ���ĺ���
//��������޷���ֵ����û�в������ǾͶ��岻��

//int max(int x,int y){
//	return x>y?x:y;
//}
//int min(int x,int y){
//	return x<y?x:y;
//}
//int main(){
//	//�ú��������ú�����ֻ�ܵ�����ָ����һ����������ͨ��ָ��������ú����Ƚ����
//	//���Ը��ݲ�ͬ����Ⱥ���ò�ͬ�ĺ���
//	int x,y,n;
//	printf("��������������");
//	cin>>x>>y;
//	printf("1:�ҳ��ϴ�ֵ || 2:�ҳ���Сֵ\n");
//	printf("��ѡ��");
//	scanf("%d\n",&n);
//	int (*p)(int,int)=NULL;
//	if(n==1){
//		p=max;
//	}else if(n==2){
//		p=min;
//	}
//	int ret=(*p)(x,y);
//	printf("%d\n",ret);
//
//	return 0;
//}
//int add(int x,int y){
//	return x+y;
//}
//int main(){
//	int(*p)(int,int)=add;
//	int sum=(*p)(3,4);
//	//�ú���ָ��������ú���ʱ��ֻ��Ҫ��ָ����溯��������
//	int sum1=add(5,6);
//	printf("%d\n",sum);
//	printf("%d\n",sum1);
//	int sum2=(*p++)(3,4);
//	sum2=(*p+5)(3,4);
//	//��ָ������ָ��������ܽ�������������p++��++p��p+n���������������
//
//	printf("%d\n",sum2);
//
//
//	return 0;
//}

//int main(){
//
//	printf("%p\n",add);
//	//add�Ǻ����ĵ�ַ,pf�Ǵ�ź����ĵ�ַ�ģ�����pf��ָ�����-����ָ��
//	int(*p)(int,int)=add;
//	//���庯��ָ��
//
//	int(*p)(int,int);
//	//��ʱָ��pû�г�ʼ������û��ָ����������Ͳ��ܵ��ú� ��
//	int sum=(*p)(3,4);
//	//����ָ�����
//	printf("%d",sum);
//	return 0;
//}


//void print(char* pa,char* pb){
//	while(*pa!='\0'){
//		*pb++=*pa++;
//	}
//	*pb=*pa;
//	//����'\0'
//}
//int main(){
//	void (*print1)(char*,char*)=print;
//	char* a="abcd";
//	char* b="efgh";
//	(*print1)(a,b);
//	printf("%s\n",a);
//	printf("%s\n",b);
//	return 0;
//}
//int add(int x,int y){
//	return x+y;
//}
//int main(){
//	//����ָ��padd����ָ��add�ĺ���
//	//����ָ����һ��ָ��������ź����ĵ�ַ
//	//���������Ǻ����ĵ�ַ
//	int (*padd)(int,int)=add;
////����ָ�룺
//	//��������*ָ����������������������У�
//	int ret=(*padd)(2,3);
//	printf("%d\n",ret);
//	printf("%p",*padd);
////
//	return 0;
//}
//int main(){
//	int ret=add(1,3);
//	printf("%d\n",ret);
//	printf("%p\n",add);
//	return 0;
//}
//ָ���ַ���
//int main(){
//	//��������Ԫ��
//	//�������±귨�����������±꣩
//	//Ҳ�����õ�ַ����*��a+3������������Ԫ��a[3]
//	//�ַ�ָ�����ͬ��
//	//�ַ�ָ��������ַ�������������
//	//ָ�����ָ����ַ���Ԫ�ز����޸ģ�ֻ�ܶ�ȡ����������޸Ķ�ȡ
//	//ָ��ֻ�ǿ���һ���洢�ռ��ŵ�ַ����1���ַ��ĵ�ַ��
//	//�����ǿ��ٶ���洢��Ԫ�洢��Ԫ�ص�ֵ
//	char a[]="hello wjh";
//	char *p="abcdef";
//	printf("%c\n",a[3]);
//	printf("%c\n",*(a+3));
//	printf("%c\n",*(p+3));
//	printf("%c\n",p[3]);
//	return 0;
//}
//int main(){
//	char *p="abcdef";			//ָ���ŵ������ǳ�������ֻ����������
////	*(p+2)='w';
//	//ָ��p��ŵ��ַ����ǳ����ַ���,ֻ�ܶ�ȡ�������޸�
//	printf("%s",p);
//	//1���ַ�ָ������д�ŵ��ǵ�ַ���ַ���1���ַ��ĵ�ַ��
//	char a[]="abcdef";			//����
//	//2���������ǵ�ַ���ǳ��������ܱ���ֵ
//	//ָ���Ǳ����� ָ���ŵ�Ԫ�صĵ�ַ������ָ���Ԫ�ؿ��Ը���
//	printf("%c\n",*(p+3));		//*(p+i)==p[i]
//
//
//	//3������ʱΪ�ַ�����������ɴ洢��Ԫ���洢��Ԫ�ص�ֵ
//	//		�������ַ�ָ�������ֻ����һ���洢��Ԫ
//	printf("%c\n",p[3]);
//	printf("%c\n",*p);
//	//4��ָ�������ֵ���Ըı䣬����������һ���̶���ֵ��������Ԫ�صĵ�ַ�����ܸı�
//	p=p+3;
//	printf("%c\n",*p);
//	//5���ַ������еĸ�λԪ�ص�ֵ�ǿ��Ըı�ģ����ַ�ָ�����ָ����ַ�������
//	//�������ǲ����Ա�ȡ���ģ����ܶ������ٸ�ֵ��
//	a[2]='w';		//�Ϸ���wȡ��a����Ԫ��a[2]��ԭֵc
////	*(p+2)='w';		//�Ƿ�
//	printf("%c\n",a[2]);
//	printf("%c\n",*(p+2));
//	return 0;
//
//}
//void print1(char* pa,char* pb){
//	while(*pb++=*pa++){
////������*pa���θ�ֵ��*pb������Ϊ�Ǻ���++����*paָ��'\0'��ʱ��
//		//'\0'�� ASCIIֵΪ0��0����*pb��ʱ������while��ֵΪ0��Ϊ�٣�
//		//*pb����'\0'¼��
//		;
//	}
//}
//int main(){
//	char a[]="hello world";
//	char b[20]={0};
//	print1(a,b);
////	strcpy(b,a);
//	//ͷ�ļ�string.h
//	printf("%s\n",b);
//	return 0;
//}
//void print(char* pa,char* pb){
//	while(*pa!='\0'){
//		*pb++=*pa++;
//	}
//	*pb=*pa;
//	//����'\0'
//}
//int main(){
//	char a[]="hello world";
//	char b[20]={0};
//	print(a,b);
//	printf("%s\n",b);
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	char* pa=a;
//	char* pb=b;
//	for(;*pa!='\0';pa++,pb++){
//		*pb=*pa;
//	}
//	*pb='\0';
//	printf("%s\n",b);
//	printf("%s\n",a);
//	printf("%s\n",*pb);
//	printf("%s\n",*pa);
//	//*pa *pb ���Ϊnull��ԭ���ǣ����*pa *pb��ŵ���'\0'
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	char* pa=a;
//	char* pb=b;
//	while(*(pa+i)!='\0'){
//	//whileѭ��ֹͣ������'\0'֮ǰ���ַ�ȫ������b
//		*(pb+i)=*(pa+i);
//		i++;
//	}
//	*(pb+i)=*(pa+i);
//	//'\0'¼��
//	printf("%s\n",b);
//	printf("%s\n",a);
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	while(a[i]!='\0'){
//		b[i]=a[i];
//		i++;
//	}
//	b[i]=a[i];
//	printf("%s\n",b);
//	printf("%s\n",a);
//
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	for(i=0;a[i]!='\0';i++){
//		b[i]=a[i];
//	}
//	b[i]='\0';
//	printf("%s\n",b);
//	printf("%s\n",a);
//
//	return 0;
//}
//int main(){
//	char a[]="i am a student";
//	char b[20];
//	int i;
//	for(i=0;*(a+i)!='\0';i++){
//		*(b+i)=*(a+i);
//	}
//	*(b+i)='\0';
//	printf("%s",a);
//
//	return 0;
//}

//ָ����������
//void print1(int* p,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d",*(p+i));
//	}
//}
//void print2(int *p,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d",*p+i);
//	}
//}
//void print3(int arr[],int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d",arr[i]);
//	}
//}

//void print4(int* q,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",*q,sz);
//	*q=10;
//	printf("%d %d\n",*q,sz);
//ָ���ŵ���������Ԫ�صĵ�ַ���ı�ָ�������ֵ��
//Ҳ�����൱���ڸı�������Ԫ�ص�ַ��ŵ�ֵ
//}
//void print5(int a[],int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",a,sz);
//	printf("%d %d\n",a,sz);
//	a[0]=10;
//	sz=11;
//
//	printf("%d %d\n",a,sz);
//}
//void print6(int a[],int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",a,sz);
//	sz = 11;
//	a[0]=10;
//}
//void print7(int q,int sz){
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",*p,sz);
//	printf("%p %p\n",q,sz);
//	q=10;
//	sz=11;
//}
//	�ܽ�
//	����������ָ�����������Ԫ�صĵ�ַ���ı��βλ�ı�ʵ�ε�ֵ
//	������������ʵ�ε�ֵ���ı��βεĲ���ı�ʵ��
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print1(arr,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}
//
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print2(arr,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print3(p,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}


//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print4(p,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print5(arr,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}
//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print6(p,sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int *p=arr;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("%p %p\n",*p,sz);
//	printf("%d %d\n",arr,sz);
//	print7(arr[3],sz);
//	printf("%d %d\n",arr,sz);
//	return 0;
//}

//int main(){

//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int* p=arr;
//	for(int i=0;i<sz;i++){
//		printf("%d",*(p+i));
//	}
//		return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
////		sz = 10,����������С
//	int* p =arr;
//	for(int i=0;i<sz;i++){
//	printf("%d\n",*p);
//	p++;
//	}
//	return 0;
//}


//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int right=sizeof(arr)/sizeof(arr[0])-1;
////	right=9,��ʾ�����������һ��Ԫ�ص��±�
//	printf("%d\n",arr[right]);
//	int left=0;
////	������Ԫ�ص��±�
//	printf("%d\n",arr[left]);
//	int* p =arr;
//	for(int i=left;i<=right;i++){
//	printf("%d\n",*p);
//	p++;
//	}
//	return 0;
//}

//int main(){
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//	ָ���ŵ��ǵ�ַ
//	int * p=&arr[0];
//	//ָ���ŵ���������Ԫ�ص�ַ
//	for(int i=0;i<sz;i++){
//		printf("%d\n",*p);
//		p++;
//	}
//	return 0;
//}
//


//

//int main(){
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int sz = sizeof(a)/sizeof(a[0][0]);	 sz=12
//
//	/*
//	1  2  3  4	a[0]
//	5  6  7  8	a[1]
//	9 10 11 12	a[2]
//	   */
////	��ά������Ԫ�صĵ�ַָ���������a[0][4],ָ���������ĵ�һ��
//	printf("%d\n",sz);
////	for(int i=0;i<sz;i++){
////		printf("%d\n",a[i][1]);
////	}
//	return 0;
//}
//int main(){
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	int sz = sizeof(a)/sizeof(a[0]);
////	sz = 3
//	printf("%d\n",sz);
//	/*
//	1  2  3  4	a[0]
//	5  6  7  8	a[1]
//	9 10 11 12	a[2]
//	   */
////	��ά������Ԫ�صĵ�ַָ���������a[0][4],ָ���������ĵ�һ��
//
//	for(int i=0;i<sz;i++){
//		printf("%d\n",a[i][0]);
//	}
//	return 0;
//}
//int a[10010][10010];
//void print(int a[x][y],int x,int y){
//	for(int i=0;i<x;i++){
//		for(int j=0;j<y;j++){
//			printf("%d",a[i][j]);
////			printf("%d\n",a[i-1][j]);
////			printf("%d\n",a[i][j-1]);
////			printf("%d",a[i+1][j]);
////			printf("%d\n",a[i][j+1]);
//		}
//	}
//}
//int main(){
//	int i,j;
//	cin>>i>>j;
//	for(int x=0;x<i;x++){
//		for(int y=0;y<j;y++){
//			cin>>a[x][y];
//		}
//	}
//	print(&a,&i,&j);
//
//	return 0;
//}

//��ά���� ��
//int a[10010][10010];
//void print(int **a,int i,int j){
//	for(int r=0;r<i;r++){
//		for(int l=0;l<j;l++){
//			printf("%d",*(*(a+i)+j));
//		}
//	}
//}
//int main(){
//	int x,y;
//	cin>>x>>y;
//	for(int i=0;i<x;i++){
//		for(int j=0;j<y;j++){
//			cin>>a[i][j];
//		}
//	}
//	print(a[][],x,y);
//	return 0;
//}

//int main(){
//	char a[]="hello world";
//	int sz=sizeof(a)/sizeof(a[0]);
//	//ͨ���±��������Ԫ��
//	for(int i=0;i<sz;i++){
//		printf("%c",a[i]);
//	}
//	printf("%s\n",a);
//	return 0;
//}
//int main(){
//	string s = 'hello world';
//	int *p=s;
//	printf("%c",s[10]);
//
//	return 0;
//}
