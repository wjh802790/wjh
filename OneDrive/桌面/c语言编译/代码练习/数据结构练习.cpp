//Լɪ������  STL
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	list<int>node;
// 	for(int i=1;i<=n;i++){
// 		node.push_back(i);			//�������� 
//	 }
//	 list<int>::iterator it=node.begin(); 
//	 while(node.size()>1){		//list�Ĵ�С��STL�Լ����� 
//	 	for(int i=1;i<m;i++){				//����m 
//	 		it++;
//	 		if(it==node.end())
//	 		it = node.begin();			//ѭ��������ĩβ�ٻ�ͷ 
//		 }
//		 cout<<*it<<" ";			
//		 list<int>::iterator next=++it;
//		 if(next==node.end())			
//		 next=node.begin();	//ѭ������
//		 node.erase(--it);				//ɾ������ڵ㣬node.size()�Զ���1 
//		 it=next;		//����it 
//	 } 
//	 cout<<*it;
//	return 0;
// }



//˫��̬�����ṹ�����飩 
//#include<bits/stdc++.h>
//using namespace std;
//const int N =105;
//struct node{			//�ṹ������ 
//	int id;			//�ڵ��� 
//	int data;			//���б�Ҫ������һ������������� 
//	int preid,nextid;		//ǰһ���ڵ㣬��һ���ڵ� 
//}nodes[N];
//int main(){
//	int n,m;;
//	scanf("%d %d",&n,&m);		
//	nodes[0].nextid=1;			//0����һ���ڵ���1 
//	for(int i=1;i<=n;i++){			//�������� 
//		nodes[i].id=i;		 
//		nodes[i].preid=i-1;				//ǰ�ڵ� 
//		nodes[i].nextid=i+1;			//��ڵ� 
//	}
//	nodes[n].nextid=1;			//ѭ������βָ��ͷ 
//	nodes[1].preid=n;			//ѭ������ͷָ��β 
//	int now=1;					//�ӵ�һ����ʼ 
//	while((n--)>1){			
//		for(int i=1;i<m;i++)			
//		now = nodes[now].nextid;	//����m��ͣ�� 
//		printf("%d",nodes[now].id);		//��ӡ��������ո� 
//		int prev = nodes[now].preid,next=nodes[now].nextid;
//		nodes[prev].nextid=nodes[now].nextid;		//ɾ��now 
//		nodes[next].preid=nodes[now].preid;
//		now = next;			//�µĿ�ʼ 
//	}	
//	printf("%d",nodes[now].nextid);			//��ӡ���һ�������治���ո� 
//	return 0;
//}
//��һά����ʵ�ֵ���̬����
//#include<bits/stdc++.h>
//using namespace std;
//int nodes[150];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n-1;i++)
//	nodes[i]=i+1;		//nodes[i]��ֵ������һ���ڵ� 
//	nodes[n]=1;		//ѭ������βָ��ͷ 
//	int now=1,prev=1;	//�ӵ�һ���ڵ㿪ʼ
//	while((n--)>1){
//		for(int i=1;i<m;i++){			//����m��ͣ�� 
//			prev=now;   		//��һ�� 
//			now =nodes[now];	 
//		}
//		printf("%d",now);		//���ո�	
//		nodes[prev]=nodes[now];		// ����now�ڵ㣬ɾ��now 
//		now=nodes[prev];	//�µ�now�ڵ� 
//	} 
//	printf("%d",now);		//��ӡ���һ���������ո� 
//	return 0;
//} 

//�ṹ������ʵ�ֵ���̬����

