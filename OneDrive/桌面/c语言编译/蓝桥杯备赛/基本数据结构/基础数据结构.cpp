//#include<bits/stdc++.h>
//typedef int ElemType
////using namespace std;
//typedef struct LNode{	//定义单链表结点类型 
//	int data;			//数据域，可以是别的各种数据类型 
//	struct LNode *next;	//指针域 
//};
//#define MAXSIZE 100 //MAXSIZE为顺序表可以达到的最大长度、
//typedef struct {
//	ElemType data[MAXSIZE];
//	int length;		//length+1即为表长 
//}SeqList;
//
//SeqList *init_SeqList(){
//	SeqList *L;
//	L = new SeqList;   		//申请顺序表的存储空间
//	if(L){
//		L->length=-1;
//		return L;
//	}else{
//		return -1;
//	}
//} 
//int Insert_SeqList(SeqList &L,ElemType x,int i){
//	int k;
//	if(i<0 || i<L.length || L.length==MAXSIZE)
//	return 0;
//	else{
//		for(k=L.length;k>=i;k--)
//		L.data[i]=X;
//		L.length=L.length+1;
//	}
//	return 1;
//}
// 
 
//#include<bits/stdc++.h>
//struct node{				//定义链表节点 
//	int data;			//节点的值 
//	node * next;			//单项链表。只有一个next指针 
//};
//int main(){
//	int n;
//	scanf("%d",n);
//	node * head,*p,*now,*prev;	//定义变量
//	head = new node;head->data = 1;head->next=NULL;//分配第1个节点，数据置为1
//	now = head;		//当前指针是头
//	now ->next = head;
//	for(int i=2;i<=n;i++){
//		p = new node;p->data = i;p->next=NULL;
//		now->next = p;
//		now = p;
//	} 
//	now->next=head;				//尾指向头，循环链表建立完成 
//
//} 

///单向静态链表 
//#include<bits/stdc++.h>
//const int N =105;
//struct node{				//定义静态链表的空间大小 
//	int id,nextid;		//单向指针
//	//int data;			//如有必要，定义一个有意义的数据 
//}node[N];
//int main(){
//	int n,m;
//	scanf("%d %d",&n,&m);
//	node[0].nextid=1;
//	for(int i=1;i<=n;i++){ 
//		node[i].nextid=i+1;
//	}
//	node[n].nextid=1;
//	int now=1,prev=1;
//	while((n--)>1){
//		for(int i=1;i<m;i++){
//			prev=now;
//			now=node[now].nextid;		//数到m停下 
//		}
//		printf("%d",node[now].id);				//带空格打印
//		node[prev].nextid=node[now].nextid;		//跳过now节点即删除now
//		now=node[prev].nextid; 
//	}
//	printf("%d",node[now].nextid);			//打印最后一个节点，后面不带空格
//	return 0; 
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	list<int>node;
//	for(int i=1;i<=n;i++)
//		node.push_back(i);
//	
//	list<int>::iterator it = node.begin();
//	while(node.size()>1){
//		for(int i=1;i<m;i++){
//			it++;
//			if(it==node.end())
//			it = node.begin();
//		}
//	
//		cout<<*it<<" ";
//		list<int>::iterator next=++it;
//		if(next==node.end())
//		next=node.begin();
//		node.erase(--it);
//		it=next;
//	}
//	cout<<*it;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int stu[20000100];
int main(){
	int n,m,x;
	cin>>n>>m;
	list<int> node;
	for(int i=1;i<=n;i++){
		cin>>stu[i];
	}
	list<int>l(stu,stu+sizeof(stu)/sizeof(stu[0]));
	while(m--){
		cin>>l;
		auto it=l.begin();
		while(it!=l.end()){
			
		} 
		cout<<*it<<endl;
	}
	return 0;
}
	//list<int>::iterator it =node.begin();
//	for(int i=1;i<=m;i++){
//		cin>>l;
//		while(l>=1){
//			it++;
//		}
//		cout<<*it<<endl;
//	}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//		
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	
//	return 0;
//}





