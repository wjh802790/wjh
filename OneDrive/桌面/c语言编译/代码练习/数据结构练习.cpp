//约瑟夫问题  STL
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	list<int>node;
// 	for(int i=1;i<=n;i++){
// 		node.push_back(i);			//建立链表 
//	 }
//	 list<int>::iterator it=node.begin(); 
//	 while(node.size()>1){		//list的大小由STL自己管理 
//	 	for(int i=1;i<m;i++){				//数到m 
//	 		it++;
//	 		if(it==node.end())
//	 		it = node.begin();			//循环：到了末尾再回头 
//		 }
//		 cout<<*it<<" ";			
//		 list<int>::iterator next=++it;
//		 if(next==node.end())			
//		 next=node.begin();	//循环链表
//		 node.erase(--it);				//删除这个节点，node.size()自动减1 
//		 it=next;		//更新it 
//	 } 
//	 cout<<*it;
//	return 0;
// }



//双向静态链表（结构体数组） 
//#include<bits/stdc++.h>
//using namespace std;
//const int N =105;
//struct node{			//结构体数组 
//	int id;			//节点编号 
//	int data;			//如有必要，定义一个有意义的数据 
//	int preid,nextid;		//前一个节点，后一个节点 
//}nodes[N];
//int main(){
//	int n,m;;
//	scanf("%d %d",&n,&m);		
//	nodes[0].nextid=1;			//0的下一个节点是1 
//	for(int i=1;i<=n;i++){			//建立链表 
//		nodes[i].id=i;		 
//		nodes[i].preid=i-1;				//前节点 
//		nodes[i].nextid=i+1;			//后节点 
//	}
//	nodes[n].nextid=1;			//循环链表：尾指向头 
//	nodes[1].preid=n;			//循环链表：头指向尾 
//	int now=1;					//从第一个开始 
//	while((n--)>1){			
//		for(int i=1;i<m;i++)			
//		now = nodes[now].nextid;	//数到m，停下 
//		printf("%d",nodes[now].id);		//打印，后面带空格 
//		int prev = nodes[now].preid,next=nodes[now].nextid;
//		nodes[prev].nextid=nodes[now].nextid;		//删除now 
//		nodes[next].preid=nodes[now].preid;
//		now = next;			//新的开始 
//	}	
//	printf("%d",nodes[now].nextid);			//打印最后一个，后面不带空格 
//	return 0;
//}
//用一维数组实现单向静态链表
//#include<bits/stdc++.h>
//using namespace std;
//int nodes[150];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n-1;i++)
//	nodes[i]=i+1;		//nodes[i]的值就是下一个节点 
//	nodes[n]=1;		//循环链表：尾指向头 
//	int now=1,prev=1;	//从第一个节点开始
//	while((n--)>1){
//		for(int i=1;i<m;i++){			//数到m，停下 
//			prev=now;   		//下一个 
//			now =nodes[now];	 
//		}
//		printf("%d",now);		//带空格	
//		nodes[prev]=nodes[now];		// 跳过now节点，删除now 
//		now=nodes[prev];	//新的now节点 
//	} 
//	printf("%d",now);		//打印最后一个，不带空格 
//	return 0;
//} 

//结构体数组实现单向静态链表

