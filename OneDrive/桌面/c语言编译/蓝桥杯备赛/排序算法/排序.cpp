//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
	//ѡ��ѧ�� 
//	int arr[2000000],n,m;
//	cin>>n>>m;
//	for(int i = 0; i < m; i++ ){
//		cin>>arr[i];
//	}
//	sort(arr,arr+m);
//	sort���� 
//	for(int i=0;i<m;i++){
//		cout<<arr[i]<<" ";
//	}

	//����
	//������ʹ��ð���������ѡ��������ʱ�临�Ӷ�Ҫ�� 
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


	//���kС����
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
	//�����������
	//Ͱ���� ��ȥ������ 
	//��1����������Ȼ��ȥ�� 
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
	//��2��Ͱ���� 
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
//        if(bus[x])  //���������Ѿ����ֹ��ˣ���ô����
//            continue;
//        bus[x]++;  //���û�г��֣������ݷ���Ͱ�����������++
        
//    }
//    cout<<sum<<endl;
//    for(int i=1;i<=1000;i++)
//        if(bus[i])
//            cout<<i<<' ';
//    cout<<endl;
//    return 0;
//	��3��ð������
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
//		}//����
//	for(int i=1;i<=n-1;i++)
//	  for(int j=i+1;j<=n;j++)
//		if(a[i]==a[j])a[j]=0;//ȥ��
//	for(int i=1;i<=n;i++)
//	if(a[i]!=0)sum++;
//	cout<<sum<<endl;
//	for(int i=1;i<=n;i++)
//	if(a[i]!=0)
//	cout<<a[i]<<" ";
//	return 0;
//} 

	//���ֵ��� 
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
//				max = i;		//��Ҫ��Ū����� 
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
//struct student //ѧ�� 
//{
//    int c; //���ĳɼ� 
//    int m; //��ѧ�ɼ� 
//    int e; //Ӣ��ɼ� 
//    int all; //�ܷ� 
//    int num; //ѧ��ѧ�� 
//}; //ע��������һ���ֺ� 
//int main()
//{
//    int n,max=1,j=0; //j���������ѧ���ĸ��� 
//    student a[301];
//    cin>>n;
//    for(int i=1;i<=n;++i) //����ÿһ��ѧ�� 
//    {
//        cin>>a[i].c>>a[i].m>>a[i].e; //����ɼ� 
//        a[i].all=a[i].c+a[i].m+a[i].e; //�����ܷ� 
//        a[i].num=i; //ѧ�� 
//    }
//    while(j!=5) //��ȻҲ����ֱ�Ӷ���һ���ȽϺ�������������ֱ�� 
//    {
//        for(int i=2;i<=n;++i) //++i �� i++ Ҫ��һЩ 
//        {
//            if(a[i].all>a[max].all || (a[i].all==a[max].all && a[i].c>a[max].c) || (a[i].all==a[max].all && a[i].c==a[max].c && a[i].num<a[max].num))//��Ȼ�С����Һ�򡱣�������Ҫ��������ϰ�� 
//            {
//                max=i;
//            }
//        }
//        cout<<a[max].num<<" "<<a[max].all<<endl;
//        a[max].all=-1;
//        max=1;
//        ++j;
//    }
//    return 0; // лĻ 
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
//		s[max].count=0;					//����������ǽ����������������ֵ���㣬��Ȼ����һֱ�����һ������ 
//		max = 1;
//		j++;
//	}
//	return 0;
//} 
//������ͳ
	//��1:string��¼ 
	//��1��sort
	//��2:strcmp  �Ƚ� ���� ƴ�� 
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
	//��1:string 100 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n = 0,id;
//	string a,max="";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a;
//		int asize = a.size(); //size()��length����һ������ ��ȡ�ַ������� 
//								//sizeof�������ڻ�ȡ������ռ�ڴ�ռ��С 
//		int maxsize=max.size();
//		if(asize > maxsize ||(asize>=maxsize && a>max)){
//			max = a;
//			id = i+1;
//		}
//	}
//	cout<<id<<endl<<max<<endl;
//	return 0;
//}	
	//��2:strcmp
//	include<iostream>
//include<cstring>  
//using namespace std; int main(){
//int n,num;  
//char a[201],max[201]="";
//cin>>n;
//for(int i=1;i<=n;i++){                      
//    cin>>a;  
//    if((strlen(max)<strlen(a))||(strlen(a)==strlen(max)&&strcmp(max,a)<0)){//��a�ĳ���==max�ĳ��ȣ�����strcmp�Ƚ�  
//        strcpy(max,a);  
//        num=i;  
//    }  
//}
//cout<<num<<endl;  
//puts(max);//���
//return 0; // �����ټ���
//} 
	//��2��sort 


























