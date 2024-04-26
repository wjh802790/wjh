//#include<bits/stdc++.h>
//Status ListInsert(SqList *L,int,Elem Type e){
//	int k;
//	if(L->length==MAXSIZE)
//	return ERROR;
//	if(i<1 || i->length+1)
//	return ERROR;
//	if(i<=L->length){
//		for(k=L->length-1;k>=i-1;k--)
//		L->data[k+1]=L->data[k];
//	}
//	L->data[i-1]=e;
//	L->length++;
//	
//	return OK;
//}
//#include<bits/stdc++.h>
//void CreateListHead(LinkList *L, int n){
//	LinkList p;
//	int i;
//	srand(time(0));
//	*L=(LinkList)malloc(sizeof(Node));
//	(*L)->next = NULL;
//	for(i=0;i<n;i++){
//		p = (LinkList)malloc(sizeof(Node));
//		p->data = rand()%100+1;
//		p->next=(*L)->next;
//		(*L)->next = p;
//	}
//}
