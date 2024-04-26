//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 1e8 + 10;
//int n, Min = MAXN, Max = 0, sum[MAXN];
//bool f[45];
//vector<int> bucket[45];//定义桶，这里定义40个桶
//void insertsort(int s) {
//    for (int i = 0;i < bucket[s].size(); i++)
//        for (int j = i;j >= 1; j--) if(bucket[s][j - 1] > bucket[s][j]) swap(bucket[s][j], bucket[s][j - 1]);//这里是从小到大排序
//    for (int i = 0;i < bucket[s].size(); i++) printf("%d ", bucket[s][i]); //由于每个桶都是有序的，所以可以输出这个桶，节省了一次遍历的时间
//}
//void bucketsort() {
//    for (int i = 1;i <= n; i++)
//        bucket[int((sum[i] - Min) / ((Max - Min + 1) / 40.0))].push_back(sum[i]), f[int((sum[i] - Min) / ((Max - Min + 1) / 40.0))] = 1;//运用最大最小值来合理分配桶
//    for (int i = 0;i <= 40; i++) if(f[i]) insertsort(i); //如果当前桶有数值，则对桶内的数进行排序（这里用选择排序）
//}
//int main() {
//    scanf("%d", &n);
//    for (int i = 1;i <= n; i++) {
//        scanf("%d", &sum[i]);
//        Min = min(Min, sum[i]), Max = max(Max, sum[i]); //为了能够合理利用空间，确保第一个桶和最后一个桶都有数，所以存储最大最小值
//    }
//    bucketsort();
//    return 0; 
//}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[10050];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,t;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>t;
		a[t]++;	
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=a[i];++j){
			cout<<i<<" ";
		}
	}
//	for(int i=1;i<=10000;i++){
//		if(a[i]){
//			cout<<i<<" "<<a[i]<<" ";
//		}
//	}
	return 0;
}

