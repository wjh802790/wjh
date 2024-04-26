//#include<string>
//在C语言中，一般使用字符数组char str[ ] 来存放字符串，
//但是使用字符数组有时会显得操作麻烦，而且容易因经验不足产生错误，得不偿失。
//为了使编程者可以更方便的对字符串进行操作，C++在STL中加入了string类型

//定义 
	//定义string的方式跟基本数据类型相同，只需要在string后面跟上变量名即可
	// 如果要初始化，可以直接给string类型的变量进行赋值：
//内容的访问
//如果是初始化后的变量，可以直接像字符数组一样去访问
/* string str = "abcd";
	for (int i = 0; i < str.length(); i++)
	{
		printf("%c ", str[i]);//输出a b c d
	}
*/

//但如果是要读入和输出整个字符串，只能用cin和cout 
/*string str;
	cin >> str;
	cout << str;
	*/ 
	
//通过迭代器访问
//(有些函数比如insert()与erase()则要求以迭代器为参数)
//string不像其他STL容器那样需要参数，因此可以直接入下定义：

//string::iterator it;
/*
string str = "abcd";
	for (string::iterator it = str.begin(); it != str.end(); it++)
	{
		printf("%c ", *it);//输出a b c d
*/
//string和vector一样，
//支持直接对迭代器进行加减某个数字，如str.begin() + 3的写法是可行的
//string 常用函数分析
	//(operator) '+',string可以直接用 + 将两个string拼接起来  
	// str3 = str1 + str2;//将str1和str2拼接，赋值给str3
	//str1 = str1 + str2;//将str2直接拼接到str1上
	
	// ==,!=,<=,<,>,>=。两个string可以直接使用这些操作符比较大小 
	
	//.length() / size() 
	//length()返回string的长度,即存放的字符数,
	//时间复杂度为O(1),size()与length()类似
	
	//.insert()  
	//1.insert(pos, string), 在pos号位置插入一个字符串string
	//2.insert(it, it2, it3), it 为原字符串的欲插入位置，
	//it2 和 it3 为待插字符串的首尾迭代器，
	//用来表示串[it2, it3)将被插在it 的位置上
	/*
	string str = "abcxyz", str2 = "opq";//str为原字符串，str2为待插字符串
	//在str的3号位（即c和x之间）插入str2
	str.insert(str.begin() + 3, str2.begin(), str2.end());
	cout << str << endl;//输出abcopqxyz
	*/
	
	//.erase()	
	//1、删除单个元素：str.erase(it) 用于删除单个元素，it为需要删除的元素的迭代器
	/*
	string str = "abcdefg";
	str.erase(str.begin() + 4);//删除4号位（即e）
	cout << str << endl;//输出abcdfg
	*/
	//2.删除一个区间内的所有元素：有两种方法：
	
	//一、str.erase(first, last), 
	//其中first为需要删除的区间的起始迭代器，
	//而last为需要删除的区间的末尾迭代器的下一个地址，即为删除[first, last)
	/*
	string str = "abcdefg";
	//删除在[str.begin() + 2, str.end() - 1)内的元素，即cdef
	str.erase(str.begin() + 2, str.end() - 1);
	cout << str << endl;//输出abg
	*/
	
	//二、str.erase(pos, length),
	//其中pos为需要开始删除的起始位置，length为删除的字符个数
	/*
	string str = "abcdefg";
	str.erase(3, 2);//删除de
	cout << str << endl;//输出abcfg
	*/
	
	//.erase() 清空string中的数据,时间复杂度为O(1)
	
	//.substr()
	// substr(pos, len) 返回从pos号位开始、长度为len的子串，时间复杂度为O(len)
		

	//.find()
	/*
	str.find(str2) 当str2 是str 的子串时，
	返回其在str 中第一次出现的位置，如果str2 不是str 的子串，
	那么返回string::npos
	str.find(str2, pos), 从str 的pos 号位开始匹配str2，
	返回值与上相同。
	时间复杂度为O(M*N)，M和N 分别是str2 和str的长度
	*/
	
	//.replace()
	//str.replace(pos,len,str2)
	// 把str 从pos 号位开始、长度为len 的子串替换为上str2

	//str.replace(it1,it2,str2)
	// 把str 的迭代器[it1, it2)范围的子串替换为str2

