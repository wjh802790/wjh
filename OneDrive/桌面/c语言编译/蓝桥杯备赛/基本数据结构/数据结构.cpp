//p1996 Լɪ������ 

//#include<bits/stdc++.h>
//struct node{			//��������ڵ� 
//	int data;             //�ڵ��ֵ 
//	node * next;			//��������ֻ��һ��nextָ�� 
//};
//int main()
//{
//	int n,m;
////	scanf("%d %d",&n,&m);
//	node * head,*p,*now,*prev;  //������� 
//	head = new node;head -> data = 1; head -> next =NULL; //�����1���ڵ㣬������Ϊ1
//	now = head;   			//	��ǰָ����ͷ
//	for(int i = 2;i <= n;i++){
//		p = new node; p -> data = i; p -> next = NULL; //p���½ڵ�
//		now -> next = p;  				//��������½ڵ�����ǰ���������
//		now = p;   							//βָ�����һ�� 
//	} 
//	now -> next = head;  
//	}		//βָ��ָ��ͷ��ѭ����������� 
//#include<bits/stdc++.h>
//struct node{
//	int data;
//	node * next;
//};
//int main()
//{
//	int n=2;
//	node * head,*p,*now,*prev;
//	head = new node;
//	head -> data = 1;
//	head -> next = NULL;
//	now = head;
//	for(int i=1;i<=n;i++)
//	{
//		p = new node;
//		p -> data = 1;
//		p -> next =NULL; 
//		now -> next = p;
//		now = p;
//		
//	}
//	now -> next = head;
//}

/*	//�����ǽ�������
	now = head,prev = head;   			//�ӵ�һ������ʼ��
	while((n--)>1){
		for(int i =1;i < m;i++){		//����m��ͣ�� 
			prev = now;				//��¼��һ��λ�ã��������������� m ���ڵ� 
			now = now -> next;	
		}
		printf(" %d ",now -> data); 				//����� m ���ڵ㣬���ո� 
		prev -> next = now -> next;					//��������ڵ� 
		delete now;									//�ͷŽڵ� 
		now = prev -> next;							//�µ�һ�� 
	} 
	printf(" %d",now -> data);  					//��ӡ���һ���ڵ㣬���治���ո� 
	delete now;										//�ͷ����һ���ڵ�
	return 0; 
}
*/


/*
//���p1996,�ýṹ������ʵ�ֵ������� 
#include<bits/stdc++.h>
const int N = 105; 						//���徲̬����Ŀռ��С
struct node{								//�������� 
	int id, nextid;						//����ָ�� 
	//int data;								//���б�Ҫ������һ������������� 
}nodes[ N ];
int main(){
	int n, m; 		scanf("%d %d",&n,&m);
	nodes[ 0 ].nextid = 1;					//ѭ������βָ��ͷ
	int now = 1,prev = 1;					//�ӵ�һ���ڵ㿪ʼ
	while((n--)>1){
		for( int i = 1; i < m;i++){
			prev = now; now = nodes[ now ].nextid;  //����mͣ�� 
		}
		printf(" %d ",nodes[ now ].nextid);
		nodes[ prev ].nextid = nodes[ now ].nextid;  		//����now�ڵ㣬��ɾ��now
		now = nodes[ prev ].nextid;							//�µ�now 
	} 
	printf(" %d ",nodes[ now ].nextid);					//��ӡ���һ���ڵ㣬���治���ո� 
	return 0;
} 

*/





