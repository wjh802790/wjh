//#include<bits/stdc++.h>
//using namespace std;

//queue翻译为队列,在STL中主要是实现一个先进先出的容器
//当需要实现广度优先搜索时，可以不用自己手动实现一个队列，
//而是用queue代替，以提高程序的准确性。
//#include<queue> 并加上using namespace std
//1、定义
	//queue<typename> name;
	 
//2、queue容器内元素的访问 
	//由于queue是一种先进先出的结构，因此只能通过
	//front()来访问队首元素，或者通过back()来访问队尾元素
	

//	int main()
//	{		
//		queue<int> q;
//		for (int i = 1; i <= 5; i++)
//		{
//			q.push(i);//push(i)用以将i压入队列，因此依次入队1 2 3 4 5 
//		}
//		printf("%d %d\n", q.front(), q.back());//输出结果为1 5
//		return 0;
//	}

//3、queue常用函数解析
		//push()	push(x)将x进行入队	o(1) 
		//front()	获得队首元素 	o(1)
		//back()	获得队尾元素 	o(1)
		//pop()		令队首元素出队 o(1)
		//empty()	检测queue是否为空 o(1)
		//size()	返回queue内元素的个数 o(1) 

//stack翻译为栈，是STL中实现一个先进后出的容器,
//stack 用来模拟实现一些递归，防止程序对栈内存的限制而导致程序运行出错
//#include<stack> 并加上using namespace std 
//1、定义
	//stack<typename> name;

//2、stack容器内元素的访问
	//由于栈是一种先进后出的结构,因此只能通过
	//top()来访问栈顶元素 
//	int main()
//{
//	stack<int> st;
//	for (int i = 1; i <= 5; i++)
//	{
//		st.push(i);//依次入栈1 2 3 4 5
//	}
//	printf("%d\n", st.top());//输出5
//	return 0;
//} 

//3、stack常用函数解析
		//.push() 	入栈 
		//.top()	获得栈顶元素 
		//.pop()	出栈 
		//.empty()
		//.size()
		 
		  
