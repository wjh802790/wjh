//���׼�������Ŀ 
#include<iostream>
using namespace std;


//�������� 
double add(double firstnum,double secondnum);
double sub(double firstnum,double secondnum);
double mul(double firstnum,double secondnum);
double div(double firstnum,double secondnum);


int main(){
	double firstnum=0,secondnum=0;
	char character;
	//����������
	printf("������������:"); 
	scanf("%lf %lf",&firstnum,&secondnum);
	getchar();
	printf("�����������(+,-,*,/):");
	scanf("%c",&character);

	if(character=='+'){
		//������� 
		cout<<firstnum<<"+"<<secondnum<<"="<<add(firstnum,secondnum);
	}else if(character=='-'){
		//������� 
		cout<<firstnum<<"-"<<secondnum<<"="<<sub(firstnum,secondnum);
	}else if(character=='*'){
		//��˻� 
		cout<<firstnum<<"*"<<secondnum<<"="<<mul(firstnum,secondnum);
	}else if(character=='/'){
		//����� 
		if(secondnum!=0.0){
			cout<<firstnum<<"/"<<secondnum<<"="<<div(firstnum,secondnum);
		}else{
			cout<<" ��������Ϊ0"; 
		}
	}else{
		printf("��������!");
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
		printf("��������Ϊ0");
		return 0;
	} 
	return firstnum/secondnum;
}




