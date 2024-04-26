//#include<bits/stdc++.h>
//#define endl '\n'
//#define pair<string,int>
//using namespace std;
//const int N =1e6;
//int a[N];
//int n;
//int main(){
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int ans=0;
//	for(int i=0;i<n;i++){
//		int j=i+1;
//		while(a[j]!=a[i]){
//			j++;
//			ans++;
//		}
//		
//		
//		
//	}
//	
//	return 0;
//}
//int gcd(int a,int b){
//	if(b==0)return a;
//	return gcd(b,a%b);
//}
//int main(){
//	int n,m;
//	cin>>n>>m;
//	cout<<_gcd(m,n);
//}
//int gcd(int a,int b){
//	return b?gcd(b,a%b):a;
//}
//int main(){
//	int a=3;
//	int b=9;
//	int c=gcd(a,b);
//	cout<<c;
//	return 0;
//}
//int main(){
//	char ch;
//	int a=0;
//	while(ch=getchar(),ch!='\n')
//	a=a*2+(ch-'0');
//	printf("%d\n",a);
//	return 0;
//}
//10进制->2进制 
//int main(){
//	int a[100]={0};
//	int n,i;
//	cin>>n;
//	while(n>0){
//		a[i]=n%2;
//		i++;
//		n/=2;
//	}
//	for(i--;i>=0;i--){
//		cout<<a[i];
//	} 
//	return 0;
//}
//int main(){
//	string s;
//	cin>>s;
//	
//
//	return 0;	
//}


//string sr(int n,int radix){
//	string ans="";
//	do{
//		int t=n%radix;
//		if(t>=0&&t<=9)
//		ans+=t+'0';
//		else
//		ans+=t-10+'a';
//		n/=radix;
//	}while(n!=0);
//	reverse(ans.begin(),ans.end());
//	return ans;
//}
//int main(){
//	int n;
//	cin>>n;
//	int radix=11;
//	string s=sr(n,radix);
//	cout<<s;
//	return 0;
//}
//inline int get(int x,int k){
//	return x>>k&1;
//}
//int main(){
//	int a;
//	cin>>a;
//	int c = a^1;
//	cout<<c;
//}
//int main(){
//	int cnt=0;
//	for(int i=0;i<1<<30;i++){
//		bool flag=true;
//		for(int j=1;j<30;j++){
//			flag=false;
//			break;
//		}
//		cnt+=flag;
//	}
//	cout<<cnt<<endl;
//	return 0;
//} 

//试除法求所有约数 
//vector<int> get(int x)
//{
//    vector<int> res;
//    for (int i = 1; i <= x / i; i ++ )
//        if (x % i == 0)
//        {
//            res.push_back(i);
//            if (i != x / i) res.push_back(x / i);
//        }
//    sort(res.begin(), res.end());
//    return res;
//}
//vector<int> c;
//int main(){
//	int x;
//	cin>>x;
//	c=get(x);
//	for(int i=c.size()-1;i>=0;i--)
//	cout<<c[i]<<' ';
//	return 0;
//} 



//int primes[N], cnt;     // primes[]存储所有素数
//bool st[N];         // st[x]存储x是否被筛掉
//void divide(int x)
//{
//    for (int i = 2; i <= x / i; i ++ )
//        if (x % i == 0)
//        {
//            int s = 0;
//            while (x % i == 0) x /= i, s ++ ;
//            cout << i << ' ' << s << endl;
//        }
//    if (x > 1) cout << x << ' ' << 1 << endl;
//    cout << endl;
//}


//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i ++ )
//    {
//        if (!st[i]) primes[cnt ++ ] = i;
//        for (int j = 0; primes[j] <= n / i; j ++ )
//        {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0) break;
//        }
//    }
//}

//void get_primes(int n)
//{
//    for (int i = 2; i <= n; i ++ )
//    {
//        if (st[i]) continue;
//        primes[cnt ++ ] = i;
//        for (int j = i + i; j <= n; j += i)
//            st[j] = true;
//    }
//}
//
//int main(){
//	int n;
//	cin>>n;
//	get_primes(n);
//} 
//判定质数 
//bool is(int x){
//	if(x<2)
//	return false;
////	for(int i=2;i<=sqrt(x);i++){
////		if(x%i==0)
////			return false;
////	}
////	for(int i=2;i<=x/i;i++){
////		if(x%i==0)
////			return false;
////	}
//	return true;
//}
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	int n;
//	cin>>n;
//	int i=0;
//	while(n--){
//		int m;
//		cin>>m;
//		if(is(m)==true){
//			cout<<m;
//		}
//	}
//	return 0;
//}

