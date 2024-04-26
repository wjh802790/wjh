//#include<bits/stdc++.h>
//using namespace std;
#include<stdio.h>
typedef struct LNode{	//定义单链表结点类型 
	int data;			//数据域，可以是别的各种数据类型 
	struct LNode *next;	//指针域 
};
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
