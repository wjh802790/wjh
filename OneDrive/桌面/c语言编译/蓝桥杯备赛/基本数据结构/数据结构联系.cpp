//#include<bits/stdc++.h>
//using namespace std;
//struct listnode{
//	int data;
//	struct listnode* next;
//	struct listnode* prev; 
//}listnode[105];
////申请一个新节点 
//listnode* applynode(int x){
//	node* newnode=(node*)malloc(sizeof(node));
//	newnode->data=x;
//	newnode->next=NULL;
//	newnode->prev=NULL;
//	return newnode;
//}
////初始化 
//listnode* listinit(){
//	listnode* head=applynode(0);
//	head->next=phead;
//	head->prev=phead;
//	return head;
//}
////尾插法	直接在链表后面插入新节点 
//void listpushback(listnode* head,int x){
//	assert(head);
//	//assert(断言):判断条件是否为真，为假程序就会直接崩溃，输出一条相应的错误信息 
//	listnode* p=head->prev;
//	listnode* newnode=applynode(x);
//	
//	//插入新节点p，新节点插入到头节点后面，循环链表尾指向头  
//	p->next=newnode;
//	newnode->prev=p;
//	newnode->next=head;
//	p->prev=newnode;
//} 
////头插法	在头结点（head）后面插入新节点 
//void listpushfront(listnode* head,int x){
//	assert(head);
//	listnode* first=head->next;
//	listnode* newnode=applynode(x);
//	
//	head->next=newnode;
//	newnode->prev=head;
//	newnode->next=first;
//	first->prev=newnode;
//} 
////打印
//void listprint(listnode* head){
//	assert(head);
//	listnode* cur =head->next;
//	while(cur!=NULL){
//		printf("%d",cur->data);
//		cur=cur->next;
//	}
//	printf("\n");
//} 
////头删
//void listpopfront(listnode* head){
//	assert(head);
//	assert(head->next!=head);
//	listnode* first=head->next;
//	listnode* second=first->next; 
//	head->next=second;
//	second->prev=head;
//	free(first);
//	first=NULL;
//} 
////尾删 
//void listpopback(listnode* head){
//	assert(head);
//	assert(head->next!=head);
//	listnode* second=head->prev;
//	listnode* first=second->prev;
//	first->next=head;
//	head->prev=first;
//	free(second);
//	second=NULL;
//} 
////查找
//listnode* listfind(listnode* head,int x){
//	assert(head);
//	listnode* p=head->next;
//	while(p!=NULL){
//		if(p->data==x){
//			return p;
//		}
//		p=p->next;
//	}
//	return NULL;
//} 
////在pos位置之前插入x
//void listinsert(listnode* pos,int x){
//	assert(pos);
//	listnode*prev=pos->prev;
//	listnode* newnode=applynode(x);
//	
//	prev->next=newnode;
//	newnode->prev=prev;
//	newnode->next=pos;
//	pos->prev=newnode;
//	
//} 
////删除pos位置的值
//void listerase(listnode* pos){
//	assert(pos);
//	listnode* p=pos->prev;
//	listnode* next=pos->next;
//	p->next=next;
//	next->prev=p;
//	free(pos);
//} 
////销毁链表
//void listdestroy(listnode* head){
//	assert(head);
//	listnode* cur=head->next;
//	while(cur!=head){
//		//删除除头节点以外的所有节点, 
//		listnode* next=cur->next;
//		free(cur);
//		cur=next;
//	}
//	free(head);
//	head=NULL;
//} 
///*
//////申请一个新节点 
//listnode* applynode(int x)
////初始化 
//listnode* listinit()
////尾插法	直接在链表后面插入新节点 
//void listpushback(listnode* head,int x)
////头插法	在头结点（head）后面插入新节点 
//void listpushfront(listnode* head,int x)
////打印
//void listprint(listnode* head)
////头删
//void listpopfront(listnode* head)
////尾删 
//void listpopback(listnode* head)
////查找
//listnode* listfind(listnode* head,int x)
////在pos位置之前插入x
//void listinsert(listnode* pos,int x)
////删除pos位置的值
//void listerase(listnode* pos)
////销毁链表
//void listdestroy(listnode* head)
//*/
//void listtest1(){
//	listnode* list=listinit();
//	listpushback(list,3);
//	listpushback(list,4);
//	listpushback(list,5);
//	listpushback(list,6);
//	listpushback(list,7);
//	listpushback(list,8);
//	listprint(list);
//	listpushfront(list,2);
//	listpushfront(list,1);
//	listprint(list);
//	listpopback(list);
//	listpopback(list);
//	listpopfront(list);
//	listpopfront(list);
//	listprint(list);
//}
//int main(){
//	listtesst1();
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct listnode{
//	int val;
//	listnode * next;
//}listnode;
//listnode* createlist(){
//	listnode* head=NULL;
//	return head;
//}
////向链表尾部添加节点 
//void append(listnode**head,int val){
//	listnode* newnode=(listnode*)malloc(sizeof(listnode));
//	newnode->val=val;
//	newnode->next=NULL;
//	if(*head==NULL){
//		*head=newnode;
//	}else{
//		listnode* temp=*head;
//		while(temp->next!=NULL){
//			temp=temp->next;
//		} 
//		temp->next=newnode;
//	}
//}
//
////删除链表中的第一个节点
//void deletehead(listnode** head){
//	if(*head==NULL){
//		return;
//	}
//	listnode* temp=*head;
//	*head=(*head)->next;
//	free(temp);
//} 
////打印链表
//void printlist(listnode*head){
//	listnode* temp=head;
//	while(*head!=NULL){
//		printf("%d",temp->val);
//		temp=temp->next;
//	}
//	printf("\n");
//} 
//void freelist(listnode** head){
//	listnode* temp;
//	while(*head!=NULL){
//		temp=*head;
//		*head=(*head)->next;
//		free(temp);
//	}
//}
//int main(){
//	listnode* mylist=createlist();
//	append(&mylist,10);
//	append(&mylist,20);
//	append(&mylist,30);
//	
//	printlist(&mylist);
//	deletehead(&mylist);
//	
//	printlist(mylist);
//	freelist(mylist);
//	return 0;
//} 