//#include <bits/stdc++.h>                 
//const int N = 105;                       //���徲̬����Ŀռ��С
//struct node{                             //��������
//    int id, nextid;                      //����ָ��
//  //int data;                            //���б�Ҫ������һ�������������    
//}nodes[N];                               //������ȫ�ֵľ�̬����
//int main(){
//    int n, m;       scanf("%d%d", &n, &m);
//    nodes[0].nextid = 1;
//    for(int i=1;i<=n;i++){ nodes[i].id=i; nodes[i].nextid=i+1;}
//    nodes[n].nextid = 1;                 //ѭ������βָ��ͷ
//    int now = 1, prev = 1;               //�ӵ�1����ʼ
//    while((n--) >1){
//        for(int i=1;i<m;i++){ prev = now; now = nodes[now].nextid;} //����mͣ��            
//        printf("%d ", nodes[now].id);    //���ո��ӡ
//        nodes[prev].nextid = nodes[now].nextid;    //�������now����ɾ��now
//        now = nodes[prev].nextid;        //�µ�now
//    }    
//    printf("%d", nodes[now].nextid);     //��ӡ���һ�������治���ո�
//    return 0; 
//} 
//#include<bits/stdc++.h>
//using namespace std;
//int hash[1003]={0};		//�ù�ϣ�����ڴ�����û�е��ʣ�hash[i]=1����ʾ����i���ڴ��� 
//queue<int> mem;		//�ö���ģ���ڴ� 
//int main(){
//	int m,n;
//	scanf("%d%d",&m,&n);
//	int cnt=0;		//�鿴�ֵ���Ĵ��� 
//	while(n--){
//		int en;
//		scanf("%d",&en);
//		if(!hash[en]){
//			++cnt;
//			mem.push(en);		//��������У��ŵ�����β��
//			hash[en]=1;			//��¼�ڴ������������
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
////��ʼ������ 
//LinkList LinkListInit(){
//	Node *L;
//	L=(Node*)malloc(sizeof(Node));
//	if(L==NULL){
//		exit(0);
//	}
//	L->next=NULL;
//	return L;
//} 
////���� ��β�巨���������� 
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
////���룬������ĵ�i��λ�ò���x��Ԫ�� 
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
////ɾ������������ɾ��ֵΪx��Ԫ��
//LinkList LinkListdelete(LinkList L,int x){
//	Node* p,*pre;
//	p=L->next;
//	while(p->data!=x){
//		pre=p;
//		p=p->next;
//	}
//	pre->next=p->next;
//	//ɾ������ǰ���ڵ�ָ������
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
//		printf("��%d��Ԫ�ص�ֵΪ��%d\n",++i,p->data);
//		p=p->next;
//	}
//}
//int main(){
//	//���� 
//	LinkList list;
//	printf("��������뵥��������ݣ���EOF��β\n");
//	list = LinkListcreate();
//	printList(list); 
//	
//	//����
//	int i;
//	int x;
//	printf("������������ݵ�λ��:");
//	scanf("%d",&i);
//	printf("������������ݵ�ֵ:");
//	scanf("%d",&x);
//	LinkListInsert(list,i,x);
//	printList(list); 
//	
//	//�޸�
//	printf("�������޸ĵ�����:");
//	scanf("%d",&i);
//	printf("�������޸ĺ��ֵ:");
//	printf("%d",&x); 
//	LinkListReplace(list,i,x);
//	printList(list);
//	
//	//ɾ��
//	printf("������Ҫɾ����Ԫ�ص�ֵ:");
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
////������ 
//typedef struct stack{
//	int data[MAX];
//	int top;
//}stack;
////���� 
//stack *init{
//	stack* s=(stack *)malloc(sizeof(stack));
//	if(s=NULL){
//		printf("�����ڴ�ռ�ʧ��");
//		exit(0);
//	}
//	memset(s->data,0,sizeof(s->data));
//	//�������ռ���г�ʼ�� 
//	s->top=0;
//	return s;
//}
////��ջ
//void push(stack* s,int data){
//	s->data[s->top]=data;
//	s->top++;
//} 
////��ջ
//void pop(stack* s){
//	if(s->top!=0){
//		s->data[s->top]=0;	//����ع�0ģ���ʾδ��ʼ������ 
//		s->top--;
//	}
//} 
//void printstack(stack* s){
//	for(int n=s->top;n>=0;n--){
//		printf("%d\t",s->data[n]);
//	}
//	printf("\n");		//ϰ���Ի��� 
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
	
	//����ջ��Ԫ�� 
