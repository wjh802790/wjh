//�鲢����
//#include<bits/stdc++.h>
//using namespace std;
//void merge(int *a,int low,int mid,int hight){ //�ϲ����� 
//	int *b =new int[ hight - low + 1];	//��new����һ���������� 
//	int i = low , j = mid + 1, k = 0; 	//kΪb������±�
//	while(i <= mid && j <= hight){
//		if(a[i] <= a[j]){
//			b[k++]=a[i++];	//����С��������b�������� 
//		}else{
//			b[k++]=a[j++];
//		}
//	} 
//	while(i <= mid){		//j���н�������ʣ���i���в�����b������ 
//		b[k++]=a[i++];
//	}
//	while(j <= hight){	//i���н�������ʣ���j���в�����b������ 
//		b[k++]=a[j++];
//	}
//	k=0;		//���±�Ϊ0��ʼ����
//	for(int i = low; i <=hight; i++ ){		//��b�����ֵ���ݸ�����a 
//		a[i]=b[k++];
//	} 
//	delete[]b;	//������������󣬽���Ŀռ�����ͷţ����٣� 
//}
//void mergesort(int* a,int low,int hight){	//�鲢���� 
//	if(low < hight){
//		int mid = ( low + hight ) / 2;	
//		mergesort(a, low, mid);	//��a[low,mid]�������� 
//		mergesort(a, mid+1, hight);	//��a[mid+1,hight]�������� 
//		merge(a, low, mid, hight);	//���кϲ����� 
//	}
//}
//int main(){
//	int n, a[100];
//	cin >> n;
//	for(int i = 0 ; i < n ; i++ ){
//		cin>>a[i];
//	}
//	mergesort(a, 0, n-1);
//	cout<<"�鲢������"<<endl;
//	for(int i = 0 ; i < n ; i++){
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <cstdlib>
//#include <cmath>
//using namespace std;
//void merge(int* a, int low, int mid, int hight)  //�ϲ�����
//{
//	int* b = new int[hight - low + 1];  //�� new ����һ����������
//	int i = low, j = mid + 1, k = 0;    // kΪ b �����С��
//	while (i <= mid && j <= hight)  
//	{
//		if (a[i] <= a[j])
//		{
//			b[k++] = a[i++];  //����С�������� b ��������
//		}
//		else
//		{
//			b[k++] = a[j++];
//		}
//	}
//	while (i <= mid)  // j ���н�������ʣ��� i ���в����� b ������ 
//	{
//		b[k++] = a[i++];
//	}
//	while (j <= hight)// i ���н�������ʣ��� j ���в����� b ������ 
//	{
//		b[k++] = a[j++];
//	}
//	k = 0;  //��С��Ϊ 0 ��ʼ����
//	for (int i = low; i <= hight; i++)  //�� b �����ֵ���ݸ����� a
//	{
//		a[i] = b[k++];
//	}
//	delete[]b;     // ������������󣬽���Ŀռ�����ͷţ����٣�
//}
//void mergesort(int* a, int low, int hight) //�鲢����
//{
//	if (low < hight)
//	{
//		int mid = (low + hight) / 2;
//		mergesort(a, low, mid);          //�� a[low,mid]��������
//		mergesort(a, mid + 1, hight);    //�� a[mid+1,hight]��������
//		merge(a, low, mid, hight);       //���кϲ�����
//	}
//}
//int main()
//{
//	int n, a[100];
//	cout << "�����������е�Ԫ�ظ��� n Ϊ��" << endl;
//	cin >> n;
//	cout << "���������������е�Ԫ�أ�" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	mergesort(a, 0, n-1);
//	cout << "�鲢������" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//typedef struct LNode{
//	int data;
//	LNode *next;
//}LNode,*LinkList;
////�������ݲ����°��� 
//
//
//int main(){
//	LinkList LookElem(LinkList L,int num);
//	void getNList(LinkList L);
//	//��ʼ������
//	LinkList L;
//	LNode *p,*s;
//	s = new LNode;
//	s->next = NULL;
//	L = s;
//	//������
//	p = L;
//	for(int i=1;i<=10;i++){
//		s = new LNode;
//		s->data = i;
//		s->next = NULL;
//		p->next = s;
//		p = p->next;
//	} 
//	//�������
//	int count = 0;
//	int num = 0;
//	scanf("%d",&count);
//	while(count>0){
//		scanf("%d",&num);
//		L = LookElem(L,num);
//		getNList(L);
//		count--;
//	} 
//	return 0;
//}
//LinkList LookElem(LinkList L,int num){
//	LNode *p = L;
//	LNode *q;
//	while(p->next){
//		if(p->next->data==num){
//			q = p->next;
//			p->next = q->next;
//			delete(q);
//			LNode *s = new LNode;
//			s->data=num;
//			s->next=L->next;
//			L->next=s;
//			return L;
//		}
//		p = p->next;
//	}
//	return L;
//}
//void getNList(LinkList L){
//	LNode *p = L;
//	while(p->next){
//		p=p->next;
//		printf("%4d",p->data);
//	}
//	printf("\n");
//}
//#include <iostream>
//using namespace std;
//
//typedef struct LNode{
//    int data;
//    LNode *next;
//}LNode,*LinkList;
//int main()
//{
//�����ʼ��->��ֵ->����->���->���� 
//  LinkList LookElem(LinkList L,int num);
//  void getNList(LinkList L);
//  //��ʼ��һ������
//  LinkList L;
//  LNode *p,*s;
//  s = new LNode;
//  s->next = NULL;
//  L = s;
//  //������
//  p = L;
//  for(int i=1;i<=10;i++){
//    s = new LNode;
//    s->data = i;
//    s->next = NULL;
//    p->next = s;
//    p = p->next;
//  }
//  //�������
//  int count=0;
//  int num = 0;
//  scanf("%d",&count);
//  while(count>0){
//    scanf("%d",&num);
//    L = LookElem(L,num);
//    getNList(L);
//    count--;
//  }
//  
//  return 0;
//}
////�������ݲ����°���
//LinkList LookElem(LinkList L,int num){
//  LNode *p = L;
//  LNode *q;
//  while(p->next){
//    if(p->next->data == num){
//      q = p->next;
//      p->next = q->next;
//      delete(q);
//      LNode *s = new LNode;
//      s->data = num;
//      s->next = L->next;
//      L->next = s;
//      return L;
//    }
//    p = p->next;
//  }
//    return L;   
//}
////�������
//void getNList(LinkList L){
//  LNode *p = L;
//  while(p->next){
//    p=p->next;
//    printf("%4d",p->data); 
//  }
//  printf("\n");
//}

