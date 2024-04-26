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
//    for(int i=0; i<n; i++)//循环，从n-0到n-(n-1)
//        for(int j=0; j<m; j++) {//循环，从m-0到m-(m-1)
//            if(i==j) sqr+=(n-i)*(m-j);//如果i==j，说明是正方形
//            else rec+=(n-i)*(m-j);//如果不等说明是矩形
//        }
//    cout<<sqr<<" "<<rec<<endl;//输出
//    return 0;
//}

//烤鸡 回溯法
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int n,ans1,ans2[10001][11],sum,a[11];
//void trys(int t,int m)//t代表当前的尝试的调料。m代表当前美味程度
//{
//    if (t>10) 
//    {
//        if (m==n) //如果美味程度与猪猪的要求相等 
//        {
//            ans1++;//统计方案总数 
//            for (int i=1;i<=10;i++)
//            ans2[ans1][i]=a[i];//存入答案的数组 
//        }
//        return ;
//    }
//    for (int i=1;i<=3;i++)
//    {
//        if (m+i>n) break;//如果超过了要求，那么后面的就可以直接忽略 
//        a[t]=i;//储存答案 
//        trys(t+1,m+i);//查看下一种调料 
//        a[t]=0;//状态恢复 
//    }
//}
//int main()
//{
//    cin>>n;
//    trys(1,0);//从第一种调料开始尝试，美味程度为0 
//    cout<<ans1<<endl;
//    for (int i=1;i<=ans1;i++)
//    {
//        for (int j=1;j<=10;j++)
//            cout<<ans2[i][j]<<" ";
//        cout<<endl;
//    }//输出结果 
//    return 0;
//} 
//队列解法
//#include <queue>
////以上是队列必须要加上的头文件
//#include <cstdio>
//using namespace std;
//queue<int>qwq[4];
////<你要使用的类型>随便一个合法的名字
////队列是数据类型，可以作为数组使用！
//int main()
//{
//	int n,input;
//    char ch;
//    cin>>n;
//    for (int i=1;i<=n;i++)
//    	cin>>ch>>input;
//        qwq[ch-'A'].push(input);
//        //操作：将数据压入队列
//    while (!qwq[0].empty())
//    	cout<<qwq.front();qwq.pop();
//        //操作：输出队列最先输入的第一个元素，然后弹出它
//    //直到qwq[0]内没有元素
//    return 0;
// }
//#include<iostream>
//using namespace std;
//int s,t,n;
//int a[11];
//int b[10000][11];//一个二维数组，先出方案总数很难做呀
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
//	for(int i=1; i<=3; i++)//每个只能加1,或2或3 {
//		s+=i;
//		a[k]=i;
//		if(k==10) {
//			if(s==n)pp();
//		} else ss(k+1);
//		s-=i;//回溯
//	}
//}
//void pp() {
//	num++;
//	for(int i=1; i<=10; i++)
//		b[c][i]=a[i];//存数组
//	c++;
//} 





