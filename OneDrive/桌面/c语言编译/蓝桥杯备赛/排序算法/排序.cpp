//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
	//选举学生 
//	int arr[2000000],n,m;
//	cin>>n>>m;
//	for(int i = 0; i < m; i++ ){
//		cin>>arr[i];
//	}
//	sort(arr,arr+m);
//	sort快排 
//	for(int i=0;i<m;i++){
//		cout<<arr[i]<<" ";
//	}

	//排序
	//还可以使用冒泡排序或者选择排序但是时间复杂度要高 
//	int arr[100000000],n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	} 
//	int flag = 1;

//	sort(arr,arr+n);
//	for(int i=0;i<n;i++){
//		printf("%d",arr[i]);
//		flag++;
//		printf(flag<=n?" ":" \n");
//	}
//	return 0;


	//求第k小的数
//	int arr[5000000],n,k;
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	sort(arr,arr+n);
//	int min = 0;
//	int count = -1;
//	int i = 0;
//	while(i<n){
//		min = arr[i];
//		count++;
//		if(count==k){
//			break;
//		}
//		i++;
//}
//	cout<<min;
//	return 0;
//	
	//明明的随机数
	//桶排序 和去重排序 
	//法1：重新排序然后去重 
//	int arr[1000],n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	} 
//	sort(arr,arr+n);
//	int a = 0,count = 0;
//	for(int i = 0;i<n;i++){
//		if(arr[i]!=arr[i+1]){
//			count++;
//		}
//	}
//	cout<<count<<endl;
//	for(int i=0;i<n;i++){
//		if(arr[i]!=arr[i+1]){
//			cout<<arr[i]<<" ";
//		}
//	}
//	return 0;
	//法2：桶排序 
//	int n,x;
//    cin>>n;
//    int sum=0,bus[1002]={0};
//    for(int i=1;i<=n;i++){
////        cin>>x;
//		cin>>x;
//		bus[x]=x;
//		if(bus[x]){
//			continue;
//		}
//		sum++;
//		bus[x]++;
		
	
//		bus[x++];
//        if(bus[x])  //如果这个数已经出现过了，那么跳过
//            continue;
//        bus[x]++;  //如果没有出现，把数据放在桶里，并让总数居++
        
//    }
//    cout<<sum<<endl;
//    for(int i=1;i<=1000;i++)
//        if(bus[i])
//            cout<<i<<' ';
//    cout<<endl;
//    return 0;
//	法3：冒泡排序
//#include<iostream>
//using namespace std;
//int a[101];
//int main()
//{
//	int n,b,sum=0;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	cin>>a[i];
//	for(int i=1;i<=n-1;i++)
//	  for(int j=i+1;j<=n;j++)
//		{
//			if(a[i]>a[j])
//		   {
//			b=a[i];
//			a[i]=a[j];
//			a[j]=b;
//		   }
//		}//排序
//	for(int i=1;i<=n-1;i++)
//	  for(int j=i+1;j<=n;j++)
//		if(a[i]==a[j])a[j]=0;//去重
//	for(int i=1;i<=n;i++)
//	if(a[i]!=0)sum++;
//	cout<<sum<<endl;
//	for(int i=1;i<=n;i++)
//	if(a[i]!=0)
//	cout<<a[i]<<" ";
//	return 0;
//} 

	//欢乐的跳 
