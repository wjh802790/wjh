//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n,m;
//	cin>>n>>m;
//	int count1=0,count2=0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			if(i=j){
//				count1+=(n-i)*(n-j);
//			}else{
//				count2+=(n-i)*(n-j);
//			}
//		}
//	}
//	cout<<count1<<" "<<count2;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//long long n,m,rec,sqr;
//int main() {
//    cin>>n>>m;
//    for(int i=0; i<n; i++)//ѭ������n-0��n-(n-1)
//        for(int j=0; j<m; j++) {//ѭ������m-0��m-(m-1)
//            if(i==j) sqr+=(n-i)*(m-j);//���i==j��˵����������
//            else rec+=(n-i)*(m-j);//�������˵���Ǿ���
//        }
//    cout<<sqr<<" "<<rec<<endl;//���
//    return 0;
//}

//���� ���ݷ�
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int n,ans1,ans2[10001][11],sum,a[11];
//void trys(int t,int m)//t����ǰ�ĳ��Եĵ��ϡ�m����ǰ��ζ�̶�
//{
//    if (t>10) 
//    {
//        if (m==n) //�����ζ�̶��������Ҫ����� 
//        {
//            ans1++;//ͳ�Ʒ������� 
//            for (int i=1;i<=10;i++)
//            ans2[ans1][i]=a[i];//����𰸵����� 
//        }
//        return ;
//    }
//    for (int i=1;i<=3;i++)
//    {
//        if (m+i>n) break;//���������Ҫ����ô����ľͿ���ֱ�Ӻ��� 
//        a[t]=i;//����� 
//        trys(t+1,m+i);//�鿴��һ�ֵ��� 
//        a[t]=0;//״̬�ָ� 
//    }
//}
//int main()
//{
//    cin>>n;
//    trys(1,0);//�ӵ�һ�ֵ��Ͽ�ʼ���ԣ���ζ�̶�Ϊ0 
//    cout<<ans1<<endl;
//    for (int i=1;i<=ans1;i++)
//    {
//        for (int j=1;j<=10;j++)
//            cout<<ans2[i][j]<<" ";
//        cout<<endl;
//    }//������ 
//    return 0;
//} 
//���нⷨ
//#include <queue>
////�����Ƕ��б���Ҫ���ϵ�ͷ�ļ�
//#include <cstdio>
//using namespace std;
//queue<int>qwq[4];
////<��Ҫʹ�õ�����>���һ���Ϸ�������
////�������������ͣ�������Ϊ����ʹ�ã�
//int main()
//{
//	int n,input;
//    char ch;
//    cin>>n;
//    for (int i=1;i<=n;i++)
//    	cin>>ch>>input;
//        qwq[ch-'A'].push(input);
//        //������������ѹ�����
//    while (!qwq[0].empty())
//    	cout<<qwq.front();qwq.pop();
//        //���������������������ĵ�һ��Ԫ�أ�Ȼ�󵯳���
//    //ֱ��qwq[0]��û��Ԫ��
//    return 0;
// }
//#include<iostream>
//using namespace std;
//int s,t,n;
//int a[11];
//int b[10000][11];//һ����ά���飬�ȳ���������������ѽ
//int c=1;
//int num;
//void ss(int k);
//void pp();
//int main() {
//	cin>>n;
//	ss(1);
//	cout<<num<<endl;
//	for(int i=1; i<c; i++) {
//		for(int j=1; j<=10; j++) {
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}
//void ss(int k) {
//	for(int i=1; i<=3; i++)//ÿ��ֻ�ܼ�1,��2��3 {
//		s+=i;
//		a[k]=i;
//		if(k==10) {
//			if(s==n)pp();
//		} else ss(k+1);
//		s-=i;//����
//	}
//}
//void pp() {
//	num++;
//	for(int i=1; i<=10; i++)
//		b[c][i]=a[i];//������
//	c++;
//} 





