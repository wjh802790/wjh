//p1996 约瑟夫问题 

//#include<bits/stdc++.h>
//struct node{			//定义链表节点 
//	int data;             //节点的值 
//	node * next;			//单向链表，只有一个next指针 
//};
//int main()
//{
//	int n,m;
////	scanf("%d %d",&n,&m);
//	node * head,*p,*now,*prev;  //定义变量 
//	head = new node;head -> data = 1; head -> next =NULL; //分配第1个节点，数据置为1
//	now = head;   			//	当前指针是头
//	for(int i = 2;i <= n;i++){
//		p = new node; p -> data = i; p -> next = NULL; //p是新节点
//		now -> next = p;  				//把申请的新节点连到前面的链表上
//		now = p;   							//尾指针后移一个 
//	} 
//	now -> next = head;  
//	}		//尾指针指向头：循环链表建立完成 
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

/*	//以上是建立链表
	now = head,prev = head;   			//从第一个数开始数
	while((n--)>1){
		for(int i =1;i < m;i++){		//数到m，停下 
			prev = now;				//记录上一个位置，用于下面跳过第 m 个节点 
			now = now -> next;	
		}
		printf(" %d ",now -> data); 				//输出第 m 个节点，带空格 
		prev -> next = now -> next;					//跳过这个节点 
		delete now;									//释放节点 
		now = prev -> next;							//新的一轮 
	} 
	printf(" %d",now -> data);  					//打印最后一个节点，后面不带空格 
	delete now;										//释放最后一个节点
	return 0; 
}
*/


/*
//洛谷p1996,用结构体数组实现单向链表 
#include<bits/stdc++.h>
const int N = 105; 						//定义静态链表的空间大小
struct node{								//单向链表 
	int id, nextid;						//单向指针 
	//int data;								//如有必要，定义一个有意义的数据 
}nodes[ N ];
int main(){
	int n, m; 		scanf("%d %d",&n,&m);
	nodes[ 0 ].nextid = 1;					//循环链表：尾指向头
	int now = 1,prev = 1;					//从第一个节点开始
	while((n--)>1){
		for( int i = 1; i < m;i++){
			prev = now; now = nodes[ now ].nextid;  //数到m停下 
		}
		printf(" %d ",nodes[ now ].nextid);
		nodes[ prev ].nextid = nodes[ now ].nextid;  		//跳过now节点，即删除now
		now = nodes[ prev ].nextid;							//新的now 
	} 
	printf(" %d ",nodes[ now ].nextid);					//打印最后一个节点，后面不带空格 
	return 0;
} 

*/





//用结构体数组实现双向静态链表
//洛谷p1996，结构体数组实现双向静态链表
/*
#include<bits/stdc++.h>
const int N = 105;
 struct node{								//双向链表 
	int id;									//节点编号 
	//int data;								//如有必要，定义一个有意义的数据
	int preid,nextid;						//前一个节点，后一个节点 				 
}nodes[ N ];
int main(){
	int n, m; 		scanf("%d %d",&n,&m);
	nodes[ 0 ].nextid = 1;					//循环链表：尾指向头
	for(int i = 1; i <= n;i++){		//建立链表 
	node[i].id = i;
	node[i].preid = i - 1;			//前节点
	node[i].nextid = i + 1; 			//后节点  
	}
	node[ n ].nextid = 1;				//循环链表：尾指向头 
	node[ n ].preid = n;				//循环链表：头指向尾 
	int now = 1;						//从第一个节点开始 
	while((n--)>1){
	for( int i = 1; i < m; i++)	now = node[ now ].nextid;	//数到m，停下 
	printf(" %d ",node[ now ].id);						//打印，后面带空格
	int prev = node[ now ].preid, next = node[ now ].nextid;
	node[ prev ].nextid = node[ now ].nextid;			//删除now
	node[ next ].preid = node[ now ].preid;			
	now = next;										//新的开始  
	} 
	
	printf(" %d ",nodes[ now ].nextid);					//打印最后一个节点，后面不带空格 
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


//用一维数组实现单向静态链表
//洛谷P1996
//#include<bits/stdc++.h>
//int nodes[150];
//int main()
//{
//	int n,m;
//	scanf("%d %d",&n,&m);
//	for(int i=1;i<=n;i++)
//	{
//		nodes[i]=i+1;	//nodes[i]的值就是下一个节点 
//	}	
//	nodes[n]=1;				//循环链表：尾指向头 
//	int now = 1,prev = 1;//从第一个节点开始 
//	while((n--)>1){
//		for(int i = 1;i<m;i++)		//数到m,停下 
//		{
//			prev = now;now = nodes[now];	//下一个节点 
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
//	now ->next = head;				//尾指向头，循环链表建立完成 
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
