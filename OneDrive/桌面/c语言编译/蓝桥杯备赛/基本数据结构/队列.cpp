//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//	int m;
//	cin>>m;
//	queue<string> V,N; //������������V��N��������
//	
//	while(m--){
//		string op;
//		cin>>op;
//		if(op=="IN")//������˽�����IN�� 
//		{
//			string name,win;
//			cin>>name>>win;//��������name�ʹ���V/N
//		if(win=="V")
//		V.push(name);		//�����vip���ڣ��Ͳ���һ��name
//		else N.push(name);	//�������ͨ���ڣ��Ͳ�����ͨ������
//		}
//		else //������˳�ȥout
//		{
//			string win;
//			cin>>win;		//��ȡ�ַ���
//			if(win=="V")
//			V.pop();	//�����VIP���ڵ��ˣ��͵�������Ԫ��
//			else N.pop();	//����͵�����ͨ���ڵĶ���Ԫ��
//		}
//	} 
//		//while()�ڵ�ֵ�����Ϊ0�������ѭ����Ϊ0������ѭ��
//		while(V.size()){
//			cout<<V.front()<<'\n';
//			V.pop();
//		} 
//		while(N.size()){
//			cout<<N.front()<<'\n';
//			N.pop();
//		}
//	
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//  int m;cin >> m ;  //��ȡһ��mֵ
//  queue<string> V,N;  //������������V��N��������
//
//
//  while(m --)  //
//  {
//    string op;cin >> op;
//
//      if(op == "IN")  //������˽�����IN��
//      {
//        string name,win;cin >> name >> win;  //��������name�ʹ���V/N
//       if(win =="V")V.push(name);  //�����VIP���ڣ��Ͳ���һ��name
//       else N.push(name);  //�������ͨ���ڣ��Ͳ�����ͨ������
//      }
//
//      else  //������˳�ȥOUT
//      {
//        string win;cin >> win;  //��ȡ�ַ���q
//        if(win == "V")V.pop();  //�����VIP���ڵ��ˣ��Ǿ͵�������Ԫ��
//       else N.pop();  //����͵�����ͨ���ڵĶ���Ԫ��
//      }
//  }
//
//    //while()�ڵ�ֵ�����Ϊ0�������ѭ����Ϊ0������ѭ��
//  while(V.size())  //���V���Ƿ���Ԫ�أ������Ԫ��ִ������Ĳ���
//  {
//    cout << V.front() << '\n';  //�������Ԫ��
//    V.pop();  //ɾ������Ԫ��
//  }
//
//  while(N.size())
//  {
//    cout << N.front() << '\n';
//    N.pop();
//  }
//
//  return 0;
//}

//#include <iostream>
//using namespace std;
//int L[100005];
//int W[100005];
//int main()
//{
//    int N,K;
//    cin>>N>>K;
//    for(int i = 1; i <= N; i++)
//        cin>>L[i]>>W[i];
//    int i = 10000;
//    while(true)
//    {
//        int sum = 0, num1, num2;
//        for(int j = 1; j <= N; j++)
//        {
//            num1 = L[j] / i;
//            num2 = W[j] / i;
//            sum += num1 * num2;
//        }
//        if(sum >= K)
//            break;
//        i--;
//    }
//    cout<<i;
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int count=0,i=1,flag=0;
//	while(count<108){
//		count+=i;
//		i=i+2;
//		flag++;
//	}
//	cout<<flag;
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int sum=0;
//	for(int i=1;i<=5;i++){
//		sum=
//	}
//	return 0;
//}