//#include <bits/stdc++.h>                 
//const int N = 105;                       //定义静态链表的空间大小
//struct node{                             //单向链表
//    int id, nextid;                      //单向指针
//  //int data;                            //如有必要，定义一个有意义的数据    
//}nodes[N];                               //定义在全局的静态分配
//int main(){
//    int n, m;       scanf("%d%d", &n, &m);
//    nodes[0].nextid = 1;
//    for(int i=1;i<=n;i++){ nodes[i].id=i; nodes[i].nextid=i+1;}
//    nodes[n].nextid = 1;                 //循环链表：尾指向头
//    int now = 1, prev = 1;               //从第1个开始
//    while((n--) >1){
//        for(int i=1;i<m;i++){ prev = now; now = nodes[now].nextid;} //数到m停下            
//        printf("%d ", nodes[now].id);    //带空格打印
//        nodes[prev].nextid = nodes[now].nextid;    //跳过结点now，即删除now
//        now = nodes[prev].nextid;        //新的now
//    }    
//    printf("%d", nodes[now].nextid);     //打印最后一个，后面不带空格
//    return 0; 
//} 
//#include<bits/stdc++.h>
//using namespace std;
//int hash[1003]={0};		//用哈希表检查内存中有没有单词，hash[i]=1，表示单词i在内存中 
//queue<int> mem;		//用队列模拟内存 
//int main(){
//	int m,n;
//	scanf("%d%d",&m,&n);
//	int cnt=0;		//查看字典序的次数 
//	while(n--){
//		int en;
//		scanf("%d",&en);
//		if(!hash[en]){
//			++cnt;
//			mem.push(en);		//单词入队列，放到队列尾部
//			hash[en]=1;			//记录内存中有这个单词
//			while(mem.size()>m){
//				hash[mem.front()]=0;
//				mem.pop();
//			} 
//		}
//	}
//	printf("%d\n",cnt);
//	return 0;
//} 

//#include<bits/stdc++.h>
//using namespace std;
//typedef struct Node{
//	int data;
//	struct Node* next;
//}Node,*LinkList;
////初始化链表 
//LinkList LinkListInit(){
//	Node *L;
//	L=(Node*)malloc(sizeof(Node));
//	if(L==NULL){
//		exit(0);
//	}
//	L->next=NULL;
//	return L;
//} 
////创建 ，尾插法建立单链表 
//LinkList LinkListcreate(){
//	Node* L;
//	L=(Node*)malloc(sizeof(Node));
//	L->next=NULL;
//	Node*r;
//	r=L;
//	int x;
//	while(scanf("%d",&x)!=EOF){
//		Node* p;
//		p=(Node*)malloc(sizeof(Node));
//		p->data=x;
//		r->next=p;
//		r=p;
//	}
//	r->next=NULL;
//	return L;
//}
////插入，在链表的第i个位置插入x个元素 
//LinkList LinkListInsert(LinkList L,int i,int x){
//	Node* pre;
//	pre = L;
//	int tempi=0;
//	for(tempi=1;tempi<i;tempi++){
//		pre=pre->next;
//	}
//	Node* p;
//	p=(Node*)malloc(sizeof(Node));
//	p->data=x;
//	p->next=pre->next;
//	pre->next=p;
//	
//	return L;
//}
////删除，在链表中删除值为x的元素
//LinkList LinkListdelete(LinkList L,int x){
//	Node* p,*pre;
//	p=L->next;
//	while(p->data!=x){
//		pre=p;
//		p=p->next;
//	}
//	pre->next=p->next;
//	//删除，将前驱节点指向其后继
//	free(p);
//	
//	return L; 
//} 
//LinkList LinkListReplace(LinkList L,int x,int k){
//	Node* p=L->next;
//	int i=0;
//	while(p){
//		if(p->data==x){
//			p->data=k;
//		}
//		p=p->next;
//	}
//	return L;
//}
//void printList(LinkList L){
//	Node* p=L->next;
//	int i=0;
//	while(p){
//		printf("第%d个元素的值为：%d\n",++i,p->data);
//		p=p->next;
//	}
//}
//int main(){
//	//创建 
//	LinkList list;
//	printf("请输入插入单链表的数据：以EOF结尾\n");
//	list = LinkListcreate();
//	printList(list); 
//	
//	//插入
//	int i;
//	int x;
//	printf("请输入插入数据的位置:");
//	scanf("%d",&i);
//	printf("请输入插入数据的值:");
//	scanf("%d",&x);
//	LinkListInsert(list,i,x);
//	printList(list); 
//	
//	//修改
//	printf("请输入修改的数据:");
//	scanf("%d",&i);
//	printf("请输入修改后的值:");
//	printf("%d",&x); 
//	LinkListReplace(list,i,x);
//	printList(list);
//	
//	//删除
//	printf("请输入要删除的元素的值:");
//	scanf("%d",&x);
//	LinkListdelete(list,x);
//	printList(list);
//	
//	
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
//const int MAX=105;
////结点设计 
//typedef struct stack{
//	int data[MAX];
//	int top;
//}stack;
////创建 
//stack *init{
//	stack* s=(stack *)malloc(sizeof(stack));
//	if(s=NULL){
//		printf("分配内存空间失败");
//		exit(0);
//	}
//	memset(s->data,0,sizeof(s->data));
//	//将整个空间进行初始化 
//	s->top=0;
//	return s;
//}
////入栈
//void push(stack* s,int data){
//	s->data[s->top]=data;
//	s->top++;
//} 
////出栈
//void pop(stack* s){
//	if(s->top!=0){
//		s->data[s->top]=0;	//让其回归0模拟表示未初始化即可 
//		s->top--;
//	}
//} 
//void printstack(stack* s){
//	for(int n=s->top;n>=0;n--){
//		printf("%d\t",s->data[n]);
//	}
//	printf("\n");		//习惯性换行 
//}

