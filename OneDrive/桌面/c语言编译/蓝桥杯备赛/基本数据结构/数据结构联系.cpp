//#include<bits/stdc++.h>
//using namespace std;
//struct listnode{
//	int data;
//	struct listnode* next;
//	struct listnode* prev; 
//}listnode[105];
////����һ���½ڵ� 
//listnode* applynode(int x){
//	node* newnode=(node*)malloc(sizeof(node));
//	newnode->data=x;
//	newnode->next=NULL;
//	newnode->prev=NULL;
//	return newnode;
//}
////��ʼ�� 
//listnode* listinit(){
//	listnode* head=applynode(0);
//	head->next=phead;
//	head->prev=phead;
//	return head;
//}
////β�巨	ֱ���������������½ڵ� 
//void listpushback(listnode* head,int x){
//	assert(head);
//	//assert(����):�ж������Ƿ�Ϊ�棬Ϊ�ٳ���ͻ�ֱ�ӱ��������һ����Ӧ�Ĵ�����Ϣ 
//	listnode* p=head->prev;
//	listnode* newnode=applynode(x);
//	
//	//�����½ڵ�p���½ڵ���뵽ͷ�ڵ���棬ѭ������βָ��ͷ  
//	p->next=newnode;
//	newnode->prev=p;
//	newnode->next=head;
//	p->prev=newnode;
//} 
////ͷ�巨	��ͷ��㣨head����������½ڵ� 
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
////��ӡ
//void listprint(listnode* head){
//	assert(head);
//	listnode* cur =head->next;
//	while(cur!=NULL){
//		printf("%d",cur->data);
//		cur=cur->next;
//	}
//	printf("\n");
//} 
////ͷɾ
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
////βɾ 
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
////����
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
////��posλ��֮ǰ����x
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
////ɾ��posλ�õ�ֵ
//void listerase(listnode* pos){
//	assert(pos);
//	listnode* p=pos->prev;
//	listnode* next=pos->next;
//	p->next=next;
//	next->prev=p;
//	free(pos);
//} 
////��������
//void listdestroy(listnode* head){
//	assert(head);
//	listnode* cur=head->next;
//	while(cur!=head){
//		//ɾ����ͷ�ڵ���������нڵ�, 
//		listnode* next=cur->next;
//		free(cur);
//		cur=next;
//	}
//	free(head);
//	head=NULL;
//} 
///*
//////����һ���½ڵ� 
//listnode* applynode(int x)
////��ʼ�� 
//listnode* listinit()
////β�巨	ֱ���������������½ڵ� 
//void listpushback(listnode* head,int x)
////ͷ�巨	��ͷ��㣨head����������½ڵ� 
//void listpushfront(listnode* head,int x)
////��ӡ
//void listprint(listnode* head)
////ͷɾ
//void listpopfront(listnode* head)
////βɾ 
//void listpopback(listnode* head)
////����
//listnode* listfind(listnode* head,int x)
////��posλ��֮ǰ����x
//void listinsert(listnode* pos,int x)
////ɾ��posλ�õ�ֵ
//void listerase(listnode* pos)
////��������
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
////������β����ӽڵ� 
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
////ɾ�������еĵ�һ���ڵ�
//void deletehead(listnode** head){
//	if(*head==NULL){
//		return;
//	}
//	listnode* temp=*head;
//	*head=(*head)->next;
//	free(temp);
//} 
////��ӡ����
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

