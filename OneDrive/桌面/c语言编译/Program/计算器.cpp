//简易计算器项目 
#include<iostream>
using namespace std;


//函数声明 
double add(double firstnum,double secondnum);
double sub(double firstnum,double secondnum);
double mul(double firstnum,double secondnum);
double div(double firstnum,double secondnum);


int main(){
	double firstnum=0,secondnum=0;
	char character;
	//输入两个数
	printf("请输入两个数:"); 
	scanf("%lf %lf",&firstnum,&secondnum);
	getchar();
	printf("请输入运算符(+,-,*,/):");
	scanf("%c",&character);

	if(character=='+'){
		//求和运算 
		cout<<firstnum<<"+"<<secondnum<<"="<<add(firstnum,secondnum);
	}else if(character=='-'){
		//求差运算 
		cout<<firstnum<<"-"<<secondnum<<"="<<sub(firstnum,secondnum);
	}else if(character=='*'){
		//求乘积 
		cout<<firstnum<<"*"<<secondnum<<"="<<mul(firstnum,secondnum);
	}else if(character=='/'){
		//求除法 
		if(secondnum!=0.0){
			cout<<firstnum<<"/"<<secondnum<<"="<<div(firstnum,secondnum);
		}else{
			cout<<" 除数不能为0"; 
		}
	}else{
		printf("输入有误!");
	}
	return 0;
} 


double add(double firstnum,double secondnum){
	return firstnum+secondnum;
}
double sub(double firstnum,double secondnum){
	return firstnum-secondnum;
}
double mul(double firstnum,double secondnum){
	return firstnum*secondnum;
}
double div(double firstnum,double secondnum){
	if(secondnum==0){
		printf("除数不能为0");
		return 0;
	} 
	return firstnum/secondnum;
}




