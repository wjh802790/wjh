#include<bits/stdc++.h>
using namespace std;
//��Ҫ����algorithmͷ�ļ� ������using namespace std
	/*
		max()��min()��abs()
		swap()
		reverse()
		next_permutation()
		fill()
		sort()
		lower_bound()��upper_bound
	*/
//					max(x,y)	min(x,y)
//�ֱ𷵻�x,y��		���ֵ		��Сֵ 
//�������������ֵ	max(x,(y,z))

//	abs(x)
//����x�ľ���ֵ(x����������)
//��������mathͷ�ļ��µ�fabs

 
//int main()
//{
//	int x = -1;
//	int y = -2;
//	printf("%d %d\n", max(x, y), min(x, y));//���-1 -2
//	printf("%d %d\n", abs(x), abs(y));//���1 2
//	return 0;
//}

//swap(x,y)
//����x,y��ֵ
/*
int x = 10;
	int y = 20;
	swap(x, y);
	printf("%d %d\n", x, y);//���20 10
*/

//reverse() 
//reverse(it,it2),���Խ�����ָ����[it,it2)
//֮���Ԫ�ػ������ĵ�������[it,it2)��Χ�ڵ�Ԫ�ؽ��з�ת


//int main()
//{
//	int arr[10] = { 10,11,12,13,14,15 };
//	reverse(arr, arr + 4);//��arr[0]~arr[3]��ת
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);//���13,12,11,10,14,15
//	}
// 
//	return 0;
//}

//next_permutation()
//next_permutation()����һ��������ȫ�����е���һ������
/*

���磬��n == 3 ʱ��ȫ����Ϊ��
123
132
213
231
312
321

����231����һ�����о���312
*/

//ʹ��do...while������ʹ��while�������Ϊ����1 2 3����Ҳ��Ҫ�����
//���ʹ��while��ֱ��������һ������������������Ļ��������һ��123
//int main()
//{
//	int a[10] = { 1,2,3 };
//	//a[0]~a[2]֮���������Ҫ���next_permutation
//	do
//	{
//		printf("%d%d%d\n", a[0], a[1], a[2]);
//	} while (next_permutation(a, a + 3));
//	return 0;
//}

//fill()
//fill()���԰������������ĳһ�����丳ֵ��һ����ͬ��ֵ��
//��memset ��ͬ������ĸ�ֵ�������������Ͷ�Ӧ��Χ�е�����ֵ

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	fill(a, a + 5, 133);//��a[0]~a[4]����ֵΪ133
////	fill(a,a+5,a[4]);
//	//���������������������������ֵ 
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);//���133 133 133 133 133
//	}
//	return 0;
//}

//sort()
//sort(��Ԫ�ص�ַ�������βԪ�ص�ַ����һ����ַ��������ȽϺ������Ǳ��);
//��STL��־�����У�ֻ��vectr,string,queue�ǿ���ʹ��sort��
//��Ϊ��set��map�����������ú����ʵ�ֵģ�Ԫ�ر�������� 
//bool cmp(int x,int y){
//	return x>y;
//	//�������Ϊ��x>yʱ��x����yǰ�� 
//}
//int main(){
//	int a[5]={1,6,3,2,8};
//	//��С��������
//	sort(a,a+5);
//	for(int i=0;i<5;i++){
//	printf("%d",a[i]); 
//	}
//	printf("\n");
//	sort(a,a+5,cmp);
//	//�Ӵ�С����
//	//������Ҫ����һ��bool�͵ĺ��� 
//	for(int i=0;i<5;i++){
//	printf("%d",a[i]); 
//	}
//	return 0;
//}

//lower_bound()��upper_bound()

//lower_bound(first,last,val)����Ѱ�������������[first,last)��Χ
//�ڵ�һ�����ڵ���valԪ�ص�λ��,��������飬��Χ��λ�õ�ָ��,
//������������򷵻ظ�λ�õĵ�����

//upper_bound(first,last,val)����Ѱ���������������[first, last)��Χ��
//��һ��ֵ����val ��Ԫ�ص�λ��,���������,�򷵻ظ�λ�õ�ָ�룻
//������������򷵻ظ�λ�õĵ�������


int main()
{
	int a[10] = { 1,2,3,4,5,7,9 };
	//Ѱ��-1
	int* lowerPos = lower_bound(a, a + 10, 5);
	int* upperPos = upper_bound(a, a + 10, 5);
	printf("%d %d\n", lowerPos-a, upperPos-a);//���0 0
// 
//	//Ѱ��1
//	lowerPos = lower_bound(a, a + 10, 1);
//	upperPos = upper_bound(a, a + 10, 1);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//���0 1
// 
//	//Ѱ��3
//	lowerPos = lower_bound(a, a + 10, 3);
//	upperPos = upper_bound(a, a + 10, 3);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//���3 6
// 
//	//Ѱ��4
//	lowerPos = lower_bound(a, a + 10, 4);
//	upperPos = upper_bound(a, a + 10, 4);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//���6 6
// 
//	//Ѱ��6
//	lowerPos = lower_bound(a, a + 10, 6);
//	upperPos = upper_bound(a, a + 10, 6);
//	printf("%d %d\n", lowerPos - a, upperPos - a);//���10 10
	return 0;
}

//ָ�� - ָ��  = ��ָ��֮���Ԫ�ظ���

 
//int main()
//{
//	int a[10] = { 1,2,2,3,3,3,5,5,5,5 };
//	//Ѱ��3
//	printf("%d %d\n", lower_bound(a, a + 10, 3) - a, upper_bound(a, a + 10, 3) - a);//���3 6
//	return 0;
//}
