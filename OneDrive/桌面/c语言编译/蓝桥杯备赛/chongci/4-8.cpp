

//机器翻译：NC16589（字典序）



//多项式输出：NC16622 
//1、字符串做法 
//#include<bits/stdc++.h> 
//using namespace std;
// 
//int main()
//{
//    int n;
//    cin >> n;
// 
//    bool is_first = true;
//    for (int i = n; i >= 0; i -- )
//    {
//        int a;
//        cin >> a;
// 
//        if (!a) continue;
// 
//        if (!is_first && a > 0) printf("+");
//        else if (a < 0) printf("-");
//        if (abs(a) != 1 || !i) printf("%d", abs(a));
//        if (i) printf("x");
//        if (i > 1) printf("^%d", i);
// 
//        is_first = false;
//    }
// 
//    return 0;
//}


//2、数组做法 
//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//int n;
//int a[110];
//int main(){
//	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//	cin>>n;
//	for(int i=0;i<=n;i++){
//		cin>>a[i];
//	}
//	bool flag=0;
//	for(int i=n;i>=0;i--){
//		if(a[i]==0)
//		continue;
//		if(i==n){
//			if(a[i]<0){
//				cout<<"-";
//			}
//		}else{
//			if(a[i]>0){
//				if(flag)
//				cout<<"+";
//			}else{
//				cout<<"-";
//			}
//		}
//		if((a[i]==1||a[i]==-1)&&i!=0);
//		else cout<<abs(a[i]);
//		if(i!=1&&i!=0)cout<<"x^"<<i;
//		else if(i==1)cout<<"x";
//		flag=1;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//int p1,p2,p3;
//string fun(char b,char e,int p1,int p2,int p3){
//if(e-b==1){return "";}
//    if( ! ((isalpha(b) && isalpha(e) && b<e) ||
//          (isdigit(b) && isdigit(e) && b<e)))
//    {
//        return "-";
//    }
//    string ans = "";
//    for(char t = b+1 ; t < e ; t++)
//    {
//        for(int i = 0 ; i < p2 ; i++)
//        {
//            ans+=t;
//        }
//    }
//    if(p1 == 2 && isalpha(b))
//    {
//        for(int i =0  ; i <ans.length() ;i++)
//        {
//            ans[i] = ans[i]-'a'+'A';
//        }
//    }
//    if(p1 == 3)
//    {
//        for(int i =0  ; i< ans.length() ;i++)
//        {
//            ans[i] = '*';
//        }
//    }
//    if(p3==2)
//    {
//        reverse(ans.begin(),ans.end());
//    }
//    return ans;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>p1>>p2>>p3;
//	getchar();
//	string s;
//	cin>>s;
//	string ans="";
//	//cin和getline避免同时使用 
//	for(int i=0;i<s.length();i++){
//		if(s[i]=='-'&&i-1>=0&&i+1<s.length()){
//			ans+=fun(s[i-1],s[i+1],p1,p2,p3);
//		}else{
//			ans+=s[i];
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}



