//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	double t;
//	int n;
//	cin>>t>>n;
//	int amount = 2*n;
//	double need = t/(double)n;
//	printf("%0.3lf\n",need);
//	printf("%d",amount);
//	return 0;
//} 

//��ѧ�ٵ�


//˼�룺���ܻ���ǰ������������ǰʱ�䲻�ᳬ��һ��
//�Ǿ��ж��������������ѵ�ʱ��n=n+24*60;
//Ȼ����t=ceil(s/v)+10�õ�����ʱ�䣬Ȼ��n=n-t�ó�ʣ��ʱ��,if(n>=24*60)n-=24*60; 
//		����ȡ��������c++�߼�������ȡ����������ʱ���� 		�ж��Ƿ���ǰһ�� 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int s,v;
//	cin>>s>>v;
//	int n=8*60+24*60;
//	int t=ceil(s*1.0/v)+10;
//	//			s��v��Ҫ����1.0������s/v�Ľ�����ǻᱻ����ȡ�� 
//	n-=t;
//	if(n>=24*60)
//		n-=24*60;
//	int h=n/60;	//����ʱ 
//	int f=n%60;	//������
//	if(f<10){
//		if(h<10){
//			cout<<"0"<<h<<":"<<"0"<<f;
//		}else{
//			cout<<h<<":"<<"0"<<f;
//		}
//	}else{
//		if(h<10)
//		cout<<"0"<<h<<":"<<f;
//		else
//		cout<<h<<":"<<f;
//	}
//	
//	return 0;
//}