//�ýṹ������ʵ��˫��̬����
//���p1996���ṹ������ʵ��˫��̬����
/*
#include<bits/stdc++.h>
const int N = 105;
 struct node{								//˫������ 
	int id;									//�ڵ��� 
	//int data;								//���б�Ҫ������һ�������������
	int preid,nextid;						//ǰһ���ڵ㣬��һ���ڵ� 				 
}nodes[ N ];
int main(){
	int n, m; 		scanf("%d %d",&n,&m);
	nodes[ 0 ].nextid = 1;					//ѭ������βָ��ͷ
	for(int i = 1; i <= n;i++){		//�������� 
	node[i].id = i;
	node[i].preid = i - 1;			//ǰ�ڵ�
	node[i].nextid = i + 1; 			//��ڵ�  
	}
	node[ n ].nextid = 1;				//ѭ������βָ��ͷ 
	node[ n ].preid = n;				//ѭ������ͷָ��β 
	int now = 1;						//�ӵ�һ���ڵ㿪ʼ 
	while((n--)>1){
	for( int i = 1; i < m; i++)	now = node[ now ].nextid;	//����m��ͣ�� 
	printf(" %d ",node[ now ].id);						//��ӡ��������ո�
	int prev = node[ now ].preid, next = node[ now ].nextid;
	node[ prev ].nextid = node[ now ].nextid;			//ɾ��now
	node[ next ].preid = node[ now ].preid;			
	now = next;										//�µĿ�ʼ  
	} 
	
	printf(" %d ",nodes[ now ].nextid);					//��ӡ���һ���ڵ㣬���治���ո� 
	return 0;
}

*/

//#include<bits/stdc++.h>
//using namespace std;
//struct node{
//	int data;
//	node * next;
//};
//int n,m; 
//int main()
//{
//	
//	cin>>n>>m;
//	node * head,*p,*now,*prev;
//	head = new node;
//	head -> data = 1;
//	head -> next = NULL;
//	now = head;
//	for(int i=0;i<=n;i++)
//	{
//		p = new node;
//		p -> data = i;
//		p -> next = NULL;
//		now -> next = p;
//		now = p;
//	}
//	now -> next = head;
//}


//��һά����ʵ�ֵ���̬����
//���P1996
//#include<bits/stdc++.h>
//int nodes[150];
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	for(int i=1;i<=n;i++)
//	{
//		nodes[i]=i+1;	//nodes[i]��ֵ������һ���ڵ� 
//	}	
//	nodes[n]=1;				//ѭ������βָ��ͷ 
//	int now = 1,prev = 1;//�ӵ�һ���ڵ㿪ʼ 
//	while((n--)>1){
//		for(int i = 1;i<m;i++)		//����m,ͣ�� 
//		{
//			prev = now;now = nodes[now];	//��һ���ڵ� 
//		}
//		printf("%d\n",now);
//		nodes[prev] = nodes[now];
//		now = nodes[prev];
//	}
//	printf("%d",now);
//	return 0;
// } 

//
//#include<bits/stdc++.h>
//struct node{
//	int data;
//	node * next;
//};
//int main()
//{
//	node * head,*p,*now,*prev;
//	head = new node;
//	head -> data = 1;
//	head -> next = NULL;
//	now = head;
//	for(int i=2;i<=10;i++)
//	{
//		p =new node;
//		p ->data = i;
//		p ->next = NULL;
//		now ->next = p;
//		now = p;
//	}
//	now ->next = head;				//βָ��ͷ��ѭ����������� 
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct node{
//	int data;
//	node * next;
//};
//int main()
//{
//	int m,n;scanf("%d %d",&n,&m);
//	node * head,*p,*now,*prev;
//	head =new node;
//	head ->data = 1;
//	head ->next =NULL;
//	now = head;
//	for(int i=2;i<n;i++)
//	{
//		p = new node;
//		p ->data = i;
//		p ->next =NULL;
//		now ->next = p;
//		now = p;
//	}
//	now ->next = head;
//	now = head,prev = head;
//	while((n--)>1){
//		for(int i=1;i<m;i++){
//			prev = now;
//			now = now-> next;
//		}
//		printf(" %d ",now ->data);
//		prev ->next =now ->next;
//		delete now;
//		now = prev ->next;
//	}
//	printf(" %d ",now->data);
//	delete now;
//	return 0;
//}
