//����
//����װ�� 
//#include<bits/stdc++.h>
//using namespace std;
//int a[1000000] ;
//int main(){
//	int n,max;  //�����ڴ����,������main�����������в��� 
//	//����ϵͳ����䲻ͬ���ڴ����������д��룬
//	//���������main�������涨���ҿ��ٱȽϴ���ô�ͻᱬ����������޷������ڴ���������д��� 
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

//�������
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
//	while (i < n && j < m) {			//��while 
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
//////				a[i]=0;			//���ܽ�a[i],b[i]��ֵ�ı䣬 
//////				b[j]=0;
////			}
////		}
////	}
//	cout<<flag<<endl;
//	return 0;
//} 

//�������� 
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
//const int MAXN = 10;    // 0~9���10������
//int cnt[MAXN];          // ���0~9��ÿ�����ֵĸ���
//int main() {
//    for (int i = 0; i < MAXN; i++) {    // ����0~9��ÿ�����ֵĸ���
//        scanf("%d", &cnt[i]);
//    }
//    bool isZero = true;                 // ����Ƿ�0
//    for (int i = MAXN - 1; i >= 0; i--) {    // ��9��ʼ�����һֱ��0
//        if (i > 0 && cnt[i] > 0) {           // ���1~9�д��ڴ���0�ĸ���
//            isZero = false;                  // ��ô���һ������0
//        }
//        if (!isZero) {                       // ֻҪ�������0
//            for (int j = 0; j < cnt[i]; j++) { // ���cnt[i]�ε�ǰ����i
//                printf("%d", i);
//            }
//        }
//    }
//    if (isZero) {           // ��������0����ô�������һ��0
//        printf("0");
//    }
//    return 0;
//}
//���䲻�ཻ����
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,a[1001][1001];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i][i];
//	}
//һ��ʼ˼·��û��ã�������������䣬���Բ��ö�ά����ȥд��ֱ���Զ���ṹ������Ϳ��Խ�� 
	
//} 
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int MAXN = 10000;
//struct Interval {    // ����ṹ�嶨��
//    int l, r;
//} interval[MAXN];    // ��������
//
//bool cmp(Interval a, Interval b) {    // ����ıȽϺ���
//    if (a.l != b.l) {                 // �����˵㲻ͬ����ô����˵�Ӵ�С
//        return a.l > b.l;
//    } else {                          // ���򣬰��Ҷ˵��С����
//        return a.r < b.r;
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {         // ����n����������Ҷ˵�
//        scanf("%d%d", &interval[i].l, &interval[i].r);
//    }
//    sort(interval, interval + n, cmp);    // �����������������
//    int num = 1, lastL = interval[0].l;   // �����ĵ�һ���������Ǳ�ѡ��
//    for (int i = 1; i < n; i++) {         // ����ʣ�������
//        if (interval[i].r <= lastL) {     // �������һ��ѡ�е����䲻�ཻ
//            lastL = interval[i].l;        // ��ôѡ�е�ǰ����
//            num++;                        // ����ѡ�е�����������1
//        }
//    }
//    printf("%d", num);                    // ���ѡ�е���������
//    return 0;
//}
 //����ѡ������
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
//struct Interval {    // ����ṹ�嶨��
//    int l, r;
//} interval[MAXN];    // ��������
//
//bool cmp(Interval a, Interval b) {    // ����ıȽϺ���
//    if (a.l != b.l) {                 // �����˵㲻ͬ����ô����˵�Ӵ�С
//        return a.l > b.l;
//    } else {                          // ���򣬰��Ҷ˵��С����
//        return a.r < b.r;
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {         // ����n����������Ҷ˵�
//        scanf("%d%d", &interval[i].l, &interval[i].r);
//    }
//    sort(interval, interval + n, cmp);    // �����������������
//    int num = 1, lastL = interval[0].l;   // �����ĵ�һ���������˵����Ǳ�ѡ��
//    for (int i = 1; i < n; i++) {         // ����ʣ�������
//        if (interval[i].r < lastL) {      // �������һ��ѡ�е����䲻�ཻ��ע��˴��Ǳ����䣬���Բ���ȡ���Ⱥţ�
//            lastL = interval[i].l;        // ��ôѡ�е�ǰ�������˵�
//            num++;                        // ����ѡ�еĵ��������1
//        }
//    }
//    printf("%d", num);                    // ���ѡ�еĵ�����
//    return 0;
//}
//ƴ����С��
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
