#include<bits/stdc++.h>
using namespace std;
//需要引入algorithm头文件 并加上using namespace std
	/*
		max()、min()、abs()
		swap()
		reverse()
		next_permutation()
		fill()
		sort()
		lower_bound()和upper_bound
	*/
//					max(x,y)	min(x,y)
//分别返回x,y中		最大值		最小值 
//返回三个数最大值	max(x,(y,z))

//	abs(x)
//返回x的绝对值(x必须是整数)
//浮点数用math头文件下的fabs

 
//int main()
//{
//	int x = -1;
//	int y = -2;
//	printf("%d %d\n", max(x, y), min(x, y));//输出-1 -2
//	printf("%d %d\n", abs(x), abs(y));//输出1 2
//	return 0;
//}

//swap(x,y)
//交换x,y的值
/*
int x = 10;
	int y = 20;
	swap(x, y);
	printf("%d %d\n", x, y);//输出20 10
*/

//reverse() 
//reverse(it,it2),可以将数组指针在[it,it2)
//之间的元素或容器的迭代器在[it,it2)范围内的元素进行反转


//int main()
//{
//	int arr[10] = { 10,11,12,13,14,15 };
//	reverse(arr, arr + 4);//将arr[0]~arr[3]反转
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);//输出13,12,11,10,14,15
//	}
// 
//	return 0;
//}

//next_permutation()
//next_permutation()给出一个序列在全排列中的下一个序列
/*

例如，当n == 3 时的全排列为：
123
132
213
231
312
321

这样231的下一个序列就是312
*/

//使用do...while语句而不使用while语句是因为序列1 2 3本身也需要输出，
//如果使用while会直接跳到下一个序列再输出，这样的话结果会少一个123
//int main()
//{
//	int a[10] = { 1,2,3 };
//	//a[0]~a[2]之间的序列需要求解next_permutation
//	do
//	{
//		printf("%d%d%d\n", a[0], a[1], a[2]);
//	} while (next_permutation(a, a + 3));
//	return 0;
//}

//fill()
//fill()可以把数组或容器中某一段区间赋值给一个相同的值，
//和memset 不同，这里的赋值可以是数组类型对应范围中的任意值

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	fill(a, a + 5, 133);//将a[0]~a[4]均赋值为133
////	fill(a,a+5,a[4]);
//	//第三个参数可以是数组内任意的值 
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);//输出133 133 133 133 133
//	}
//	return 0;
//}

//sort()
//sort(首元素地址（必填），尾元素地址的下一个地址（必填），比较函数（非必填）);
//在STL标志容器中，只有vectr,string,queue是可以使用sort的
//因为像set、map这种容器是用红黑树实现的，元素本身就有序 
//bool cmp(int x,int y){
//	return x>y;
//	//可以理解为当x>y时把x方在y前面 
//}
//int main(){
//	int a[5]={1,6,3,2,8};
//	//从小到大排序
//	sort(a,a+5);
//	for(int i=0;i<5;i++){
//	printf("%d",a[i]); 
//	}
//	printf("\n");
//	sort(a,a+5,cmp);
//	//从大到小排序
//	//区别是要定义一个bool型的函数 
//	for(int i=0;i<5;i++){
//	printf("%d",a[i]); 
//	}
//	return 0;
//}

//lower_bound()和upper_bound()

//lower_bound(first,last,val)用来寻找数组或容器的[first,last)范围
//内第一个大于等于val元素的位置,如果是数组，则范围该位置的指针,
//如果是容器，则返回该位置的迭代器

//upper_bound(first,last,val)用来寻找在数组或容器的[first, last)范围内
//第一个值大于val 的元素的位置,如果是数组,则返回该位置的指针；
//如果是容器，则返回该位置的迭代器。


int main()
{
	int a[10] = { 1,2,3,4,5,7,9 };
	//寻找-1
	int* lowerPos = lower_bound(a, a + 10, 5);
	int* upperPos = upper_bound(a, a + 10, 5);
	printf("%d %d\n", lowerPos-a, upperPos-a);//输出0 0
// 
//	//寻找1
//	lowerPos = lower_bound(a, a + 10, 1);
//	upperPos = upper_bound(a, a + 10, 1);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//输出0 1
// 
//	//寻找3
//	lowerPos = lower_bound(a, a + 10, 3);
//	upperPos = upper_bound(a, a + 10, 3);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//输出3 6
// 
//	//寻找4
//	lowerPos = lower_bound(a, a + 10, 4);
//	upperPos = upper_bound(a, a + 10, 4);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//输出6 6
// 
//	//寻找6
//	lowerPos = lower_bound(a, a + 10, 6);
//	upperPos = upper_bound(a, a + 10, 6);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//输出10 10
	return 0;
}

//指针 - 指针  = 两指针之间的元素个数

 
//int main()
//{
//	int a[10] = { 1,2,2,3,3,3,5,5,5,5 };
//	//寻找3
//	printf("%d %d\n", lower_bound(a, a + 10, 3) - a, upper_bound(a, a + 10, 3) - a);//输出3 6
//	return 0;
//}