//前缀和 
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<utility>
// 
//using namespace std;
// 
//typedef pair<int, int> PII;
// 
////这里开30W是因为n个x操作和2*m个坐标
//const int N = 3e5+10;
//int a[N],s[N];//前缀和数组
//int n,m;
//vector<int> alls;//离散化数组（对应下标值）
//vector<PII> add,query;
// 
//int find(int x)//找到第一个最小的大于等于x的数
//{
//    int l = 0,r = alls.size()-1;
//    while(l<r)
//    {
//        int mid = l + r >> 1;
//        if(alls[mid] >= x) r = mid;
//        else l = mid + 1;
//    }
//    //如果+1映射从1，2，3........
//    //否则从0，1，2，3、、、、、、、
//    return r + 1;//返回映射
//}
// 
//int main()
//{
//    cin >> n >> m;
//    for(int i=0;i<n;i++)
//    {
//        int x,c;
//        cin >> x >> c;
//        //添加该位置加c的
//        add.push_back({x,c});
//        //把坐标放进离散化数组
//        alls.push_back(x);
//    }
//    
//    for(int i=0;i<m;i++)
//    {
//        int l,r;
//        cin >> l >> r;
//        //插入访问坐标
//        query.push_back({l,r});
//        //放入离散化数组里
//        alls.push_back(l);
//        alls.push_back(r);
//    }
//    
//    //离散化板子
//    sort(alls.begin(),alls.end());//排序
//    //unique:返回去重后最后一个不重复元素的位置
//    alls.erase(unique(alls.begin(),alls.end()),alls.end());//去重
//    for(auto item : add)
//    {
//        int x = find(item.first);
//        a[x] += item.second;
//    }
//    
//    //处理前缀和数组
//    for(int i=1;i<=alls.size();i++) s[i] = s[i-1] + a[i];
//    
//    //处理询问
//    for(auto item : query)
//    {
//        int l = find(item.first),r = find(item.second);
//        cout << s[r] - s[l-1] << endl;
//    }
//    return 0;
//}
//模板连习 
//#include<bits/stdc++.h>
//#define endl '\n'
//typedef pair<int,int> PII;
//int n;
//int count=0;
//int nums[3010];
//using namespace std;
//void quick_sort(int q[], int l, int r)
//{
//    if (l >= r) return;
//
//    int i = l - 1, j = r + 1, x = q[l + r >> 1];
//    while (i < j)
//    {
//        do i ++ ; while (q[i] < x);
//        do j -- ; while (q[j] > x);
//        if (i < j) swap(q[i], q[j]);
//    }
//    quick_sort(q, l, j), quick_sort(q, j + 1, r);
//}
//void merge_sort(int q[], int l, int r)
//{
//    if (l >= r) return;
//
//    int mid = l + r >> 1;
//    merge_sort(q, l, mid);
//    merge_sort(q, mid + 1, r);
//
//    int k = 0, i = l, j = mid + 1,tmp[r+1];
//    while (i <= mid && j <= r)
//        if (q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
//        else tmp[k ++ ] = q[j ++ ];
//
//    while (i <= mid) tmp[k ++ ] = q[i ++ ];
//    while (j <= r) tmp[k ++ ] = q[j ++ ];
//
//    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
//}
//int main()
//{
//	const int n = 10;
//	int q[n];
//	for(int i=0;i<n;i++){
//		cin>>q[i];
//	}
////	quick_sort(q,0,n-1);
//	merge_sort(q,0,n-1);
//	for(int i=0;i<n;i++)
//	{
//		cout<<q[i]<<" ";
//	}
//	cout<<endl;
//
//	return 0;
//}

//void Qsort(int* a,int start,int end)   //快速排序主体代码函数
//{
//	if(start>=end) return;
//	int i = start;
//	int j = end;
//	int key = a[i];
//	while (i<j)
//	{
//		while(i<j&&a[j]>=key)
//		{
//			j--;
//		}
//		a[i] = a[j];
//		while(i<j&&a[i]<=key)
//		{
//			i++;
//		}
//		a[j] = a[i];
//	}
//	a[i] = key;
//	Qsort(a,start,i-1);
//	Qsort(a,i+1,end);
//}
// 
//void show(int* a,int n)        //输出函数
//{
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//}
// 
//int main()
//{
//	const int n = 10;
//	int a[n];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	Qsort(a,0,n-1);
//	show(a,n);
//	return 0;
//}




//void quick_sort(int nums[], int l, int r)
//{
//	if(l>=r)
//	return;
//	int i=l;
//	int j=r;
//	int key=nums[i];
//    while(i<j){
//    	while(i<j&&nums[j]>=key){
//    		j--;
//		}
//		nums[i]=nums[j];
//		while(i<j&&nums[i]<=key){
//			i++;
//		}
//		nums[j]=nums[i];
//	}
//	nums[i]=key;
//	quick_sort(nums,l,i-1);
//	quick_sort(nums,i+1,r);
//}
//int main(){
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>nums[i];
//	}
//	int l=1;
//	int r=sizeof(nums)/sizeof(nums[0]);
//	quick_sort(nums,l,r);
//	for(int i=1;i<=n;i++){
//		cout<<nums[i]<<" ";
//	}
//	return 0;
//}