//	cout<<"S�洢Ԫ�ظ���"<<S.size()<<endl;
//	cout<<"s�洢Ԫ�ظ���"<<s.size()<<endl;
//	cout<<"s��ջ�洢Ԫ��"<<endl; 
//	while(!s.empty()){
//		cout<<s.top()<<endl;
//		s.pop();
//	
//	}
//	cout<<"S��ջ�洢Ԫ��"<<endl; 
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
////������
//typedef struct stack{
//    int data[maxn];
//    int top;
//}stack;
//  
////����
//stack *init(){
//    stack *s=(stack *)malloc(sizeof(stack));
//    if(s==NULL){
//        printf("�����ڴ�ռ�ʧ��");
//        exit(0);
//    }
//    memset(s->data,0,sizeof(s->data));
//    //memset���������ڿ��ļ�string.h�����ʾ�������ռ���г�ʼ��
//    //�������Բ��İٶȰٿ�https://baike.baidu.com/item/memset/4747579?fr=aladdin
//    s->top=0;     //ջ��top��bottom��Ϊ0����ʾΪ�գ�
//    return s;
//}
//  
////��ջpush
//void push(stack *s,int data){
//    s->data[s->top]=data;
//    s->top++;
//}
//  
////��ջpop
//void pop(stack *s){
//    if(s->top!=0){
//        s->data[s->top]=0;  //����ع�0ģ���ʾδ��ʼ������
//        s->top--;
//    }
//}
//  
////ģ���ӡջ��Ԫ��
//void print_stack(stack *s){
//    for(int n=s->top-1;n>=0;n--){
//        printf("%d\t",s->data[n]);
//    }
//    printf("\n");   //ϰ���Ի���
//}
//  
//int main(){
//    stack *s=init();
//    int input[5]={11,22,33,44,55};  //ģ�������������
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
////��дջ 
//struct mystack
//{
//    int a[ N ]; //���ջԪ�أ�int��
//    int t = 0;  //ջ��λ��
// 
//    void push ( int x ) //����ջ
//    {
//        a[ ++ t ] = x;
//    }
// 
//    int top ( ) //����ջ��Ԫ��
//    {
//        return a[ t ];
//    }
// 
//    void pop ( )    //����ջ��
//    {
//        -- t;
//    }
// 
//    int empty ( )   //���� 1 ��ʾ��
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
//            st.pop( );  //ջ��Ԫ��û�е�ǰ��ţ�ߣ�������
//        }
// 
//        if ( st.empty ( ) )
//        {
//            ans[ i ] = 0;   //ջ�գ�û����ţ�ȵ�ǰ��ţ��
//        }
//        else
//        {
//            ans[ i ] = st.top ( );  //ջ��Ԫ�رȵ�ǰ��ţ�ߣ�����������
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
//	int a[N];		//���ջԪ�� 
//	int t=0;		//ջ�� 
//	
//	void push(int x){		//����ջ 
//		a[++t]=x;
//	}
//	
//	int top(){
//		return a[t];
//	}
//	
//	void pop(){		//����ջ�� 
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
//			st.pop();		//ջ��Ԫ��û�е�ǰ��ţ�ߣ������� 
//		}
//		if(st.empty()){
//			ans[i]=0;	//ջ�գ�û����ţ�ȵ�ǰ��ţ�� 
//		}else{
//			ans[i]=st.top();		//ջ��Ԫ�رȵ�ǰ��ţ�ߣ����������� 
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
////��㶨�� 
//typedef struct node{
//	int data;
//	struct node* next;
//}node;
////���ж��壬���׺Ͷ�βָ�� 
//typedef struct queue{
//	node* front;
//	node* back;
//}queue;
////��ʼ����� 
//node *initnode(){
//	node* n=(node*)malloc(sizeof(node));
//	if(n==NULL){
//		exit(0);
//	}
//	return n;
//}
////��ʼ������ 
//queue *initqueue(){
//	queue* q=(queue*)malloc(sizeof(queue));
//	if(q==NULL){
//		exit(0);
//	}
//	n->front=NULL;
//	n->back=NULL;
//	return q;
//}
////�п� 
//int empty(queue* q){
//	if(q->front==NULL){
//		return 1;		//1��ʾ�棬˵�����зǿ� 
//	}else{
//		return 0;		//0��ʾ�ӣ�˵������Ϊ�� 
//	}
//}
////��Ӳ���
//void push(queue* q,int data){
//	node* n=initnode();
//	n->data=data;
//	n->next=NULL;		//����β���뷨
//	//if(q->back==NULL)
//	if(empty(q)){
//		q->front=n;
//		q->back=n;
//	} else{
//		q->back->next=n;		//n��Ϊ��ǰβ������һ���
//		q->back=n;		//��βָ��ָ��n 
//	}
//} 
////���Ӳ���
//void pop(queue* q){
//	node*n=initnode();
//	n=q->front;
//	if(empty(q)){
//		return;		//����Ϊ�գ�ֱ�ӷ��غ������� 
//	}
//	if(q->front==q->back){
//		q->front=NULL;	//ֻ��һ��Ԫ��ֱ�ӽ�����ָ��� 
//		q->back=NULL;
//	}else{
//		q->front=q->front->next;
//		free(n);
//	}
//} 
////��ӡ����Ԫ��
//void printqueue(queue* q){
//	node* n=initnode();
//	n=q->front;
//	if(empty(q)){
//		return;		//����Ϊ�գ�ֱ�ӷ��غ������� 
//	} 
//	while(n!=NULL){
//		printf("%d\t",n->data);
//		n=n->next;
//	}
//	printf("\n");
//} 
//int main(){
//	queue* q=initqueue();
//	printf("���\n";)
//	for(int i=1;i<=5;i++){
//		push(q,i);
//		printqueue(q);
//	}
//	printf("����\n");
//	for(int i=1;i<=5;i++){
//		pop(q);
//		printqueue(q);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
////��㶨��
//typedef struct node{
//    int data;
//    struct node *next;
//}node;
////���ж��壬����ָ��Ͷ�βָ��
//typedef struct queue{
//    node *front;
//    node *rear;
//}queue;
// 
////��ʼ�����
//node *init_node(){
//    node *n=(node*)malloc(sizeof(node));
//    if(n==NULL){    //����ʧ�ܣ��˳�
//        exit(0);
//    }
//    return n;
//}
// 
////��ʼ������
//queue *init_queue(){
//    queue *q=(queue*)malloc(sizeof(queue));
//    if(q==NULL){    //����ʧ�ܣ��˳�
//        exit(0);
//    }
//    //ͷβ������ֵNULL
//    q->front=NULL;  
//    q->rear=NULL;
//    return q;
//}
// 
////�����п�
//int empty(queue *q){
//    if(q->front==NULL){
//        return 1;   //1--��ʾ�棬˵�����зǿ�
//    }else{
//        return 0;   //0--��ʾ�٣�˵������Ϊ��
//    }
//}
// 
////��Ӳ���
//void push(queue *q,int data){
//    node *n =init_node();
//    n->data=data;
//    n->next=NULL;   //����β���뷨
//    //if(q->rear==NULL){  
//    if(empty(q)){
//        q->front=n;
//        q->rear=n;
//    }else{
//        q->rear->next=n;    //n��Ϊ��ǰβ������һ���
//        q->rear=n;  //��βָ��ָ��n
//    }
//}
// 
////���Ӳ���
//void pop(queue *q){
//    node *n=q->front;
//    if(empty(q)){
//        return ;    //��ʱ����Ϊ�գ�ֱ�ӷ��غ�������
//    }
//    if(q->front==q->rear){
//        q->front=NULL;  //ֻ��һ��Ԫ��ʱֱ�ӽ�����ָ���ƿռ���
//        q->rear=NULL;
//        free(n);        //�ǵù黹�ڴ�ռ�
//    }else{
//        q->front=q->front->next;
//        free(n);
//    }
//}
// 
////��ӡ����Ԫ��
//void print_queue(queue *q){
//    node *n = init_node();
//    n=q->front;
//    if(empty(q)){
//        return ;    //��ʱ����Ϊ�գ�ֱ�ӷ��غ�������
//    }
//    while (n!=NULL)
//    {
//        printf("%d\t",n->data);
//        n=n->next;
//    }
//    printf("\n");   //�ǵû���
//}
// 
////���������ã�����ֻ�Ǽ򵥽����÷�
//int main(){
//    queue *q=init_queue();
//    ///////////////��Ӳ���/////////////////
//    printf("���\n");
//    for(int i=1;i<=5;i++){
//        push(q,i);
//        print_queue(q);
//    }
//    ///////////////���Ӳ���/////////////////
//    printf("����\n");
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
//		//��һ��Ԫ�ص����� 
//		cout<<myqueue.back()<<endl;
//		//���һ��Ԫ�ص����� 
//		myqueue.pop();
//		//ɾ��queue�ĵ�һ��Ԫ�� 
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
//	cout<<"�����С"<<myvector.size()<<endl;
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

