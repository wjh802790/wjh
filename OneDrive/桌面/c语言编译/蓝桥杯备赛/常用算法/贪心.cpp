//晴问
//最优装箱 
//#include<bits/stdc++.h>
//using namespace std;
//int a[1000000] ;
//int main(){
//	int n,max;  //数组内存过大,定义在main函数里面运行不了 
//	//操作系统会分配不同的内存区域来运行代码，
//	//如果数组在main函数里面定义且开辟比较大，那么就会爆出，程序会无法访问内存而出现运行错误 
//	cin>>n>>max;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	int count=0,flag=0;
//	for(int i=0;i<n;i++){
//
//		if(count+a[i]<=max){
//			flag++;
//			count+=a[i];
//		} else{
//			break;
//		}
//	}
//	cout<<flag<<" "<<count;
//	return 0;
//} 

//整数配对
//#include<bits/stdc++.h>
//using namespace std;
//int a[10001],b[10001];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<m;i++){
//		cin>>b[i];
//	}
//	sort(a,a+n);
//	sort(b,b+m);
//	int flag=0;
//	int i = 0,j=0;
//	while (i < n && j < m) {			//用while 
//        if (a[i] <= b[j]) {
//            flag++;
//            i++;
//            j++;
//        } else {
//            j++;
//        }
//    }
////	for(int i=0;i<n;i++){
////		for(int j=0;j<m;j++){	
////			if(a[i]<=b[j]){
////				flag++;
//////				a[i]=0;			//不能将a[i],b[i]的值改变， 
//////				b[j]=0;
////			}
////		}
////	}
//	cout<<flag<<endl;
//	return 0;
//} 

//最大组合数 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int a[10],n=10;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	bool is = true;
//	for(int i=n-1;i>=0;i--){
//		if(i>0&&a[i]>0){
//			is = false;
//		
//		}
//		if(!is){
//			for(int j=0;j<a[i];j++){
//				cout<<i;
//			}
//		}
//	}
//	if(is){
//		cout<<"0";
//	}
//	return 0;
//	
//}
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int MAXN = 10;    // 0~9最多10个数字
//int cnt[MAXN];          // 存放0~9中每个数字的个数
//int main() {
//    for (int i = 0; i < MAXN; i++) {    // 输入0~9中每个数字的个数
//        scanf("%d", &cnt[i]);
//    }
//    bool isZero = true;                 // 结果是否0
//    for (int i = MAXN - 1; i >= 0; i--) {    // 从9开始输出，一直到0
//        if (i > 0 && cnt[i] > 0) {           // 如果1~9中存在大于0的个数
//            isZero = false;                  // 那么结果一定不是0
//        }
//        if (!isZero) {                       // 只要结果不是0
//            for (int j = 0; j < cnt[i]; j++) { // 输出cnt[i]次当前数字i
//                printf("%d", i);
//            }
//        }
//    }
//    if (isZero) {           // 如果结果是0，那么单独输出一个0
//        printf("0");
//    }
//    return 0;
//}
//区间不相交问题
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,a[1001][1001];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i][i];
//	}
//一开始思路就没想好，这里的左右区间，可以不用二维数组去写，直接自定义结构体数组就可以解决 
	
//} 
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int MAXN = 10000;
//struct Interval {    // 区间结构体定义
//    int l, r;
//} interval[MAXN];    // 区间数组
//
//bool cmp(Interval a, Interval b) {    // 区间的比较函数
//    if (a.l != b.l) {                 // 如果左端点不同，那么按左端点从大到小
//        return a.l > b.l;
//    } else {                          // 否则，按右端点从小到大
//        return a.r < b.r;
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {         // 输入n个区间的左右端点
//        scanf("%d%d", &interval[i].l, &interval[i].r);
//    }
//    sort(interval, interval + n, cmp);    // 将区间数组进行排序
//    int num = 1, lastL = interval[0].l;   // 排序后的第一个区间总是被选中
//    for (int i = 1; i < n; i++) {         // 遍历剩余的区间
//        if (interval[i].r <= lastL) {     // 如果和上一个选中的区间不相交
//            lastL = interval[i].l;        // 那么选中当前区间
//            num++;                        // 并令选中的区间数量加1
//        }
//    }
//    printf("%d", num);                    // 输出选中的区间数量
//    return 0;
//}
 //区间选点问题
//#include<bits/stdc++.h>
//using namespace std;
//struct qj{
//	int l,r;
//}a[10001];
//bool cmp(a a,a b){
//	if(a.l!=b.l){
//		return a.l>b.l;
//	}else{
//		return a.r<b.r;
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i].l>>a[i].r;
//	}
//	sort(a,a+n,cmp);
//	int num = 1,lastl = a[0].l;
//	for(int i=1;i<n;i++){
//		if(a[i].r<lastl){
//			lastl = a[i].l;
//			num++;
//		}
//	}
//	cout<<num<<endl;
//	return 0;
//}
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int MAXN = 10000;
//struct Interval {    // 区间结构体定义
//    int l, r;
//} interval[MAXN];    // 区间数组
//
//bool cmp(Interval a, Interval b) {    // 区间的比较函数
//    if (a.l != b.l) {                 // 如果左端点不同，那么按左端点从大到小
//        return a.l > b.l;
//    } else {                          // 否则，按右端点从小到大
//        return a.r < b.r;
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {         // 输入n个区间的左右端点
//        scanf("%d%d", &interval[i].l, &interval[i].r);
//    }
//    sort(interval, interval + n, cmp);    // 将区间数组进行排序
//    int num = 1, lastL = interval[0].l;   // 排序后的第一个区间的左端点总是被选中
//    for (int i = 1; i < n; i++) {         // 遍历剩余的区间
//        if (interval[i].r < lastL) {      // 如果和上一个选中的区间不相交（注意此处是闭区间，所以不能取到等号）
//            lastL = interval[i].l;        // 那么选中当前区间的左端点
//            num++;                        // 并令选中的点的数量加1
//        }
//    }
//    printf("%d", num);                    // 输出选中的点数量
//    return 0;
//}
//拼接最小数
//#include<bits/stdc++.h>
//using namespace std;
//int a[100000001];
//void cmp(string a,string b){
//	return a + b < b + a;
//}
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n,cmp);
//	string result="";
//	for(int i=0;i<n;i++){
//		result+=a[i];
//	}
//	while(result.length()>1 && result[0]=='0'){
//		result.erase(result.begin());
//	}
//	cout<<result<<endl;
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//const int MAXN = 10000;
//string nums[MAXN];
//
//bool cmp(string a, string b) {
//    return a + b < b + a;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> nums[i];
//    }
//    sort(nums, nums + n, cmp);
//    string result = "";
//    for (int i = 0; i < n; i++) {
//        result += nums[i];
//    }
//    while (result.length() > 1 && result[0] == '0') {
//        result.erase(result.begin());
//    }
//    cout << result << endl;
//    return 0;
//}