//#include<bits/stdc++.h>
//using namespace std;
//typedef struct Node{
//	int data;
//	struct Node* next;
//}Node,*LinkList;
////������������
//LinkList secList(LinkList L,int num){
//	Node* p = L;
//	Node* q;
//	while(p->next){
//		if(p->next->data==num){
//			//ɾ����� q 
//			q = p->next;
//			p->next = q->next;
//			delete q; 
//			//��ͷ������
//			Node* s = new Node;
//			s->data = num;
//			s->next = L->next;
//			L->next = s;
//			return L; 
//		}
//		p = p->next;
//	}
//	return L;
//} 
////�������
//void printList(LinkList L){
//	Node* p = L;
//	while(p->next){
//		p = p->next;
//		printf("%4d",p->data);
//	}
//	printf("\n");
//} 
//int main(){
//	//��ʼ������
//	LinkList L;
//	Node* s;
//	s = new Node;
//	s -> next = NULL;
//	L = s; 
//	//������ֵ
//	Node* p = L;
//	for(int i=1;i<=10;i++){
//		s = new Node;
//		s->data = i;
//		s->next = NULL;
//		p->next = s; 
//		p = p->next;
//	}
//	
//	//С����Ҫ����Ĵ���
//	int n = 0;
//	int m = 0;
//	scanf("%d",&n);
//	while(n>0){
//		scanf("%d",&m);
//		L = secList(L,m);
//		printList(L);
//		n--;
//	} 
//	//��������
//	while(L != NULL){
//		p = L;
//		L = L->next;
//		delete p;
//	} 
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct Node{
//	int data;
//	struct Node* next;
//}Node, *LinkList;
////������������ 
//LinkList secList(LinkList L,int num){
//	Node* p = L;
//	Node* q;
//	while(p->next){
//		if(p->next->data==num){
//		//ɾ����� q 
//		q = p->next;
//		p->next=q->next;
//		delete q;
//		//��ͷ������ 
//		Node* s =new Node;
//		s->data = num;
//		s->next = L->next;
//		L->next=s;
//		return L;	
//		}
//		p=p->next;
//	}
//	return L;
//}
////������� 
//void printList(LinkList L){
//	Node* p = L;
//	while(p->next){
//		p = p->next;
//		printf("%4d",p->data);
//	}
//	printf("\n");
//} 
//
//int main(){
//	//��ʼ������ 
//	LinkList L;
//	Node* s;
//	s = new Node;
//	s->next=NULL;
//	L = s;
//	//������ֵ 
//	Node* p = L;
//	for(int i=1;i<=10;i++){
//		s = new Node;
//		s->data=i;
//		s->next=NULL;
//		p->next=s;
//		p=p->next;
//	}
//	//������� 
//	int n=0,m=0;
//	cin>>n;
//	while(n>0){
//		cin>>m;
//		L =secList(L,m);
//		printList(L);
//		n--;
//	}
//	//����������� 
//	while(L!=NULL){
//		p=L;
//		L=L->next;
//		delete p;
//	}
//	return 0;
//}
//���ɿ���
//#include <iostream>
//using namespace std;
//int L[100005];
//int W[100005];
//int main()
//{
//    int N,K;
//    cin>>N>>K;
//    for(int i = 1; i <= N; i++)
//        cin>>L[i]>>W[i];
//    int i = 10000;
//    while(true)
//    {
//        int sum = 0, num1, num2;
//        for(int j = 1; j <= N; j++)
//        {
//            num1 = L[j] / i;
//            num2 = W[j] / i;
//            sum += num1 * num2;
//        }
//        if(sum >= K)
//            break;
//        i--;
//    }
//    cout<<i;
//    return 0;
//} 
//���������� 
//#include<bits/stdc++.h>
//using namespace std;
////������ 
//typedef struct{
//	void* data;
//	struct LINKNODE* next; 
//}LinkNode;
////����ṹ�� 
//typedef struct{
//	LinkNode* head;
//	int size;
//}LinkList;
////��ӡ����ָ��
//typedef void(*PRINTLINKNODE)(void*);
////��ʼ������
//LinkList* Init_LinkList(){
//	LinkList* list=(LinkList*)malloc(sizeof(LinkList));
//	list->size=0;
//	
//	//ͷ��� �ǲ�����������Ϣ 
//	list->head=(LinkNode*)malloc(sizeof(LinkNode));
//	list->head->data=NULL; 
//	list->head->next=NULL; 
//}
////ָ��λ�ò��� 
//void Insert_LinkList(LinkList* list,int pos,void* data){
//	if(list==NULL){
//		return;
//	}
//	if(data==NULL){
//		return;
//	}
//	//�ѺõĴ������posԽ�� 
//	if(pos<0||pos>list->size){
//		pos=list->size;
//	}
//	
//	//�����µĽ��
//	LinkNode* newnode=(LinkNode*)malloc(sizeof(LinkNode));
//	newnode->data=data;
//	newnode->next=NULL;
//	
//	//�ҽڵ�
//	//����ָ�����
//	LinkNode* pC =	list->head;
//	for(int i=0;i<pos;i++){
//		pC = pC->next;
//	}
//	
//	//�½�������� 
//	newnode->next =pC->next;
//	pC->next= newnode; 
//	list->size++;;
//	
//}
////ɾ��ָ��λ��
//void RemoveByPos_LinkList(LinkList* list,int pos){
//	if(list==NULL){
//		return;
//	}
//	if(pos<0 || pos>=list->size){
//		return;
//	}
//	//����ɾ������ǰһ�����
//	for(int i=0;i<pos;i++){
//		pC=pC->next;
//	} 
//	//����ɾ���Ľ�� 
//	LinkNode* pD = pC->next;
//	pC->next=pD->next;
//	//�ͷ�ɾ�������ڴ�
//	free(pD);
//	list->size--;
//	
//	
//	
//}
////�������ĳ���
//int Size_LinkList(LinkList* list){
//	return list->size;
//}
////����
//int Find_LinkList(LinkList* list,void* data){
//	if(list==NULL){
//		return -1;
//	}
//	if(data==NULL){
//		return -1;
//	}
//	//��������
//	LinkNode* pC = list->head->next;
//	int i=0;
//	while(pC!=NULL){
//		if(pC->data==data){
//			break;
//		}
//		i++;
//		pC=pC->next;
//	}
//	return i;
//}  
////���ص�һ�����
//void* Front_LinkList(LinkList* list){
//	return list->head->next;
//} 
////��ӡ������ 
//void Print_LinkList(LinkList* list,PRINTLINKNODE print){
//	if(list==NULL){
//		return;
//	}
//	//����ָ�����
//	LinkNode* pC = list->head->next;
//	while(pC!=NULL){
//		printf(pC->data);
//		pC=pC->next;
//	} 
//}
////�ͷ������ڴ�
//void FreeSpace_LinkList(LinkList* list){
//	if(list==NULL){
//		return;
//	}
//	//����ָ�����
//	LinkNode* pC = list->head;
//	while(pC!=NULL){
//		//�Ȼ�����һ����㣬���ֱ��ɾ�������Ҳ�����һ������λ��
//		LinkNode* pNext= pC>next;
//		free(pC);
//		pC=pNext;
//	} 
//	//������ͷ������ڴ�
//	list->size=0;
//	free(list); 
//}
//#include<bits/stdc++.h>
//using namespace std;
////������ 
//typedef struct{
//	void* data;
//	struct LINKNODE* next; 
//}LinkNode;
////����ṹ�� 
//typedef struct{
//	LinkNode* head;
//	int size;
//}LinkList;
//LinkList* Init_LinkList();
//void Insert_LinkList(LinkList* list,int pos,void* data);
//void RemoveByPos_LinkList(LinkList* list,int pos);
//int Size_LinkList(LinkList* list);
//int Find_LinkList(LinkList* list,void* data);
//void* Front_LinkList(LinkList* list);
//void Print_LinkList(LinkList* list,PRINTLINKNODE print);
//void FreeSpace_LinkList(LinkList* list);
//typedef struct Person{
//	char name[64];
//	int age;
//	int score;
//}person;
//void Myprint(void* data){
//	person* p =(person*)data;
//	printf("name:%s age:%d score:%d\n",p->name,p->age,p->score);
//}
//int main(){
	//�������� 
//	LinkList* list = Init_LinkList();
//	person p1 = {"wjh",18,100};
//	person p2 = {"zyj",18,100};
//	person p3 = {"hsk",18,100};
//	person p4 = {"zpy",18,100};
//	person p5 = {"ysz",18,100};
//	
//	//���ݲ������� 
//	Insert_LinkList(list,0,&p1);
//	Insert_LinkList(list,0,&p2);
//	Insert_LinkList(list,0,&p3);
//	Insert_LinkList(list,0,&p4);
//	Insert_LinkList(list,0,&p5);
//	
//	//��ӡ 
//	Print_LinkList(list,Myprint);
//	
//	//��������
//	 FreeSpace_LinkList(list);
//	printf("\n");
//	return 0;
//}


