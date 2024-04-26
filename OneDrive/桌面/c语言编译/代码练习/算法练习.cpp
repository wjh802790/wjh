//归并排序
//#include<bits/stdc++.h>
//using namespace std;
//void merge(int *a,int low,int mid,int hight){ //合并函数 
//	int *b =new int[ hight - low + 1];	//用new申请一个辅助函数 
//	int i = low , j = mid + 1, k = 0; 	//k为b数组的下标
//	while(i <= mid && j <= hight){
//		if(a[i] <= a[j]){
//			b[k++]=a[i++];	//按从小到大存放在b数组里面 
//		}else{
//			b[k++]=a[j++];
//		}
//	} 
//	while(i <= mid){		//j序列结束，将剩余的i序列补充在b数组中 
//		b[k++]=a[i++];
//	}
//	while(j <= hight){	//i序列结束，将剩余的j序列补充在b数组中 
//		b[k++]=a[j++];
//	}
//	k=0;		//从下标为0开始传送
//	for(int i = low; i <=hight; i++ ){		//将b数组的值传递给数组a 
//		a[i]=b[k++];
//	} 
//	delete[]b;	//辅助数组用完后，将其的空间进行释放（销毁） 
//}
//void mergesort(int* a,int low,int hight){	//归并排序 
//	if(low < hight){
//		int mid = ( low + hight ) / 2;	
//		mergesort(a, low, mid);	//对a[low,mid]进行排序 
//		mergesort(a, mid+1, hight);	//对a[mid+1,hight]进行排序 
//		merge(a, low, mid, hight);	//进行合并操作 
//	}
//}
//int main(){
//	int n, a[100];
//	cin >> n;
//	for(int i = 0 ; i < n ; i++ ){
//		cin>>a[i];
//	}
//	mergesort(a, 0, n-1);
//	cout<<"归并排序结果"<<endl;
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
//void merge(int* a, int low, int mid, int hight)  //合并函数
//{
//	int* b = new int[hight - low + 1];  //用 new 申请一个辅助函数
//	int i = low, j = mid + 1, k = 0;    // k为 b 数组的小标
//	while (i <= mid && j <= hight)  
//	{
//		if (a[i] <= a[j])
//		{
//			b[k++] = a[i++];  //按从小到大存放在 b 数组里面
//		}
//		else
//		{
//			b[k++] = a[j++];
//		}
//	}
//	while (i <= mid)  // j 序列结束，将剩余的 i 序列补充在 b 数组中 
//	{
//		b[k++] = a[i++];
//	}
//	while (j <= hight)// i 序列结束，将剩余的 j 序列补充在 b 数组中 
//	{
//		b[k++] = a[j++];
//	}
//	k = 0;  //从小标为 0 开始传送
//	for (int i = low; i <= hight; i++)  //将 b 数组的值传递给数组 a
//	{
//		a[i] = b[k++];
//	}
//	delete[]b;     // 辅助数组用完后，将其的空间进行释放（销毁）
//}
//void mergesort(int* a, int low, int hight) //归并排序
//{
//	if (low < hight)
//	{
//		int mid = (low + hight) / 2;
//		mergesort(a, low, mid);          //对 a[low,mid]进行排序
//		mergesort(a, mid + 1, hight);    //对 a[mid+1,hight]进行排序
//		merge(a, low, mid, hight);       //进行合并操作
//	}
//}
//int main()
//{
//	int n, a[100];
//	cout << "请输入数列中的元素个数 n 为：" << endl;
//	cin >> n;
//	cout << "请依次输入数列中的元素：" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	mergesort(a, 0, n-1);
//	cout << "归并排序结果" << endl;
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
////查找数据并重新摆正 
//
//
//int main(){
//	LinkList LookElem(LinkList L,int num);
//	void getNList(LinkList L);
//	//初始化链表
//	LinkList L;
//	LNode *p,*s;
//	s = new LNode;
//	s->next = NULL;
//	L = s;
//	//存数据
//	p = L;
//	for(int i=1;i<=10;i++){
//		s = new LNode;
//		s->data = i;
//		s->next = NULL;
//		p->next = s;
//		p = p->next;
//	} 
//	//排序输出
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
//链表初始化->赋值->排序->输出->销毁 
//  LinkList LookElem(LinkList L,int num);
//  void getNList(LinkList L);
//  //初始化一个链表
//  LinkList L;
//  LNode *p,*s;
//  s = new LNode;
//  s->next = NULL;
//  L = s;
//  //存数据
//  p = L;
//  for(int i=1;i<=10;i++){
//    s = new LNode;
//    s->data = i;
//    s->next = NULL;
//    p->next = s;
//    p = p->next;
//  }
//  //排序输出
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
////查找数据并重新摆正
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
////输出数据
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
////查找重新排序
//LinkList secList(LinkList L,int num){
//	Node* p = L;
//	Node* q;
//	while(p->next){
//		if(p->next->data==num){
//			//删除结点 q 
//			q = p->next;
//			p->next = q->next;
//			delete q; 
//			//在头结点插入
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
////输出链表
//void printList(LinkList L){
//	Node* p = L;
//	while(p->next){
//		p = p->next;
//		printf("%4d",p->data);
//	}
//	printf("\n");
//} 
//int main(){
//	//初始化链表
//	LinkList L;
//	Node* s;
//	s = new Node;
//	s -> next = NULL;
//	L = s; 
//	//给链表赋值
//	Node* p = L;
//	for(int i=1;i<=10;i++){
//		s = new Node;
//		s->data = i;
//		s->next = NULL;
//		p->next = s; 
//		p = p->next;
//	}
//	
//	//小王子要排序的次数
//	int n = 0;
//	int m = 0;
//	scanf("%d",&n);
//	while(n>0){
//		scanf("%d",&m);
//		L = secList(L,m);
//		printList(L);
//		n--;
//	} 
//	//消除链表
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
////查找重新排序 
//LinkList secList(LinkList L,int num){
//	Node* p = L;
//	Node* q;
//	while(p->next){
//		if(p->next->data==num){
//		//删除结点 q 
//		q = p->next;
//		p->next=q->next;
//		delete q;
//		//在头结点插入 
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
////输出链表 
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
//	//初始化链表 
//	LinkList L;
//	Node* s;
//	s = new Node;
//	s->next=NULL;
//	L = s;
//	//给链表赋值 
//	Node* p = L;
//	for(int i=1;i<=10;i++){
//		s = new Node;
//		s->data=i;
//		s->next=NULL;
//		p->next=s;
//		p=p->next;
//	}
//	//排序次数 
//	int n=0,m=0;
//	cin>>n;
//	while(n>0){
//		cin>>m;
//		L =secList(L,m);
//		printList(L);
//		n--;
//	}
//	//最后消除链表 
//	while(L!=NULL){
//		p=L;
//		L=L->next;
//		delete p;
//	}
//	return 0;
//}
//分巧克力
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
//单项链表框架 
//#include<bits/stdc++.h>
//using namespace std;
////链表结点 
//typedef struct{
//	void* data;
//	struct LINKNODE* next; 
//}LinkNode;
////链表结构体 
//typedef struct{
//	LinkNode* head;
//	int size;
//}LinkList;
////打印函数指针
//typedef void(*PRINTLINKNODE)(void*);
////初始化链表
//LinkList* Init_LinkList(){
//	LinkList* list=(LinkList*)malloc(sizeof(LinkList));
//	list->size=0;
//	
//	//头结点 是不保存数据信息 
//	list->head=(LinkNode*)malloc(sizeof(LinkNode));
//	list->head->data=NULL; 
//	list->head->next=NULL; 
//}
////指定位置插入 
//void Insert_LinkList(LinkList* list,int pos,void* data){
//	if(list==NULL){
//		return;
//	}
//	if(data==NULL){
//		return;
//	}
//	//友好的处理，如果pos越界 
//	if(pos<0||pos>list->size){
//		pos=list->size;
//	}
//	
//	//创建新的结点
//	LinkNode* newnode=(LinkNode*)malloc(sizeof(LinkNode));
//	newnode->data=data;
//	newnode->next=NULL;
//	
//	//找节点
//	//辅助指针变量
//	LinkNode* pC =	list->head;
//	for(int i=0;i<pos;i++){
//		pC = pC->next;
//	}
//	
//	//新结点入链表 
//	newnode->next =pC->next;
//	pC->next= newnode; 
//	list->size++;;
//	
//}
////删除指定位置
//void RemoveByPos_LinkList(LinkList* list,int pos){
//	if(list==NULL){
//		return;
//	}
//	if(pos<0 || pos>=list->size){
//		return;
//	}
//	//查找删除结点的前一个结点
//	for(int i=0;i<pos;i++){
//		pC=pC->next;
//	} 
//	//缓存删除的结点 
//	LinkNode* pD = pC->next;
//	pC->next=pD->next;
//	//释放删除结点的内存
//	free(pD);
//	list->size--;
//	
//	
//	
//}
////获得链表的长度
//int Size_LinkList(LinkList* list){
//	return list->size;
//}
////查找
//int Find_LinkList(LinkList* list,void* data){
//	if(list==NULL){
//		return -1;
//	}
//	if(data==NULL){
//		return -1;
//	}
//	//遍历查找
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
////返回第一个结点
//void* Front_LinkList(LinkList* list){
//	return list->head->next;
//} 
////打印链表结点 
//void Print_LinkList(LinkList* list,PRINTLINKNODE print){
//	if(list==NULL){
//		return;
//	}
//	//辅助指针变量
//	LinkNode* pC = list->head->next;
//	while(pC!=NULL){
//		printf(pC->data);
//		pC=pC->next;
//	} 
//}
////释放链表内存
//void FreeSpace_LinkList(LinkList* list){
//	if(list==NULL){
//		return;
//	}
//	//辅助指针变量
//	LinkNode* pC = list->head;
//	while(pC!=NULL){
//		//先缓存下一个结点，如果直接删除结点就找不到下一个结点的位置
//		LinkNode* pNext= pC>next;
//		free(pC);
//		pC=pNext;
//	} 
//	//最后再释放链表内存
//	list->size=0;
//	free(list); 
//}
//#include<bits/stdc++.h>
//using namespace std;
////链表结点 
//typedef struct{
//	void* data;
//	struct LINKNODE* next; 
//}LinkNode;
////链表结构体 
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
	//创建链表 
//	LinkList* list = Init_LinkList();
//	person p1 = {"wjh",18,100};
//	person p2 = {"zyj",18,100};
//	person p3 = {"hsk",18,100};
//	person p4 = {"zpy",18,100};
//	person p5 = {"ysz",18,100};
//	
//	//数据插入链表 
//	Insert_LinkList(list,0,&p1);
//	Insert_LinkList(list,0,&p2);
//	Insert_LinkList(list,0,&p3);
//	Insert_LinkList(list,0,&p4);
//	Insert_LinkList(list,0,&p5);
//	
//	//打印 
//	Print_LinkList(list,Myprint);
//	
//	//销毁链表
//	 FreeSpace_LinkList(list);
//	printf("\n");
//	return 0;
//}


