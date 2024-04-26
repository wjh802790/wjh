//#include<math.h>
//常用的数学函数	引用头文件#include<math.h> 
//最常用 
	//fabs() //求浮点数的绝对值 fabs(x)
	//pow()	//求x的y次方	pow(x,y)
	//sqrt()//求平方根 sqrt(x) 
//一般常用
	//floor()//求浮点数x的最大整数值	floor(x)
	//ceil()//求不小于x的最小整数 	ceil(x)
	//round()//求x四舍五入后的整数值	round(x) 
	
//#include<string.h>
//strlen()	//strlen()函数可以得到字符数组中第一个\0之前的字符的个数

//strcmp()	//strcmp()函数返回两个字符串大小的比较结果，比较原则是按字典序,
			// 例如"a" 的字典序小于"b"、"aaaa" 的字典序小于"aab"
//strcpy()	strcpy()函数可以把一个字符串复制给另一个字符串
//strcpy(字符数组1，字符数组2);

//strcat()	//strcat()可以把一个字符串拼接到另一个字符串的后面
//strcat(字符数组1， 字符数组2)；
//注意哦，是把字符数组2拼接到字符数组1的后面 
//int main(){
//	char s1[50]={"hello"};
//	char s2[50]={"nice to meet you"};
//	printf("字符串大小分别是:\n");
//	printf("%d %d\n",strlen(s1),strlen(s2));
//	int a = strcmp(s1,s2);
	//若：s1<s2 返回负整数
	// 若：s1==s2 返回0
	//若：s1>s2 返回正整数 
//	printf("字符串比较结果:\n");
//	printf("%d\n",a);
//	strcpy(s1,s2);
//	printf("%s",s1);
	//将s1原本的元素清除掉,然后把s2的元素复制过来,
	//这里的复制包括结束标志'\0',前提是数组够大 
//	strcpy(s2,s1);
//	printf("%s",s2);
	//将s2原本的元素清除掉，然后把s1的元素复制过来，
	//这里的复制包括结束标志'\0',前提是数组够大
//	strcat(s1,s2);
//	printf("%s",s1); 
//	printf("%s",s2); 
//将s2拼接到s1后面，s2相当于全部被截取走了 
//	
//	return 0;
//}