//int main(){
//	int n,a[10],ans[10];
//	vector<int> myvector;
//	cin>>n;
//	stack<int>s;
//	stack<int,vector<int> >S;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
////		myvector.push_back(a[i]); 
////		S.push(a[i]);
////		s.push(a[i]);
//	
//}
//	for(int i=0;i<n;i++){
//	while(!s.empty() && s.top()<=a[i]){
//		s.pop();
//	
//	if(s.empty()){
//		ans[i]=0;
//	}else{
//		s.push(a[i]);
//		ans[i]+=s.top();
//	}
//	}
//}
//	for(int i=0;i<n;i++){
//		cout<<ans[i]<<" ";
//	}
	
	//遍历栈区元素 
//	cout<<"S存储元素个数"<<S.size()<<endl;
//	cout<<"s存储元素个数"<<s.size()<<endl;
//	cout<<"s的栈存储元素"<<endl; 
//	while(!s.empty()){
//		cout<<s.top()<<endl;
//		s.pop();
//	
//	}
//	cout<<"S的栈存储元素"<<endl; 
//	while(!S.empty()){
//		cout<<S.top()<<endl;
//		S.pop();
//	}
//	while(!s.empty()){
//		cout<<s.top()<<endl;
//		s.pop();
//	}
//	for(int i=0;i<n;i++){
//		cout<<s.top()<<endl;
//		s.pop();
//	}
//	return 0;
//} 

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define maxn 10000
//  
////结点设计
//typedef struct stack{
//    int data[maxn];
//    int top;
//}stack;
//  
////创建
//stack *init(){
//    stack *s=(stack *)malloc(sizeof(stack));
//    if(s==NULL){
//        printf("分配内存空间失败");
//        exit(0);
//    }
//    memset(s->data,0,sizeof(s->data));
//    //memset操作来自于库文件string.h，其表示将整个空间进行初始化
//    //不理解可以查阅百度百科https://baike.baidu.com/item/memset/4747579?fr=aladdin
//    s->top=0;     //栈的top和bottom均为0（表示为空）
//    return s;
//}
//  
////入栈push
//void push(stack *s,int data){
//    s->data[s->top]=data;
//    s->top++;
//}
//  
////出栈pop
//void pop(stack *s){
//    if(s->top!=0){
//        s->data[s->top]=0;  //让其回归0模拟表示未初始化即可
//        s->top--;
//    }
//}
//  
////模拟打印栈中元素
//void print_stack(stack *s){
//    for(int n=s->top-1;n>=0;n--){
//        printf("%d\t",s->data[n]);
//    }
//    printf("\n");   //习惯性换行
//}
//  
//int main(){
//    stack *s=init();
//    int input[5]={11,22,33,44,55};  //模拟五个输入数据
//    for(int i=0;i<5;i++){
//        push(s,input[i]);
//    }
//    print_stack(s);
//    /////////////
//    pop(s);
//    print_stack(s);
//    return 0;
//}