//	int a[1000],i=0,flag=0,count=0;	
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	bool ta = false;
//	int len = sizeof(a)/sizeof(a[0]) -1;
//	for(int i=0;i<n;i++){
//		if(a[i]==1&&a[i+1]==len-1|a[i-1]==len-1){
//			ta = true;
//			cout<<"Jolly";
//			return 0;
//		}
//		
//	}
//	if(ta==false){
//		cout<<"Not jolly";
//	}
//	
//	return 0;
//	int n = 0;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		
//	}
// 	
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct stu{
//	int id;
//	int yu;
//	int shu;
//	int ying;
//	int count=0;
//}s[301];
//int main(){
//	int n,max=1,j=0;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>s[i].yu>>s[i].shu>>s[i].ying;
//		s[i].count=s[i].yu+s[i].shu+s[i].ying;
//		s[i].id=i;
//	}
//	while(j!=5){
//		for(int i=2;i<=n;++i){
//			if(s[i].count>s[max].count||(s[i].count==s[max].count && s[i].yu>s[max].yu)||(s[i].count==s[max].count && s[i].yu==s[max].yu && s[i].id<s[max].id)){
//				max = i;		//重要是弄清规律 
//			}
//		}
//		cout<<s[max].id<<" "<<s[max].count<<endl;
//		s[max].count=-1;
//		max=1;
//		j++;
//	}
//
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct student //学生 
//{
//    int c; //语文成绩 
//    int m; //数学成绩 
//    int e; //英语成绩 
//    int all; //总分 
//    int num; //学生学号 
//}; //注意这里有一个分号 
//int main()
//{
//    int n,max=1,j=0; //j：现输出的学生的个数 
//    student a[301];
//    cin>>n;
//    for(int i=1;i<=n;++i) //处理每一个学生 
//    {
//        cin>>a[i].c>>a[i].m>>a[i].e; //输入成绩 
//        a[i].all=a[i].c+a[i].m+a[i].e; //计算总分 
//        a[i].num=i; //学号 
//    }
//    while(j!=5) //当然也可以直接定义一个比较函数，但这样更直观 
//    {
//        for(int i=2;i<=n;++i) //++i 比 i++ 要快一些 
//        {
//            if(a[i].all>a[max].all || (a[i].all==a[max].all && a[i].c>a[max].c) || (a[i].all==a[max].all && a[i].c==a[max].c && a[i].num<a[max].num))//虽然有“先且后或”，但还是要养成良好习惯 
//            {
//                max=i;
//            }
//        }
//        cout<<a[max].num<<" "<<a[max].all<<endl;
//        a[max].all=-1;
//        max=1;
//        ++j;
//    }
//    return 0; // 谢幕 
//}



//#include<bits/stdc++.h>
//using namespace std;
//struct stu{
//	int c,m,e;
//	int count;
//	int id;
//}s[300];
//int main(){
//	int n,max=0,j=0;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>s[i].c>>s[i].m>>s[i].e;
//		s[i].count=s[i].c+s[i].m+s[i].e;
//		s[i].id = i+1;	
//	}
//	while(j<5){
//		for(int i=0;i<n;i++){
//			if(s[i].count>s[max].count||s[i].count==s[max].count && s[i].c>s[max].c||s[i].count==s[max].count && s[i].c==s[max].c && s[i].id>s[max].id){
//				max = i;
//			}
//		}
//		cout<<s[max].id<<" "<<s[max].count<<endl;
//		s[max].count=0;					//这里的作用是将排序过后的数组最大值清零，不然后面一直是这第一个数； 
//		max = 1;
//		j++;
//	}
//	return 0;
//} 
//宇宙总统
	//法1:string记录 
	//法1：sort
	//法2:strcmp  比较 复制 拼接 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long n,a[21];
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int max = a[0],flag=0;
//	for(int i=1;i<n;i++){
//		if(max<a[i]){
//			max = a[i];
//			flag = i+1;
//		}
//	}	
//	cout<<flag<<endl;
//	cout<<max;
//	return 0;
//}
	//法1:string 100 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n = 0,id;
//	string a,max="";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a;
//		int asize = a.size(); //size()和length（）一样可以 获取字符串长度 
//								//sizeof（）用于获取对象所占内存空间大小 
//		int maxsize=max.size();
//		if(asize > maxsize ||(asize>=maxsize && a>max)){
//			max = a;
//			id = i+1;
//		}
//	}
//	cout<<id<<endl<<max<<endl;
//	return 0;
//}	
	//法2:strcmp
//	include<iostream>
//include<cstring>  
//using namespace std; int main(){
//int n,num;  
//char a[201],max[201]="";
//cin>>n;
//for(int i=1;i<=n;i++){                      
//    cin>>a;  
//    if((strlen(max)<strlen(a))||(strlen(a)==strlen(max)&&strcmp(max,a)<0)){//若a的长度==max的长度，再用strcmp比较  
//        strcpy(max,a);  
//        num=i;  
//    }  
//}
//cout<<num<<endl;  
//puts(max);//输出
//return 0; // 程序再见！
//} 
	//法2：sort 


























