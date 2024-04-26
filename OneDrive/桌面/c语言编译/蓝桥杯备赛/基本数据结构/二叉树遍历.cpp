//#include<bits/stdc++.h>
//using namespace std;
//int test(){
//	List<Integer> preorderTraverse(TreeNode root){
//		List<Integer> res = new LinkedList<>();
//		if(root==null){
//			return res;
//		}
//	}
//	res.add(root.val);
//	res.addALL(preorderTraverse(root.left));
//	res.addaLL(preorderTraverse(root.left));
//	return res;
//}
//int main(){
//	test();
//}
//别名 
#include<bits/stdc++.h>
using namespace std;
typedef struct treenode{
	char data;
	struct treenode* L;
	struct treenode* R;
}TREE,*LPTREE;
//别名中lp一般表示指针别名 

LPTREE createnode(char data){
	LPTREE newnode=(LPTREE)malloc(sizeof(TREE));
	newnode->data = data;
	newnode->L=NULL;
	newnode->R=NULL;
	return newnode;
}

void insertnode(LPTREE parentnode, LPTREE L, LPTREE R){
	parentnode->L=L;
	parentnode->R=R;
}
//打印当前节点中的元素
void printcurnodedata(LPTREE curdata){
	printf("%c\t",curdata->data);
} 
//递归法遍历:
//先序：根 左 右
void preorder(LPTREE root){
	if(root!=NULL){
		printcurnodedata(root);
		preorder(root->L);
		preorder(root->R);
	}
} 
//中序遍历 
void midorder(LPTREE root){
	if(root!=NULL){
		midorder(root->L);
		printcurnodedata(root);
		midorder(root->R);
	}
} 
//后序遍历 
void latterorder(LPTREE root){
	if(root!=NULL){
		latterorder(root->L);
		latterorder(root->R);
		printcurnodedata(root);
	}
} 
//非递归的方式打印链表	先序 
/*
	//外部循环条件  什么时候不做这件事， 
	1，栈里面没有路径可以退 treetop!=-1
	2，当前节点不等于空  pmove 
	首先准备栈  存储 栈顶指针 
	先序 根 左 右 
	先从根节点开始就要入栈并打印，因为是先序遍历
	然后一直往左边走，直到L为空，
	(往左边走需要做两件事：
	1、需要把路径入栈	2、打印走过的节点) 
	stack[++treetap] 		printf
	treetap需要先自增，=>treetap=0表明将存储的第一个路径
	while(pmove)只要他的左孩子不指向空就一直存储打印，直到pmove为null，
	不再满足条件，也就是节点指向空为止无路可走 ，
	就要出栈，出栈之前需要判断栈不为空
	if（treetop！=-1）  => 栈不为空
	然后获取栈顶元素，再出栈， 
	然后判断是否存在右节点，然后转到右边节点 
	//把一次的过程打完之后，套用在循环内部就行了 
*/
void preorderbystack(LPTREE root){
	if(root==NULL){
		return;
	}
	//准备栈 
	struct treenode* stack[10];	//存储每次打印节点的元素 
	int treetop=-1; 	//栈顶标记 
	
	LPTREE pmove=root;
	while(treetop!=-1||pmove){
		//先序 根 左 右
		while(pmove){
			//把路径入栈+打印走过的节点
			printf("%c\t",pmove->data); //打印节点
			stack[++treetop]=pmove;
			pmove=pmove->L; 
		} 
		//无路可走的处理  
		if(treetop!=-1){
			pmove=stack[treetop];	//获取栈顶元素 
			treetop--;				//出栈
			pmove=pmove->R; 
		}
	}
} 
//中序遍历非递归	
/*
	中序： 左 根 右 
	1、先打印最左边，也就需要定义一个指针，移动到最左边，把走过的地方入栈 
	2、无路可走的时候 ，出栈，打印当前节点中的元素
	3、出栈后，打印当前节点元素，判断当前节点是否存在右边，如果存在就去右边 
*/ 
void midorderbystack(LPTREE root){
	if(root==NULL){
		return;
	}
	struct treenode* stack[10];
	int treetop=-1;
	LPTREE pmove=root;
	while(treetop!=-1||pmove){
		while(pmove!=NULL){
			stack[++treetop]=pmove;
			pmove=pmove->L;
		}
		if(treetop!=-1){
			pmove=stack[treetop--]; 	//获取栈顶元素 			
			printf("%c\t",pmove->data);
			pmove=pmove->R;
		}
	}
}
int main(){
	
	//死板创建过程，无实际应用 
	LPTREE A=createnode('A');	
	LPTREE B=createnode('B');
	LPTREE C=createnode('C');
	LPTREE D=createnode('D');
	LPTREE E=createnode('E');
	LPTREE F=createnode('F');
	LPTREE G=createnode('G');
	
	insertnode(A,B,C);
	insertnode(B,D,NULL);
	insertnode(D,NULL,G);
	insertnode(C,E,F);
	printf("先序遍历：\n");
	preorder(A);
	printf("\n");
	preorderbystack(A);
	printf("\n");
	printf("中序遍历：\n");
	midorder(A);
	printf("\n");
	midorderbystack(A);
	printf("\n");
	printf("后序遍历：\n");
	latterorder(A);
	
	return 0;
}
