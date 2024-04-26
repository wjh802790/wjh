//vector定义 set 
//vector<typename> name;
//typename 依然可以是任何基本类型，
//例如int, double, char, 结构体等。
//或者是STL标准容器，
//例如vector, set, queue等。
//如果typename 是一个STL容器，
//那么定义是要记得在>>符号之间加上空格
//vector<int> name;
//vector<double> name;
//vector<char> name;
//vector<node> name;
//node是结构体的类型

//vector<vector<int> > name;
//注意哦，>>之间要加上空格
//这样的话，很容易联想到二维数组的定义，即元素类型是一维数组的数组。
//那么vector数组也是一样，即Arrayname[ ]中的每一个元素都是一个vector。
//初学者可以把vector数组当作两个维都可以变长的二维数组理解。
//vector<typename> Arrayname[arraySize];
//例如：vector<int> vi[100]; 
//这样Arrayname[0]~Arrayname[arraySize - 1]中每一个都是一个vector容器。
//与vector<vector<int> > name不同的是，
//这种写法的一维长度已经固定为arraySize,
//另一维才是“变长”的（注意体会着两种写法的区别哦

//vector容器内元素的访问
//(1).通过下标访问 
//定义：vector<typename> vi
//(2).通过迭代器访问
//迭代器(iterator)可以理解为一种类似指针的东西，其定义是：
//vector<typename>::iterator it;

//vector常用函数解析
/* 	push_back()		//push_back(x) 就是在vector后面添加一个元素x,时间复杂度为O(1)
	pop_back()		//pop_back()用以删除vector的尾元素，时间复杂度为O(1)
	size()			//size()用来获得vector中元素的个数，时间复杂度为O(1)
	clear()			//clear()用来清空vector中的所有元素，时间复杂度为O(n)
	insert()		//insert(it, x) 用来向vector的任意迭代器it处插入一个元素x, 时间复杂度为O(n)
						插入的元素后面会自动后移 
	erase()			//1.删除单个元素：erase(it) 即删除迭代器为it 处的元素
	*/ 				//删除一个区间内的所有元素，erase(first, last), 
					//即删除[first, last)内的所有元素,注意哦，
					//删除vector中的所有元素，但是不包括last
					//更方便的清空vector的方法是使用vi.clear()
//void myprint(int val){
//	printf("%d",val);
//}
//int main(){
//	int n;
//	cin>>n;
//	vector<int> vi;
//	for(int i=1;i<=n;i++){
//		vi.push_back(i);
//	}
	//利用专门的遍历算法
//	for_each(vi.begin(),vi.end(),myprint); 
	//for循环
//	for(vector<int>::iterator it=vi.begin();it!=vi.end();it++){
//		printf("%d",*it);
//	} 
	//while循环 
//	vector<int>::iterator it=vi.begin();
//	vector<int>::iterator is=vi.end();
//	while(it!=is){
//		//vector的迭代器不支持it<vi.end(),因此循环条件只能用it!=vi.end()<=>is 
//		printf("%d",*(it));
//		it++;
//	}
//	for(int i=0;i<n;i++){
//		printf("%d",*(it + i));
//	}
//	return 0;
	//vi[i] 和 *(vi.begin()+i)是等价的 
	//只不过这里it作为了vi容器首元素的指针 
//} 

//set 常见用法详解 

//set最主要的作用是自动去重并按升序排序，
//因此当我们碰到去重但是不方便直接开数组的情况，可以尝试用set解决。 

//set容器内元素的访问
//注意哦，set只能通过迭代器（iterator）访问：
//set<typename>::iterator it;

//例如 
//set<int>::iterator:: it;
//set<char>::iterator it;
//并且可以通过*it 来访问set 里的元素。

//但由于除了vector 和 string 之外的STL容器都不支持*(it + i) 的访问方式，
//因此只能按如下方式枚举：
//int main()
//{
//	set<int> st;
//	st.insert(3);//insert(x)将x插入set中
//	st.insert(5);
//	st.insert(2);
//	st.insert(3);
// 
//	//注意，不支持it < st.end()的写法
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		printf("%d ", *it);//输出2 3 5
//	}
//	return 0;
//}
//可以发现，set内的元素自动递增排序，且自动去除了重复元素

//set常用函数分析
//insert()
//insert(x),将x插入set容器中，并自动递增排序和去重，时间复杂度为O(logN)
//find()
//find(value), 返回set中对应值为value的迭代器，时间复杂度为O(logN)
//erase()
//1.删除单个元素：删除单个元素也有两种方法
	//方法一：st.erase(it), it为所需要删除元素的迭代器。
		//时间复杂度为O(1)。结合find()函数来使用
			//st.erase(st.find(100)); //利用find()函数找到100，然后用erase()删除它
			//st.erase(st.find(200));//利用find()函数找到200，然后用erase()删除它
	//st.erase(value), value为所需要删除元素的值。
		//时间复杂度为O(logn)
			//st.erase(100);
//2.删除一个区间内的所有元素:时间复杂度为O(last - first)
	//st.erase(first, last)可以删除一个区间内的所有元素
		//删除set区间的所有元素，但是不包括last 
//size()	//返回set中的元素个数 

//clear() 	//清空set中的元素 

//int main()
//{
//	set<int> st;
//	st.insert(100);
//	st.insert(200);
//	st.insert(100);
//	st.insert(300);
// 	
//	st.erase(st.find(100));//利用find()函数找到100，然后用erase()删除它
//	st.erase(st.find(200));//利用find()函数找到200，然后用erase()删除它
// 	
//	st.erase(100);	//删除set中值为100的数 
// 	
// 	set<int>::iterator it = st.find(300);
//	st.erase(it, st.end());//删除元素300至末尾之间的元素，即30和40
//	
//	printf("%d\n", st.size());
//	//获得set内的元素个数 
//	
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		printf("%d\n", *it);
//		
//	}
//	
//	st.clear();//清空set
//	printf("%d\n", st.size());//输出0
//	
//	return 0;
//}

