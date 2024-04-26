//回文串 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string s;
//	cin>>s;
//	int start=0;
//	int end=s.length()-1;
//	bool is =true;
//	while(start<end){
//		if(s[end]==s[start]){
//			end--;
//			start++;
//		}else{
//			is=false;
//		}
//	}
//	printf(is?"Y":"N");
//	return 0;
//}

//
//#include<bits/stdc++.h>
//using namespace std;
//int buildnext(char *s2){
//	int m=strlen(s2),j=0;
//	int * n=new int[m];
//	int t=n[0]=-1;
//	while(j<m-1){
//		if(0>t||s2[j]==s2[t]){
//			n[++j]=++t;
//		}else{
//			t=n[t];
//		}
//	}
//	return n;
//}
//int KMP(char s1[],char s2[]){
//	int* next=buildnext(s2);
//	int n=strlen(s1),i=0;
//	int m=strlen(s2),j=0;
//	while(j<m&&i<n){
//		if(j<0||s1[i]==s2[j]){
//			i++;
//			j++;
//		}else{
//			j=next[j];
//		}
//	}
//	delete[]next;
//	
//}
//int main(){
//	string str1,str2;
//	cin>>str1>>str2;
//	KMP(str1,str2);
//	return 0;
//}


#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
  
int *buildNext(char *P){
    int m = strlen(P) , j=0;
    int * N = new int[m];
    int t = N[0] = -1;
    while( j < m-1 ){
        if( 0 > t || P[j] == P[t] ){
            N[++j] = ++t;
        }
        else{
            t = N[t];
        }
    }
    return N;
}
  
int KMP(char T[],char P[]){ //T--主串,P--模式串
    int *next = buildNext(P);   //构造NEXT表
    int n = strlen(T) , i=0;
    int m = strlen(P) , j=0;
    while( j<m && i<n ){
        if( j<0 || T[i]==P[j] ){
            i++;
            j++;
        }else{
            j = next[j];
        }
         
    }
    delete []next;
    return i-j;
}
  
int main(){
  
    char org[] = "ABABABABABD";
    char str[] = "ABABD";
    int ans = KMP(org,str);
    cout << ans <<endl;
  
    return 0;
}
