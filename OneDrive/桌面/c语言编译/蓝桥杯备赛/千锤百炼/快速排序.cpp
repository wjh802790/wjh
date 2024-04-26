/*
	快速排序：分治思想
	数组a[] 
	1，找打分界点 a[l],a[l+r>>1],a[r],或者其他
	2,递归子问题
	3,  


*/ 
//时间复杂度 O(nlogn) 空间复杂度O(nlogn) 
//#include<bits/stdc++.h>
//using namespace std;
//#define endl '\n'
//#define long long ll
//const int N = 1e7+10;  
//int a[N],s[N];
//int n;
//void quick_sort(int a[],int l,int r){
//	if(l>=r)return;
//	int i=l-1,j=r+1,x=a[l+r>>1];
//	while(i<j){
//		do i++ ; while(a[i]<x);
//		do j-- ; while(a[j]>x);
//		if(i<j) swap(a[i],a[j]);
//	} 
//	quick_sort(a,l,j);
//	quick_sort(a,j+1,r);
//}
//int main(){
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	quick_sort(a,0,n-1);
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//	
//	return 0;
//} 


//#include <iostream>
//
//using namespace std;
//
//const int N = 1000010;
//
//int q[N];
//
//void quick_sort(int q[], int l, int r)
//{
//    if (l >= r) return;
//
//    int i = l - 1, j = r + 1, x = q[l + r >> 1];
//    while (i < j)
//    {
//        do i ++ ; while (q[i] < x);
//        do j -- ; while (q[j] > x);
//        if (i < j) swap(q[i], q[j]);
//    }
//
//    quick_sort(q, l, j);
//    quick_sort(q, j + 1, r);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i ++ ) scanf("%d", &q[i]);
//
//    quick_sort(q, 0, n - 1);
//
//    for (int i = 0; i < n; i ++ ) printf("%d ", q[i]);
//
//    return 0;
//}

