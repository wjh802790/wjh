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

//struct ListNode{
//	int val;	//�ڵ��ϴ洢��Ԫ�� 
//	ListNode *next;		//ָ����һ���ڵ��ָ��
//	ListNode(int x):val(x),next(0){}	//�ڵ�Ĺ��캯�� 
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
//	node *head = new node;		//����ͷ�ڵ� 
//	head->num=1;		//�ȸ���һ���ڵ㸳ֵ 
//	node *cur=head;		//���ڱ������� 
//	for(int i=1;i<10;i++){		//ѭ����ֵ 
//		cur->next=new node;
//		cur->next->num=i+1;
//		cur = cur->next;
//	}
//	
//	//�����û����� 
//	int n;
//	cin>>n;
//	int *arr=new int[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	//ѭ��n�Σ�һ�δ�ӡһ�н�� 
//	for(int i=0;i<n;i++){
//		node *pre=head;	//���ڴ洢��һ���ڵ� 
//		cur=head;		//���ڱ������� 
//		while(cur !=NULL){	//�������� 
//			if(cur->num==arr[i]){		//����ҵ�Ŀ��ڵ㣬�˳�ѭ�� 
//				break;
//			}
//			pre=cur;//�洢��һ���ڵ�
//			cur=cur->next; 
//		}
//		if(pre!=cur){			//�����ѡ�ڵ��������ͷ�ڵ㣬�򲻽��д��� 
//			pre->next=cur->next;
//			cur->next=head;
//			head=cur;
//		}
//		
//		//������ 
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
//	//�ڴ���� 
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

