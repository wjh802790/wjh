
#include<bits/stdc++.h>
using namespace std;

int main(){
	//61:2����		


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
	
//1000���ڵ�ˮ�ɻ��� 
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
//Ҳ������char���� 
//	int n;
//	cin>>n;
//	int g = n%10;
//	int s = n%100/10;
//	int b = n/100;
//	cout<<b<<" "<<s<<" "<<g<<endl; 
	
//���������	
//	int n, x, sum = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &x);
//        if (x % 2) {
//            sum += x;
//        }
//    }
//    printf("%d", sum);


//	int n,count=0,a[100];		//����ֱ���ж� ,�������뵽�������� 
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
	
//������������ 
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
	
//�ж�������	
//	int a,b,c;
//	cin>>a>>b>>c;
//	if(a+b>c&&a+c>b&&b+c>a){
//		cout<<"YES";
//	}else{
//		cout<<"NO";
//	}

//3n+1���� 
//	int n, stepCount = 0;            // stepCount��ʾ����
//    scanf("%d", &n);                 // ����������n
//    while (n != 1) {                 // ֻҪn��Ϊ1�Ͳ���ѭ��
//        if (n % 2 == 0) {            // ���n��ż��
//            n /= 2;                  // ��n����2
//        } else {                     // ���n������
//            n = (n * 3 + 1) / 2;     // ��n��3��1�ٳ���2
//        }
//        stepCount++;                 // ������1
//    }
//    printf("%d", stepCount);         // �������
	
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
	
	
//	һ�������ļ����ж������ݡ� 
//ÿ������һ�У�Ϊ�ÿո����������������a,b
//��a��bͬʱΪ0ʱִֹͣ�С�
//	int a,b;
//	while(scanf("%d%d",&a,&b)!=EOF){
//		if(a==0&&b==0){
//			break;
//		}
//		cout<<a+b<<endl;
//	}
//������   
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
//	getchar();  		//��ȡ�ַ���֮ǰ�Ŀո� 
//	cin.getline(str,MAXN);
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<str<<endl;
//�ṹ���빹�캯��III 
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
	

//�ṹ���빹�캯��II 
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

//�ṹ���빹�캯��I 
//struct Point {
//    int x, y;
//    Point() {}	//�ṹ������д��ֵ���� 
//    Point(int _x, int _y) {
//        x = _x;
//        y = _y;
//    }
//};
//	Point point;
//    int x, y;
//	scanf("%d%d", &x, &y);
//    point = Point(x, y);	//ʹ�ø�ֵ���� 
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
	
//��main�����У�����3��������a,b��c����max3������������е����ֵ�������
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
	//�����ꡢ�¡��ա�ʱ���֡��룬����"YYYY-MM-DD HH:MI
//"��ʽ���ַ����������ע������ʹ��sprintf���������ַ����������
//	int yyyy,mm,dd,hh,mi,ss;
//	scanf("%d %d %d %d %d %d",&yyyy,&mm,&dd,&hh,&mi,&ss);
//	sprintf(str, "%04d-%02d-%02d %02d:%02d:%02d", yyyy, mm, dd, hh, mi, ss);
//	printf("%s",str);
	//��Ԫ�����  �ַ������� 
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



	//strcmp���ַ���1���ַ���2��
	//�����ǱȽ��ַ���1���ַ���2
//	char a[10]={"girl"};
//	char b[10]={"hill"};
//	cout<<strcmp(b,a);
	//�ַ���a>�ַ���b������ֵΪ������
	// �ַ���a<�ַ���b������ֵΪ������
	//�ַ���a=�ַ���b������ֵΪ0

		
	//strcpy(�ַ�����1,�ַ���2)  
	//���ַ���2���Ƶ��ַ�����1��ȥ
//	char a[50],b[]={"china"};
//1��	strcpy(a,"china");     strcpy���ַ����������ַ�������/�ַ���������
//2��	strcpy(a,b); 
//	cout<<a; 


	//ƴ���ַ���
//	string a,b;
//	cin>>a>>b; 
//1��	cout<<a+b;
//2��	char a[50],b[50];
//strcat(a,b)���������þ������������ַ������е��ַ���
// ���ַ���b�ӵ��ַ���a�ĺ��� 
//	cin>>a>>b;
//	strcat(a,b);
//	cout<<a;


//���������ַ������Ƚ����ǵ��ֵ����С
//	string a,b;
//	cin>>a>>b;
//	if(a>b){
//		cout<<">";
//	}else if(a==b){
//		cout<<"=";
//	}else{
//		cout<<"<";
//	}

//����һ�� �ַ��� ������ĳ���  
//strlen(str)��str.length()��str.size()��sizeof(str)���������ַ������ȡ�
//str.length()��str.size()��sizeof(str)��������string�����ĳ�Ա����
//strlen(str)���������ַ�����ĳ��ȣ��������char* 
//2��	char str[50];
//	gets(str);
//	cout<<strlen(str)<<endl;
//const int MAXN = 50;
//char str[MAXN];
//1��	cin.getline(str,MAXN);
//	printf("%d",(int)strlen(str));
//32�ַ����������II 
//	int n=0;
//	cin>>n;
//3�� 
//	for (int i = 0; i < n; i++) {
//        scanf("%*c%[^\n]", str);
//        puts(str);
//    }
//2�� 
//    getchar(); // ����ʹ�� cin.get()
//    for (int i = 0; i < n; i++) {
//        cin.getline(str, MAX_LEN);
//        puts(str);
//    }
// 1��   getchar(); // ����ʹ�� cin.get()
//    for (int i = 0; i < n; i++) {
//        cin.getline(str, MAXN);
//        puts(str);
//    }


//�ַ����������   cin.getline������scanf��"%[^\n]",str����fgets���� 
//3��	 fgets(str, MAXN, stdin);
////    str[strcspn(str, "\n")] = '\0';
//    printf("%s", str);
	 
//2��	scanf("%[^\n]", str);
//	//	'^' �� '\n'  ��ʾ���뻻���ַ��ͽ������� 
//    printf("%s", str);

//1�����Ƽ���c++ cin.getline()�����÷�	��Ҫ�����ַ������� 
//	cin.getline(str,MAXN);
//	printf("%s",str);




//memset():���Խ�������ÿ��Ԫ�����ֽ�Ϊ��λ��ֵ
//	int x,a[10];
//	cin>>x;
//	memset(a, x, sizeof(a));
//    printf("%d", a[0]);



//��һ���������ʱ���ں����ڲ����������ջ��������ջ�����Է�����ڴ�С�������ױ���
//������ȫ�ֵ�ʱ�򣬻����ڶ������������Է�����ڴ�ϴ��ʺϿ������� 
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



// ��ά�����������  ������� 
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


//ð������  ûɶ�� 
//	int n,a[100];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=1;i<=n-1;i++){			//���±�1���±�n-1 
//		for(int j=0;j<n-1;j++){			//���±�0���±�n-2 
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


//һά����������� 
//	int a[100],n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		printf("%d",a[i]);
//		printf(i<n?" ":"\n");
//��λ��������ã���������һ���ո��������ĩ�������ж���Ŀո�
//	}
	


//���е�i��Ϊ��1��n-i+1����������������������һ���ո��������ĩ�������ж���Ŀո�
//	int n;
//	cin>>n;
//	for(int i=n;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			printf("%d",j);
//			printf(i>j?" ":"\n");
//		}
//	}
	
	
//���е�i��Ϊ��1��i����������������������һ���ո��������ĩ�������ж���Ŀո�
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
				//��λ������������ж��ǲ���ո��ǻ��� 
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
//����ѭ����ǰn���	
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
//	cout<<"ǰn���Ϊ��"<<count;
	
	
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
//		//���������ж�n�Ƿ�Ϊ���� 
//		cout<<"Odd Number"<<endl;
//	}
	
//sqrt() ������		log����a������Ȼ����eΪ�Ķ��� 
//	float d;
//	cin>>d;
//	printf("%f %f",sqrt(d),log(d));
				//sqrt(a)��a������ƽ�������������ţ�
				//log��a����a������Ȼ����eΪ�׵Ķ��� 
	
// ����ֵ  ����ȡ��  ����ȡ��  ��������  a��b�η� 
//	double d;
//	cin>>d;
//	 printf("%.2f %.0f %.0f %.0f %.2f", fabs(d), floor(d), ceil(d), round(d), pow(d, 5));
	 								//fabs(a):a�ľ���ֵ
									//floor(a):a������ȡ��
									//ceil(a):a������ȡ��
									//round(a):a����������
									//pow(a,b):a��b�η�������bҲ�����Ǹ����� 
	
	
	//getchar���˿��Խ��ܵ����ַ����������������ջ��з� 
//	int n;
//	cin>>n;
//	getchar();
//	char c=getchar();
//	n++;
//	cout<<n<<endl;
//	cout<<c<<endl;
//	
	
	
	
	//���ַ�������� ʱ �� �� ���㲹�� 
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
	
	
	
	//����ʱ��������� 
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
	
//9  ���峣�� ��const��� 
//const float a = 3.14; 
	//#define  const
	//��Ϊ#define�������Ǻ��滻��ֻ����ǡ��Ҳ���������峣�� 
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
