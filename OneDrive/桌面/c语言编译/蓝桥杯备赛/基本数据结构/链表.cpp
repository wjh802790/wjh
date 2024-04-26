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

//struct ListNode{
//	int val;	//节点上存储的元素 
//	ListNode *next;		//指向下一个节点的指针
//	ListNode(int x):val(x),next(0){}	//节点的构造函数 
//};
//ListNode* remove(ListNode* head,int val){
//	head!=NULL&&
//}
//int main(){
//	
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct node{
//	int num;
//	node *next=NULL;
//};
//
//int main(){
////	cin>>n;
////	for(int i=1;i<=n;i++)
////	{
////		cin>>a[i];
////	}
//	node *head = new node;		//创建头节点 
//	head->num=1;		//先给第一个节点赋值 
//	node *cur=head;		//用于遍历链表 
//	for(int i=1;i<10;i++){		//循环赋值 
//		cur->next=new node;
//		cur->next->num=i+1;
//		cur = cur->next;
//	}
//	
//	//接收用户输入 
//	int n;
//	cin>>n;
//	int *arr=new int[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	//循环n次，一次打印一行结果 
//	for(int i=0;i<n;i++){
//		node *pre=head;	//用于存储上一个节点 
//		cur=head;		//用于遍历链表 
//		while(cur !=NULL){	//遍历链表 
//			if(cur->num==arr[i]){		//如果找到目标节点，退出循环 
//				break;
//			}
//			pre=cur;//存储上一个节点
//			cur=cur->next; 
//		}
//		if(pre!=cur){			//如果所选节点就是链表头节点，则不进行处理 
//			pre->next=cur->next;
//			cur->next=head;
//			head=cur;
//		}
//		
//		//输出结果 
//		cur = head;
//		while(cur!=NULL){
//			cout<<cur->num<<" ";
//			cur=cur->next;
//		}
//		cout<<endl;
//		
//	}
//	
//	
//	//内存回收 
//	delete[] arr;
//	node *pre=head;
//	cur =head;
//	while(cur!=NULL){
//		pre=cur;
//		cur=cur->next;
//		delete pre;
//	}
//	return 0;
//}


//STL list 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	list<int> node;
//	for(int i=1;i<=n;i++){
//		node.push_back(i);
//	}
//	list<int>::iterator it=node.begin();
//	while(node.size()>1){
//		for(int i=1;i<m;i++){
//			it++;
//			if(it==node.end())
//			it=node.begin();
//		}
//		cout<<*it<<" ";
//		list<int>::iterator next=++it;
//		if(next==node.end())
//		next=node.begin();
//		node.erase(--it);
//		it=next;
//	}
//	cout<<* it;
//	return 0;
//}