//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//int t;
//int nums[100000];
//int temp[100000];
//bool su(int i){
//	for(int x=2;x<=i;x++){
//		for(int y=2;y*y<=i;y++){
//			if(y%x==0){
//				break;
//			}
//			if(y==x){
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main(){
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>t;
//	for(int i=1;i<=t;i++){
//		cin>>nums[i];
//	}
//	sort(nums+1,nums+t+1);
//	int s=1;
//	for(int i=1;i<=sizeof(nums)/sizeof(nums[0]);i++){
//		if(su(i)==true){
//			temp[s++]=nums[i];
//		}
//	}
//	int count=sizeof(temp)/sizeof(temp[0]);
//	sort(temp+1,temp+1+count);
//	for(int i=1;i<=count;i++){
//		cout<<temp[i]<<endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//int t,x,y,a,b,n;
//int fi(int n){
//	if(n==0){
//		return x;
//	}else if(n==1){
//		return y;
//	}else{
//		return a*fi(n-1)+b*fi(n-2);
//	}
//}
//int main(){
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>t;
//	while(t--){
//		cin>>x>>y>>a>>b>>n;
//		int temp=pow(10,9)+7;
//		cout<<fi(n)%temp<<endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int n,c,f,count;
//struct node{
//	int score;
//	int money;
//}stu[10000000000];
//bool cmp(node a,node b){
//	if(a.score!=b.score)
//		return a.score>b.score;
//}
//int main(){
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>n>>c>>f;
//	for(int i=1;i<=n;i++){
//		cin>>stu[i].score>>stu[i].money;
//	}
//	sort(stu+1,stu+1+n,cmp);
//	for(int i=1;i<=n;i++){
//		cout<<stu[i].score;
//		cout<<stu[i].money;
//	}
//	return 0;
//}



//结构体 
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//struct node{
//	string name;
//	int id;
//	int x,y,z;
//	int count;
//}stu[1000];
////定义cmp时，传入的结构体数组名最好用node 
//bool cmp(node a,node b){
//	if(a.count!=b.count){
//		return a.count>b.count;
//	}
//	else
//		return a.id<b.id;
//}
//int main(){
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>stu[i].name>>stu[i].x>>stu[i].y>>stu[i].z;
//		stu[i].count=stu[i].x+stu[i].y+stu[i].z;
//		stu[i].id=i;
//	}
//	sort(stu+1,stu+1+n,cmp);
//	cout<<stu[1].name<<" "<<stu[1].x<<" "<<stu[1].y<<" "<<stu[1].z;
//	return 0;
//} 


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
////截取字符串
////	string s="abcdefg";
////	string s1=s.substr(2,5);
////	cout<<s1<<endl; 
////截取整数 
////	int n=1123;
////	int temp=pow(10,3);
////	cout<<temp<<endl;
////	cout<<n%temp;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define PII pair<int,int>
//#define endl '\n'
//const int N=2e5+10,M=1e3+10;
//int nums[N];
//int n,q;
//void check(int len,int ide){
//	for(int i=1;i<=n;i++){
//		int temp=pow(10,len);
//		if(nums[i]%temp==ide)
//		{
//			cout<<nums[i]<<endl;
//			return;
//		}
//	}
//	cout<<-1<<endl;
//}
//int main(){
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin>>n>>q;
//	for(int i=1;i<=n;i++){
//		cin>>nums[i];
//	}
//	sort(nums+1,nums+1+n);
//	while(q--){
//		int len,ide;
//		cin>>len>>ide;
//		check(len,ide);
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	string s1,s2;
//	getline(cin,s1);
//	getline(cin,s2);
//	for(int i=0;i<s1.size();i++){
//		s1[i]=toupper(s2[i]);
//	}
//	for(int i=0;i<s2.size();i++){
//		s1[i]=toupper(s2[i]);
//	}
//	s1=' '+s1+' ';
//	s2=' '+s2+' ';
//	if(s2.find(s1)==string::npos){
//		cout<<"-1";
//	}else{
//		int sum=0;
//		int st=s2.find(s1);
//		int temp=st;
//		while(temp!=-1){
//			sum++;
//			temp=s2.find(s1,temp+1);
//		}
//		cout<<sum<<" "<<st<<endl;
//	}
//	return 0;
//} 


//#include<bits/stdc++.h> 
//using namespace std;
//int main(){
//	string s="abcdefg";
//	string s1="higk";
////字符串的替换	replace(beg,end,""); 
////	s.replace(s.begin(),s.begin()+3,"ABC");
////	s+=s1;
////字符串拼接  + 直接将字符串s1拼接到s的尾部 
////	auto it = s.begin();
////	for(;it!=s.end();it++){
////		cout<<*it;
////	}
//	
////	string s1=s.substr(2,5);
////截取字符串：截取字符串s从下标 2 到  5
//	
////	int c=s.find("bcd",0);
////从下标0开始找字符串bcd返回最开始找到的下标 => 1
////删除函数 
////	s.erase(s.begin()+1);
////	s.erase(s.begin()+3,s.end()-3);
//	
////反转函数
////	reverse(s.begin()+1,s.end()-1);
//	cout<<s<<" "<<"\n";
////	cout<<s1;
//	return 0;
//}

// #include<bits/stdc++.h>
//using namespace std;
//int a[100010];
//int main(){
//    int n;
//    scanf("%d",&n);
//   for(int i=0;i<n;i++){
//       scanf("%d",&a[i]);
//   }
//    int flag=0;
//    for(int i=0,j=0;i<n;i++){
//        if(a[i]>a[j]){
//        	flag++;
//		}
//    printf("%d",flag);
//    return 0;
//}