//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	int n;
//	cin>>n;
//	unordered_multiset<string> hash;
//	
//	while(n--){
//		string s;
//		cin>>s;
//		hash.insert(s);	
//	}	
//	unordered_multiset<string>::iterator it =hash.begin();
//	for(;it!=hash.end();it++){
//		cout<<*it<<" ";
//	}
//	auto itr=hash.find("ab");
//	auto is=hash.count("ab"); 
//	if(itr!=hash.end()){
//		cout<<endl<<"exist"<<endl;
//		cout<<is<<endl;
//	}else{
//		cout<<"not found"<<endl;
//	}
//	return 0;
//} 

//void printDuplicates(int arr[], int n)
//{
//	unordered_set<int> intSet;
//	unordered_set<int> duplicate;
////	for(auto j:intSet){
////		cout<<*j;
////	} 
////	for(auto j:duplicate){
////		cout<<*j;
////	} 
//	for (int i = 0; i < n; i++) {
//		if (intSet.find(arr[i]) == intSet.end())
//			intSet.insert(arr[i]);
//		else
//			duplicate.insert(arr[i]);
//	}
//	unordered_set<int>::iterator itr1;
//	for (itr1 = intSet.begin(); itr1 != intSet.end(); itr1++)
//		cout << *itr1 << " ";  
//}
//	cout << "Duplicate item are : ";
//
//
//	unordered_set<int>::iterator itr;
//	for (itr = duplicate.begin(); itr != duplicate.end(); itr++)
//		cout << *itr << " ";  //5 1 2
//}
//
//int main()
//{
//	int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 };
//	int n = sizeof(arr) / sizeof(int);
//	printDuplicates(arr, n);
//	return 0;
//}

//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	int n;
//	cin>>n;
//	std::unordered_map<string,int> hash;
//	while(n--){
//		string s;
//		int n;
//		cin>>s>>n;
////		hash.insert({s,n});
////		hash[s]=n;
//		hash[s]
//	}
//	string c="ab";
//	for(auto &j:hash){
//		cout<<j.first<<" "<<j.second<<endl;
//	}
//	//最重要的是用迭代器 
//	auto it = hash.find(c);
//	cout<<it->second;
////	auto is =hash.count(c);
////	cout<<is<<endl;
////	for(auto &j:hash){
////		cout<<j.first<<" "<<j.second<<endl;
////	}	
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//long long n;
//long long a;
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	a=6;
//	n=pow(20,22);
//	long long flag=abs(n)%7;
//	cout<<flag;
//
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int year,month,day;
//bool check(int a,int b,int c,int d){
//	if(b==a+1&&c==b+1 || c==b+1&&d==c+1){
//		return true;
//	}
//	return false;
//}
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	int ans=0;
//	int flag=0;
//	int a,b,c,d;
//	for(int year=1921;year<=2020;year++){
//		for(int month=1;month<=12;month++){
//			for(int day=1;day<=31;day++){
//				if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12);
//				else if(month==2)
//				{
//					if((year%4==0&&year%100!=0)||year%400==0)
//					{
//						if(day>29)break; 
//					}
//					else
//					{
//						if(day>28)break;
//					}
//				}
//				else
//				{
//					if(day>30)break;
//				}
//				//星期计算 
//				//纪念日
////				if(year==1921&&month==7&&day==23){
////					flag=1;
////				} 
////				if(flag==1)ans+=24*60;
////				if(year==2020&&month==7&&day==1){
////					cout<<ans-24*60;
//				//从1921.7.23中午12点到2020.7.1中午12点正好少了24个小时 
////					return 0;
////				}
//				
//				
//				//顺子日期 
////				a=month/10;
////				b=month%10;
////				c=day/10;
////				d=day%10;
////				if(check(a,b,c,d)==true){
////					ans++;
////				}
//				//第几天：一年中的第几天 
////				ans++;
////				if(month==5 && day==4){
////					printf("%d",ans);
////					return 0;
////				}
//////				星系炸弹：过了1000天后的日期 
////				if(year==2000 && month==1 && day==1){
////					flag=1;
////					//从现在开始
////				}
////				if(flag==1)ans++;
////				if(ans == 1001){
////					printf("%d-%02d-%02d",year,month,day); 
////
////					break;
////				}
//				
//			}
//		}
//	}
//	cout<<ans;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//struct node{
//	int x1,y1,x2,y2;
//}a[10010];
//int n;
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2;	
//	}
//	int x,y;
//	cin>>x>>y;
//	for(int i=n;i>=1;i--){
//		if(a[i].x1<=x&&a[i].x2>=x&&a[i].y1<=y&&a[i].y2>=y){
//			cout<<i<<endl;
//			return 0;
//		}
//	}
//	cout<<"-1"<<endl;
//	return 0;
//}
