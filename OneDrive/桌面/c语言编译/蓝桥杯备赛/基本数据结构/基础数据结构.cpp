//#include<bits/stdc++.h>
//typedef int ElemType
////using namespace std;
//typedef struct LNode{	//���嵥���������� 
//	int data;			//�����򣬿����Ǳ�ĸ����������� 
//	struct LNode *next;	//ָ���� 
//};
//#define MAXSIZE 100 //MAXSIZEΪ˳�����Դﵽ����󳤶ȡ�
//typedef struct {
//	ElemType data[MAXSIZE];
//	int length;		//length+1��Ϊ�� 
//}SeqList;
//
//SeqList *init_SeqList(){
//	SeqList *L;
//	L = new SeqList;   		//����˳���Ĵ洢�ռ�
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
//struct node{				//��������ڵ� 
//	int data;			//�ڵ��ֵ 
//	node * next;			//��������ֻ��һ��nextָ�� 
//};
//int main(){
//	int n;
//	scanf("%d",n);
//	node * head,*p,*now,*prev;	//�������
//	head = new node;head->data = 1;head->next=NULL;//�����1���ڵ㣬������Ϊ1
//	now = head;		//��ǰָ����ͷ
//	now ->next = head;
//	for(int i=2;i<=n;i++){
//		p = new node;p->data = i;p->next=NULL;
//		now->next = p;
//		now = p;
//	} 
//	now->next=head;				//βָ��ͷ��ѭ����������� 
//
//} 

///����̬���� 
//#include<bits/stdc++.h>
//const int N =105;
//struct node{				//���徲̬����Ŀռ��С 
//	int id,nextid;		//����ָ��
//	//int data;			//���б�Ҫ������һ������������� 
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
//			now=node[now].nextid;		//����mͣ�� 
//		}
//		printf("%d",node[now].id);				//���ո��ӡ
//		node[prev].nextid=node[now].nextid;		//����now�ڵ㼴ɾ��now
//		now=node[prev].nextid; 
//	}
//	printf("%d",node[now].nextid);			//��ӡ���һ���ڵ㣬���治���ո�
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





