//#include<bits/stdc++.h>
//using namespace std;
#include<stdio.h>
typedef struct LNode{	//���嵥���������� 
	int data;			//�����򣬿����Ǳ�ĸ����������� 
	struct LNode *next;	//ָ���� 
};
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