//#include <iostream>
// 
//using namespace std;
// 
//const int N = 100100;
// 
// 
////手写栈 
//struct mystack
//{
//    int a[ N ]; //存放栈元素，int型
//    int t = 0;  //栈顶位置
// 
//    void push ( int x ) //送入栈
//    {
//        a[ ++ t ] = x;
//    }
// 
//    int top ( ) //返回栈顶元素
//    {
//        return a[ t ];
//    }
// 
//    void pop ( )    //弹出栈顶
//    {
//        -- t;
//    }
// 
//    int empty ( )   //返回 1 表示空
//    {
//        return t == 0 ? 1 : 0;
//    }
//}st;
// 
//int h[ N ], ans[ N ];
// 
//int main ( )
//{
//    int n, i;
//    scanf ( "%d", &n );
// 
//    for ( i = 1; i <= n; ++ i )
//    {
//        scanf ( "%d", &h[ i ] );
//    }
// 
//    for ( i = n; i >= 1; -- i )
//    {
//        while ( !st.empty ( ) && h[ st.top() ] <= h[ i ] )
//        {
//            st.pop( );  //栈顶元素没有当前奶牛高，弹出它
//        }
// 
//        if ( st.empty ( ) )
//        {
//            ans[ i ] = 0;   //栈空，没有奶牛比当前奶牛高
//        }
//        else
//        {
//            ans[ i ] = st.top ( );  //栈顶元素比当前奶牛高，是仰望对象
//        }
// 
//        st.push ( i );
//    }
// 
//    for ( i = 1; i <= n; ++ i )
//    {
//        printf ( "%d\n", ans[ i ] );
//    }
// 
//    return 0;
//
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N=100100;
//struct mystack{
//	int a[N];		//存放栈元素 
//	int t=0;		//栈顶 
//	
//	void push(int x){		//送入栈 
//		a[++t]=x;
//	}
//	
//	int top(){
//		return a[t];
//	}
//	
//	void pop(){		//弹出栈顶 
//		--t;
//	}
//	int empty(){
//		return t==0?1:0;
//	}
//}st;
//int h[N],ans[N];
//int main(){
//	int n,i;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		scanf("%d",&h[i]); 
//	}
//	for(int i=n;i>=1;i--){
//		while(!st.empty() &&h[st.top()]<=h[i]){
//			st.pop();		//栈顶元素没有当前奶牛高，弹出它 
//		}
//		if(st.empty()){
//			ans[i]=0;	//栈空，没有奶牛比当前奶牛高 
//		}else{
//			ans[i]=st.top();		//栈顶元素比当前奶牛高，是仰望对象 
//		}
//		st.push(i);
//	}
//	for(int i=1;i<=n;i++){
//		printf("%d\n",ans[i]);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//#include<stdio.h>
//#include<stdlib.h>
////结点定义 
//typedef struct node{
//	int data;
//	struct node* next;
//}node;
////队列定义，队首和队尾指针 
//typedef struct queue{
//	node* front;
//	node* back;
//}queue;
////初始化结点 
//node *initnode(){
//	node* n=(node*)malloc(sizeof(node));
//	if(n==NULL){
//		exit(0);
//	}
//	return n;
//}
////初始化队列 
//queue *initqueue(){
//	queue* q=(queue*)malloc(sizeof(queue));
//	if(q==NULL){
//		exit(0);
//	}
//	n->front=NULL;
//	n->back=NULL;
//	return q;
//}
////判空 
//int empty(queue* q){
//	if(q->front==NULL){
//		return 1;		//1表示真，说明队列非空 
//	}else{
//		return 0;		//0表示加，说明队列为空 
//	}
//}
////入队操作
//void push(queue* q,int data){
//	node* n=initnode();
//	n->data=data;
//	n->next=NULL;		//采用尾插入法
//	//if(q->back==NULL)
//	if(empty(q)){
//		q->front=n;
//		q->back=n;
//	} else{
//		q->back->next=n;		//n成为当前尾结点的下一结点
//		q->back=n;		//让尾指针指向n 
//	}
//} 
////出队操作
//void pop(queue* q){
//	node*n=initnode();
//	n=q->front;
//	if(empty(q)){
//		return;		//队列为空，直接返回函数结束 
//	}
//	if(q->front==q->back){
//		q->front=NULL;	//只有一个元素直接将两端指向空 
//		q->back=NULL;
//	}else{
//		q->front=q->front->next;
//		free(n);
//	}
//} 
////打印队列元素
//void printqueue(queue* q){
//	node* n=initnode();
//	n=q->front;
//	if(empty(q)){
//		return;		//队列为空，直接返回函数结束 
//	} 
//	while(n!=NULL){
//		printf("%d\t",n->data);
//		n=n->next;
//	}
//	printf("\n");
//} 
//int main(){
//	queue* q=initqueue();
//	printf("入队\n";)
//	for(int i=1;i<=5;i++){
//		push(q,i);
//		printqueue(q);
//	}
//	printf("出队\n");
//	for(int i=1;i<=5;i++){
//		pop(q);
//		printqueue(q);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
////结点定义
//typedef struct node{
//    int data;
//    struct node *next;
//}node;
////队列定义，队首指针和队尾指针
//typedef struct queue{
//    node *front;
//    node *rear;
//}queue;
// 
////初始化结点
//node *init_node(){
//    node *n=(node*)malloc(sizeof(node));
//    if(n==NULL){    //建立失败，退出
//        exit(0);
//    }
//    return n;
//}
// 
////初始化队列
//queue *init_queue(){
//    queue *q=(queue*)malloc(sizeof(queue));
//    if(q==NULL){    //建立失败，退出
//        exit(0);
//    }
//    //头尾结点均赋值NULL
//    q->front=NULL;  
//    q->rear=NULL;
//    return q;
//}
// 
////队列判空
//int empty(queue *q){
//    if(q->front==NULL){
//        return 1;   //1--表示真，说明队列非空
//    }else{
//        return 0;   //0--表示假，说明队列为空
//    }
//}
// 
////入队操作
//void push(queue *q,int data){
//    node *n =init_node();
//    n->data=data;
//    n->next=NULL;   //采用尾插入法
//    //if(q->rear==NULL){  
//    if(empty(q)){
//        q->front=n;
//        q->rear=n;
//    }else{
//        q->rear->next=n;    //n成为当前尾结点的下一结点
//        q->rear=n;  //让尾指针指向n
//    }
//}
// 
////出队操作
//void pop(queue *q){
//    node *n=q->front;
//    if(empty(q)){
//        return ;    //此时队列为空，直接返回函数结束
//    }
//    if(q->front==q->rear){
//        q->front=NULL;  //只有一个元素时直接将两端指向制空即可
//        q->rear=NULL;
//        free(n);        //记得归还内存空间
//    }else{
//        q->front=q->front->next;
//        free(n);
//    }
//}
// 
////打印队列元素
//void print_queue(queue *q){
//    node *n = init_node();
//    n=q->front;
//    if(empty(q)){
//        return ;    //此时队列为空，直接返回函数结束
//    }
//    while (n!=NULL)
//    {
//        printf("%d\t",n->data);
//        n=n->next;
//    }
//    printf("\n");   //记得换行
//}
// 
////主函数调用，这里只是简单介绍用法
//int main(){
//    queue *q=init_queue();
//    ///////////////入队操作/////////////////
//    printf("入队\n");
//    for(int i=1;i<=5;i++){
//        push(q,i);
//        print_queue(q);
//    }
//    ///////////////出队操作/////////////////
//    printf("出队\n");
//    for(int i=1;i<=5;i++){
//        pop(q);
//        print_queue(q);
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,a[10];
//	cin>>n;
//	std::queue<int>myqueue;	
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		myqueue.push(a[i]);
//	}
//	while(!myqueue.empty()){
//		cout<<myqueue.size()<<endl;
//		cout<<myqueue.front()<<endl;
//		//第一个元素的引用 
//		cout<<myqueue.back()<<endl;
//		//最后一个元素的引用 
//		myqueue.pop();
//		//删除queue的第一个元素 
//	}
//	
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	vector<int>myvector;
//	int n,a[10],i;
//	cin>>n;
//	i=n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		myvector.push_back(a[i]);
//	}
//	cout<<"数组大小"<<myvector.size()<<endl;
//	while(i--){
//		if(!myvector.empty()){
//			cout<<myvector[i]<<endl;
//			myvector.erase(i);
//		}else{
//			return;
//		}
//		
//		
//	}
//	return 0;
//} 

