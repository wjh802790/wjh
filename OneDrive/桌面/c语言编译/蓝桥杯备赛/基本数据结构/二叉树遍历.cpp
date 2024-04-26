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
//���� 
#include<bits/stdc++.h>
using namespace std;
typedef struct treenode{
	char data;
	struct treenode* L;
	struct treenode* R;
}TREE,*LPTREE;
//������lpһ���ʾָ����� 

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
//��ӡ��ǰ�ڵ��е�Ԫ��
void printcurnodedata(LPTREE curdata){
	printf("%c\t",curdata->data);
} 
//�ݹ鷨����:
//���򣺸� �� ��
void preorder(LPTREE root){
	if(root!=NULL){
		printcurnodedata(root);
		preorder(root->L);
		preorder(root->R);
	}
} 
//������� 
void midorder(LPTREE root){
	if(root!=NULL){
		midorder(root->L);
		printcurnodedata(root);
		midorder(root->R);
	}
} 
//������� 
void latterorder(LPTREE root){
	if(root!=NULL){
		latterorder(root->L);
		latterorder(root->R);
		printcurnodedata(root);
	}
} 
//�ǵݹ�ķ�ʽ��ӡ����	���� 
/*
	//�ⲿѭ������  ʲôʱ��������£� 
	1��ջ����û��·�������� treetop!=-1
	2����ǰ�ڵ㲻���ڿ�  pmove 
	����׼��ջ  �洢 ջ��ָ�� 
	���� �� �� �� 
	�ȴӸ��ڵ㿪ʼ��Ҫ��ջ����ӡ����Ϊ���������
	Ȼ��һֱ������ߣ�ֱ��LΪ�գ�
	(���������Ҫ�������£�
	1����Ҫ��·����ջ	2����ӡ�߹��Ľڵ�) 
	stack[++treetap] 		printf
	treetap��Ҫ��������=>treetap=0�������洢�ĵ�һ��·��
	while(pmove)ֻҪ�������Ӳ�ָ��վ�һֱ�洢��ӡ��ֱ��pmoveΪnull��
	��������������Ҳ���ǽڵ�ָ���Ϊֹ��·���� ��
	��Ҫ��ջ����ջ֮ǰ��Ҫ�ж�ջ��Ϊ��
	if��treetop��=-1��  => ջ��Ϊ��
	Ȼ���ȡջ��Ԫ�أ��ٳ�ջ�� 
	Ȼ���ж��Ƿ�����ҽڵ㣬Ȼ��ת���ұ߽ڵ� 
	//��һ�εĹ��̴���֮��������ѭ���ڲ������� 
*/
void preorderbystack(LPTREE root){
	if(root==NULL){
		return;
	}
	//׼��ջ 
	struct treenode* stack[10];	//�洢ÿ�δ�ӡ�ڵ��Ԫ�� 
	int treetop=-1; 	//ջ����� 
	
	LPTREE pmove=root;
	while(treetop!=-1||pmove){
		//���� �� �� ��
		while(pmove){
			//��·����ջ+��ӡ�߹��Ľڵ�
			printf("%c\t",pmove->data); //��ӡ�ڵ�
			stack[++treetop]=pmove;
			pmove=pmove->L; 
		} 
		//��·���ߵĴ���  
		if(treetop!=-1){
			pmove=stack[treetop];	//��ȡջ��Ԫ�� 
			treetop--;				//��ջ
			pmove=pmove->R; 
		}
	}
} 
//��������ǵݹ�	
/*
	���� �� �� �� 
	1���ȴ�ӡ����ߣ�Ҳ����Ҫ����һ��ָ�룬�ƶ�������ߣ����߹��ĵط���ջ 
	2����·���ߵ�ʱ�� ����ջ����ӡ��ǰ�ڵ��е�Ԫ��
	3����ջ�󣬴�ӡ��ǰ�ڵ�Ԫ�أ��жϵ�ǰ�ڵ��Ƿ�����ұߣ�������ھ�ȥ�ұ� 
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
			pmove=stack[treetop--]; 	//��ȡջ��Ԫ�� 			
			printf("%c\t",pmove->data);
			pmove=pmove->R;
		}
	}
}
int main(){
	
	//���崴�����̣���ʵ��Ӧ�� 
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
	printf("���������\n");
	preorder(A);
	printf("\n");
	preorderbystack(A);
	printf("\n");
	printf("���������\n");
	midorder(A);
	printf("\n");
	midorderbystack(A);
	printf("\n");
	printf("���������\n");
	latterorder(A);
	
	return 0;
}
