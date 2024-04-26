//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//	int m;
//	cin>>m;
//	queue<string> V,N; //创建两个队列V和N两个窗口
//	
//	while(m--){
//		string op;
//		cin>>op;
//		if(op=="IN")//如果有人进来（IN） 
//		{
//			string name,win;
//			cin>>name>>win;//读入它的name和窗口V/N
//		if(win=="V")
//		V.push(name);		//如果是vip窗口，就插入一个name
//		else N.push(name);	//如果是普通窗口，就插在普通窗口里
//		}
//		else //如果有人出去out
//		{
//			string win;
//			cin>>win;		//读取字符串
//			if(win=="V")
//			V.pop();	//如果是VIP窗口的人，就弹出队首元素
//			else N.pop();	//否则就弹出普通窗口的队首元素
//		}
//	} 
//		//while()内的值如果不为0，则进行循环，为0则跳出循环
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
//  int m;cin >> m ;  //读取一个m值
//  queue<string> V,N;  //创建两个队列V和N两个窗口
//
//
//  while(m --)  //
//  {
//    string op;cin >> op;
//
//      if(op == "IN")  //如果有人进来（IN）
//      {
//        string name,win;cin >> name >> win;  //读入他的name和窗口V/N
//       if(win =="V")V.push(name);  //如果是VIP窗口，就插入一个name
//       else N.push(name);  //如果是普通窗口，就插在普通窗口里
//      }
//
//      else  //如果有人出去OUT
//      {
//        string win;cin >> win;  //读取字符串q
//        if(win == "V")V.pop();  //如果是VIP窗口的人，那就弹出队首元素
//       else N.pop();  //否则就弹出普通窗口的队首元素
//      }
//  }
//
//    //while()内的值如果不为0，则进行循环，为0则跳出循环
//  while(V.size())  //检查V中是否有元素，如果有元素执行下面的操作
//  {
//    cout << V.front() << '\n';  //输出队首元素
//    V.pop();  //删除队首元素
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
