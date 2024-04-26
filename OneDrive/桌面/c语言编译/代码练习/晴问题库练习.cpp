
#include<bits/stdc++.h>
using namespace std;

int main(){
	//61:2的幂		


//	int x,y;
//	cin>>x>>y;
//	bool
//	for(int i=x;i<=y;i++){
//		int g = i%10;
//		int s = i%100/10;
//		int b =i/100;
//		if(i==g*g*g+s*s*s+b*b*b){
//			cout<<i<<endl;
//		}
//	} 
	
//1000以内的水仙花数 
//	for(int i=1;i<1000;i++){
//		int g = i%10;
//		int s = i%100/10;
//		int b =i/100;
//		if(i==g*g*g+s*s*s+b*b*b){
//			cout<<i<<endl;
//		}
//	}
	
	
//	char a, b, c;
//    a = getchar();
//    b = getchar();
//    c = getchar();
//    printf("%c %c %c", a, b, c);
//也可以用char类型 
//	int n;
//	cin>>n;
//	int g = n%10;
//	int s = n%100/10;
//	int b = n/100;
//	cout<<b<<" "<<s<<" "<<g<<endl; 
	
//数列奇项和	
//	int n, x, sum = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &x);
//        if (x % 2) {
//            sum += x;
//        }
//    }
//    printf("%d", sum);


//	int n,count=0,a[100];		//可以直接判断 ,不用输入到数组里面 
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0){
//			continue;
//		}
//		count+=a[i];
//	}
//	cout<<count;
	
//单调递增序列 
//	int n,a[100];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	bool fa = true;
//	for(int i=0;i<n-1;i++){
//		if(a[i]>a[i+1]){
//			fa = false;
//			break;
//		}
//	}
//	cout<<fa?"yes":"NO";
	
//判断三角形	
//	int a,b,c;
//	cin>>a>>b>>c;
//	if(a+b>c&&a+c>b&&b+c>a){
//		cout<<"YES";
//	}else{
//		cout<<"NO";
//	}

//3n+1猜想 
//	int n, stepCount = 0;            // stepCount表示步数
//    scanf("%d", &n);                 // 输入正整数n
//    while (n != 1) {                 // 只要n不为1就不断循环
//        if (n % 2 == 0) {            // 如果n是偶数
//            n /= 2;                  // 将n除以2
//        } else {                     // 如果n是奇数
//            n = (n * 3 + 1) / 2;     // 将n乘3加1再除以2
//        }
//        stepCount++;                 // 步数加1
//    }
//    printf("%d", stepCount);         // 输出步数
	
//	int sn(int n){
//	int flag=0;
//	if(n==1){
//		return flag;
//	}else{
//			if(n%2==0){
//				n/=2;
//				flag++;
//		}	else if(n&1==1){
//				n=(n*3+1)/2;
//				flag++;
//		}
//	}
//
//}
//	int n;
//	cin>>n;
//	printf("%d",sn(n));
	
//	int t,a,b,c[100];
//	cin>>t;
//	do{
//		cin>>a>>b;
//		cout<<a+b<<endl;
//	}while(t--);
//	for(int i=0;i<t;i++){
//		cin>>a>>b;
//		cout<<a+b<<endl;
//	}
//	while(t--){
//		scanf("%d%d",&a,&b);
//		printf("%d\n",a+b);
//	}
	
	
//	一个输入文件中有多组数据。 
//每组数据一行，为用空格隔开的两个正整数a,b
//当a和b同时为0时停止执行。
//	int a,b;
//	while(scanf("%d%d",&a,&b)!=EOF){
//		if(a==0&&b==0){
//			break;
//		}
//		cout<<a+b<<endl;
//	}
//多点测试   
//	int a,b;
//	 while (scanf("%d%d", &a, &b) != EOF) {	
//	while (scanf("%d%d", &a, &b) != '\n') {	
//while (scanf("%d%d", &a, &b) != '\0') {	
//	 //scanf() 
//        printf("%d\n", a + b);
//    }
	
//	const double EPS = 1e-8;
//
//bool greater(double a, double b) {
//    return a - b > EPS;
//}
//
//bool less(double a, double b) {
//    return a - b < -EPS;
//}
//
//int main() {
//    double a, b, c, d;
//    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
//    double result1 = a * asin(sqrt(b) / 2);
//    double result2 = c * asin(sqrt(d) / 2);
//    if (greater(result1, result2)) {
//        printf("1");
//    } else if (less(result1, result2)) {
//        printf("2");
//    } else {
//        printf("0");
//    }
	
//	double a,b,c,d;
//	cin>>a>>b>>c>>d;
//	double r1=a * asin (sqrt(b)/2);
//	double r2=c * csin (sqrt(d)/2);
//	if(r1>r2){
//		cout<<"1";
//	}else if(r1<r2){
//		cout<<"2";
//	}else{
//		cout<<"0";
//	}
	
	
	
	
//const int MAXN=110;
//char str[MAXN];
//	int n;
//    double d;
//    cin >> n >> d;
//    getchar();
//    cin.getline(str, MAXN);
//    cout << n << endl;
//    cout << setiosflags(ios::fixed) << setprecision(2) << d << endl;
//    cout << str;
//	int a;
//	double b;
//	cin>>a>>b;
//	getchar();  		//读取字符串之前的空格 
//	cin.getline(str,MAXN);
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<str<<endl;
//结构体与构造函数III 
//struct Node{
//	int id;
//	Node* left;
//	Node* right;
//	Node(int _id,Node* _left,Node* _right){
//		id=_id;
//		left=_left;
//		right=_right;
//	}
//};

//	int n1,n2,n3;
//	cin>>n1>>n2>>n3;
//	Node node1=Node(n1,NULL,NULL);
//	Node node2=Node(n2,NULL,NULL);
//	Node node3=Node(n3,&node1,&node2);
//	cout<<node3.left->id<<" "<<node3.right->id;
	

//结构体与构造函数II 
//	struct Student{
//	int id;
//	char name[15];
//	Student(int _id,char _name[]){
//		id=_id;
//		strcpy(name,_name);
//	}
//};
//	int id;
//	char name[15];
//	cin>>id>>name;
//	Student student = Student(id,name);
//	cout<<student.id<<" "<<student.name;
//	

//结构体与构造函数I 
//struct Point {
//    int x, y;
//    Point() {}	//结构体中书写赋值函数 
//    Point(int _x, int _y) {
//        x = _x;
//        y = _y;
//    }
//};
//	Point point;
//    int x, y;
//	scanf("%d%d", &x, &y);
//    point = Point(x, y);	//使用赋值函数 
//    printf("%d %d", point.x, point.y);
	
	
//	void swap(int &x,int &y){
//	int temp = x;
//	x = y;
//	y = temp;
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//	int a,b;
//	cin>>a>>b;
////	swap(a,b);
//	swap(*a,*b);
//	cout<<a<<" "<<b;
	
//在main函数中，输入3个正整数a,b，c调用max3函数求得它们中的最大值并输出。
//	int max2(int a,int b){
//	return a>b?a:b;
//}
//int max3(int a,int b,int c){
//	return max2(c,max2(a,b));
//}
//	int a,b,c;
//	cin>>a>>b>>c;
//	printf("%d",max3(a,b,c));
	
//int increase(int x){
//	x++;
//	return x;
//}
//	int n;
//	cin>>n;
//	int s1=increase(n);
//	printf("%d %d",s1,n);
	
//	const int MAXN = 50;
//char str[MAXN];
	//给定年、月、日、时、分、秒，生成"YYYY-MM-DD HH:MI
//"格式的字符串并输出。注：请先使用sprintf函数生成字符串后再输出
//	int yyyy,mm,dd,hh,mi,ss;
//	scanf("%d %d %d %d %d %d",&yyyy,&mm,&dd,&hh,&mi,&ss);
//	sprintf(str, "%04d-%02d-%02d %02d:%02d:%02d", yyyy, mm, dd, hh, mi, ss);
//	printf("%s",str);
	//三元运算符  字符串输入 
	//  a>b?" ":" "			cin.getline(str,MAXN); 
//const int MAXN = 50;
//char str[MAXN];
//	cin.getline(str, MAXN);
//    int a, b, c;
//    if (sscanf(str, "%d is greater than %d", &a, &b) == 2) {
//        cout << (a > b ? "Yes" : "No");
//    } else if (sscanf(str, "%d is equal to %d plus %d", &a, &b, &c) == 3) {
//        cout << (a == b + c ? "Yes" : "No");
//    } else {
//        cout << "???";
//    }



	//strcmp（字符串1，字符串2）
	//作用是比较字符串1和字符串2
//	char a[10]={"girl"};
//	char b[10]={"hill"};
//	cout<<strcmp(b,a);
	//字符串a>字符串b，函数值为正整数
	// 字符串a<字符串b，函数值为负整数
	//字符串a=字符串b，函数值为0

		
	//strcpy(字符数组1,字符串2)  
	//将字符串2复制到字符数组1中去
//	char a[50],b[]={"china"};
//1、	strcpy(a,"china");     strcpy（字符数组名，字符串常量/字符数组名）
//2、	strcpy(a,b); 
//	cout<<a; 


	//拼接字符串
//	string a,b;
//	cin>>a>>b; 
//1、	cout<<a+b;
//2、	char a[50],b[50];
//strcat(a,b)函数的作用就是连接两个字符数组中的字符串
// 把字符串b接到字符串a的后面 
//	cin>>a>>b;
//	strcat(a,b);
//	cout<<a;


//给定两个字符串，比较它们的字典序大小
//	string a,b;
//	cin>>a>>b;
//	if(a>b){
//		cout<<">";
//	}else if(a==b){
//		cout<<"=";
//	}else{
//		cout<<"<";
//	}

//输入一行 字符串 输出它的长度  
//strlen(str)、str.length()、str.size()、sizeof(str)都可以求字符串长度。
//str.length()、str.size()、sizeof(str)是用于求string类对象的成员函数
//strlen(str)是用于求字符数组的长度，其参数是char* 
//2、	char str[50];
//	gets(str);
//	cout<<strlen(str)<<endl;
//const int MAXN = 50;
//char str[MAXN];
//1、	cin.getline(str,MAXN);
//	printf("%d",(int)strlen(str));
//32字符串输入输出II 
//	int n=0;
//	cin>>n;
//3、 
//	for (int i = 0; i < n; i++) {
//        scanf("%*c%[^\n]", str);
//        puts(str);
//    }
//2、 
//    getchar(); // 或者使用 cin.get()
//    for (int i = 0; i < n; i++) {
//        cin.getline(str, MAX_LEN);
//        puts(str);
//    }
// 1、   getchar(); // 或者使用 cin.get()
//    for (int i = 0; i < n; i++) {
//        cin.getline(str, MAXN);
//        puts(str);
//    }


//字符串输入输出   cin.getline（）、scanf（"%[^\n]",str）、fgets（） 
//3、	 fgets(str, MAXN, stdin);
////    str[strcspn(str, "\n")] = '\0';
//    printf("%s", str);
	 
//2、	scanf("%[^\n]", str);
//	//	'^' 非 '\n'  表示读入换行字符就结束读入 
//    printf("%s", str);

//1、（推荐）c++ cin.getline()函数用法	主要用于字符串输入 
//	cin.getline(str,MAXN);
//	printf("%s",str);




//memset():可以将数组中每个元素以字节为单位赋值
//	int x,a[10];
//	cin>>x;
//	memset(a, x, sizeof(a));
//    printf("%d", a[0]);



//开一个大数组的时候，在函数内部定义会存放在栈区，但是栈区可以分配的内存小，很容易爆掉
//而开在全局的时候，会存放在堆区，堆区可以分配的内存较大，适合开大数组 
//int a[100000];
//	int n,a[100000];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		printf("%d",a[i]);
//		printf(i<n-1?" ":"\n");
//	}



// 二维数组输入输出  矩阵输出 
//	int a[10][10],n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cin>>a[i][j];
//		}
//	} 
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("%d",a[i][j]);
//			printf(j<m-1?" ":"\n");
//		}
//	}


//冒泡排序法  没啥用 
//	int n,a[100];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=1;i<=n-1;i++){			//从下标1到下标n-1 
//		for(int j=0;j<n-1;j++){			//从下标0到下标n-2 
//			if(a[i]<a[j]){
//				int temp = a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d",a[i]);
//		printf(i<n-1?" ":"\n");
//	}


//一维数组输入输出 
//	int a[100],n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		printf("%d",a[i]);
//		printf(i<n?" ":"\n");
//三位运算符作用：整数间用一个空格隔开，行末不允许有多余的空格。
//	}
	


//其中第i行为从1到n-i+1的所有正整数。整数间用一个空格隔开，行末不允许有多余的空格
//	int n;
//	cin>>n;
//	for(int i=n;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			printf("%d",j);
//			printf(i>j?" ":"\n");
//		}
//	}
	
	
//其中第i行为从1到i的所有正整数。整数间用一个空格隔开，行末不允许有多余的空格
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			printf("%d",j);
//			printf(j<i?" ":"\n");
//		}
//	} 


//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<j;
//			printf(j<n?" ":"\n");
				//三位运算符：用来判断是插入空格还是换行 
//		}
//	}			
	
	
	
//22
//	int n,count=0;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		if(i%3==0){
//			continue;
//		}
//		count+=i;
//		cout<<count<<endl;
//	}

//	int n,count=0,i=1;
//	cin>>n;
//	while(i<=n){
//		if(i%3==0){
//			continue;
//		}
//		count+=i;
//		i++;
//	}
//	cout<<count;
	
//21	
//	int n,count =0,i=1;
//	cin>>n;
//	while(i<=n){
//		count+=i;
//		i++;
//		if(count>2000){
//			break;
//		}
//	}
//	cout<<count;
//	 int n,count=0;
//	 cin>>n;
//	for(int i=1;i<=n;i++){
//		count+=i;
//		if(count>2000){
//			break;
//		}
//	}
//	cout<<count;
//三种循环求前n项和	
//	int n =0;
//	cin>>n;
//	int i=1,count=0;
//	do{
//		count+=i;
//		i++;
//	}while(i<=n);
//	int count = 0,i=1;
//	while(i<=n){
//		count+=i;
//		i++;
//	}
//	for(int i=1;i<=n;i++){
//		count+=i;
//	}
//	cout<<"前n项和为："<<count;
	
	
//	int n;
//	cin>>n;
//	if(n<0){
//		cout<<"Negative Number"<<endl;
//	}else{
//		if(n%2==1){
//			cout<<"Odd Number"<<endl;
//		}
//		if(n%2==0){
//			cout<<"Even Number"<<endl;
//		}
//	}
	
	
	
//	17 if else
//	int n;
//	cin>>n;
//	if(n%2){
//	cout<<"Even Number"<<endl;
//	}else{
//		cout<<"Odd Number"<<endl
//	}
////	if(n&(n-1)==0){
//	if(n%2==0){
//		cout<<"Even Number"<<endl;
//	}
//	if(n&1==1){
//		//if(n&1==1)
//		//可以用来判断n是否为奇数 
//		cout<<"Odd Number"<<endl;
//	}
	
//sqrt() 开根号		log（）a的以自然对数e为的对数 
//	float d;
//	cin>>d;
//	printf("%f %f",sqrt(d),log(d));
				//sqrt(a)：a的算术平方根（即开根号）
				//log（a）：a的以自然对数e为底的对数 
	
// 绝对值  向下取整  向上取整  四舍五入  a的b次方 
//	double d;
//	cin>>d;
//	 printf("%.2f %.0f %.0f %.0f %.2f", fabs(d), floor(d), ceil(d), round(d), pow(d, 5));
	 								//fabs(a):a的绝对值
									//floor(a):a的向下取整
									//ceil(a):a的向上取整
									//round(a):a的四舍五入
									//pow(a,b):a的b次方，其中b也可以是浮点型 
	
	
	//getchar除了可以接受单个字符，还可以用来接收换行符 
//	int n;
//	cin>>n;
//	getchar();
//	char c=getchar();
//	n++;
//	cout<<n<<endl;
//	cout<<c<<endl;
//	
	
	
	
	//按字符串输出年 时 分 秒 不足补零 
//	#include <cstdio>
//#include <string>
//using namespace std;
//
//string fillPrefixZero(int n) {
//    if (n > 10) {
//        return to_string(n);
//    } else {
//        return "0" + to_string(n);
//    }
//}
//
//int main() {
//    int yyyy, mm, dd, hh, mi, ss;
//    scanf("%d-%d-%d %d:%d:%d", &yyyy, &mm, &dd, &hh, &mi, &ss);
//    printf("%s\n", to_string(yyyy).c_str());
//    printf("%s\n", fillPrefixZero(mm).c_str());
//    printf("%s\n", fillPrefixZero(dd).c_str());
//    printf("%s\n", fillPrefixZero(hh).c_str());
//    printf("%s\n", fillPrefixZero(mi).c_str());
//    printf("%s", fillPrefixZero(ss).c_str());
//    return 0;
//}
	
	
	
	//日期时间输入输出 
//	int yyyy,mm,dd,hh,mi,ss;
//	scanf("%d-%d-%d %d:%d:%d", &yyyy, &mm, &dd, &hh, &mi, &ss);
//    printf("%d\n%d\n%d\n%d\n%d\n%d", yyyy, mm, dd, hh, mi, ss);


//11
//	int a,b;
//	cin>>a>>b;
//	printf(a>=b?"a>=b":"a<b");
//	if(a>=b){
//		cout<<a<<">="<<b;
//	}else{
//		cout<<a<<"<"<<b;
//	}


//10
//	int n;
//	cin>>n;
//	n++;
//	cout<<n; 
	
//9  定义常量 用const最好 
//const float a = 3.14; 
	//#define  const
	//因为#define本质上是宏替换，只不过恰好也能拿来定义常量 
//	float r;
//	cin>>r;
//	printf("%0.2f\n",2*a*r);
//	
	
//8
//	int a,b;
//	cin>>a>>b;
//	printf("%d\n",a/b);
//	printf("%0.2f\n",(double)a/b);

//7
//	int a,b;
//	cin>>a>>b;
//	cout<<a<<endl<<b<<endl;
	
//6
//	char a;
//	cin>>a;
//	cout<<a;
	
//5
//	float a;
//	cin>>a;
//	printf("%0.2f",a);
//4
//	long a = 0;
//	cin>>a;
//	cout<<a; 

//3
//	int a = 0;
//	cin>>a;
//	cout<<a;
//2
//	cout<<"Hello Sunny Why!"<<endl;
//1
//	int a,b;
//	cin>>a>>b;
//	cout<<a+b;
	return 0;
}