//#include<bits/stdc++.h>
//using namespace std;
//bool is(string s,string t){
//	vector<int> num1;
//	vector<int> num2;
//	for(int i=0;i<s.size();i++){
//		num1.push_back(s[i]);
//	}
//	for(int i=0;i<t.size();i++){
//		num2.push_back(t[i]);
//	}
//	sort(num1.begin(),num1.end());
//	sort(num2.begin(),num2.end());
//
//	
//	for(int i=0;i<26;i++){
//		if(num1[i]!=num2[i]){
//			return false;
//		}
//	}
//	return true;
//}
//int main(){
//	string s,t;
//	cin>>s>>t;
//	is(s,t);
//	printf(is(s,t)?"true":"false");
//	return 0;
//}

//#include <iostream>
// 
//using namespace std;
// 
//string s1,s2;
//int a[1000];
//int b[1000];
//int c[1001];
// 
//int main()
//{
//    cin >>s1 >>s2;
//    int la=s1.length();
//    int lb=s2.length();
// 
//    for (int i=0;i<la;i++)
//    {
//        a[la-i] = s1[i] - '0';    //转化接收
//    }
//    for (int i=0;i<lb;i++)
//    {
//        b[lb-i] = s2[i] - '0';
//    }
// 
//    int lc = max(la,lb)+1;       //c数组的长度
//    for (int i=1;i<=lc;i++)
//    {
//        c[i] += a[i] + b[i];     //核心代码
//        c[i+1] = c[i]/10;
//        c[i] = c[i]%10;
//    }
// 
//    if (c[lc]==0 && lc>0) lc--;  //消除前置0
//    for (int i=lc;i>0;i--)
//    {
//        cout <<c[i];
//    }
//    return 0;
//}


//#include <iostream>
//#include <string>
// 
//using namespace std;
// 
//string s1,s2;
//string s3;
//bool flag=0;
// 
//int a[10100],b[10100],c[10100];
// 
//bool comp(string a,string b)
//{
//    int la=a.length();
//    int lb=b.length();
//    if (la!=lb) return la>lb;
//    else
//    {
//        for (int i=0;i<la;i++)
//        {
//            if (a[i]!=b[i])
//            {
//                return a[i]>b[i];
//                break;
//            }
//        }
//    }
//}
// 
//int main()
//{
//    cin >>s1 >>s2;
//    if (!comp(s1,s2))
//    {
//        s3=s1;
//        s1=s2;
//        s2=s3;
//        flag=1;                 //若换位则改变 flag
//    }
// 
// 
//    int la=s1.length();
//    int lb=s2.length();
//    for (int i=0;i<la;i++)
//    {
//        a[la-i]=s1[i]-'0';
//    }
//    for (int i=0;i<lb;i++)
//    {
//        b[lb-i]=s2[i]-'0';
//    }
//    int lc=max(la,lb);          //与加法不同 c 数组的长度最多是 a，b中较长那个
//    for (int i=1;i<=lc;i++)
//    {
//        if (a[i]<b[i])          //借位判断
//        {
//            a[i+1]--;           //不够则向上位借1
//            a[i]+=10;           //本位+10
//        }
//        c[i]=a[i]-b[i];
//    }
// 
//    while (c[lc]==0&&lc>1) lc--;  //消除前置0，方法与高精加略有不同
//    if(lc==1&&c[0]==0) flag=0;    //相减为0的情况下不输出 - 号
//    if(flag) cout <<"-";
// 
//    for (int i=lc;i>0;i--)
//    {
//        cout <<c[i];
//    }
// 
//    return 0;
//}

/*=========================================
 
高精乘
 
核心算法：（列式计算中找出的规律）
 
c[i+j-1] += a[i] * b[j];
 
c[i+j] += c[i+j-1]/10;
 
c[i+j-1] %= 10 ;
 
==========================================*/
 
//#include <iostream>
//#include <string>
 
//using namespace std;
// 
//string s1,s2;
//int a[2008],b[2008],c[2008];
// 
//int main()
//{
//    int la,lb,lc;
//    cin >>s1 >>s2;
//    la=s1.length();
//    lb=s2.length();
// 
//    for (int i=0;i<la;i++)
//    {
//        a[la-i]=s1[i]-'0';
//    }
//    for (int i=0;i<lb;i++)
//    {
//        b[lb-i]=s2[i]-'0';
//    }
//    lc=la+lb;                          //c 数组的位数不会超过其和
//    for (int i=1;i<=la;i++)
//    {
//        for (int j=1;j<=lb;j++)
//        {
//            c[i+j-1] += a[i]*b[j];     //核心算法
//            c[i+j] += c[i+j-1]/10;     //进位
//            c[i+j-1] %= 10;            //留位
//        }
//    }
//    if (c[lc]==0&&lc>0) lc--;          //消除前置零
//    for (int i=lc;i>0;i--)
//    {
//        cout <<c[i];
//    }
//    return 0;
//}

