//����˼· 
//Ҫôһ���Զ�ȡ���ݺ����������ж�
//Ҫô��������ж����������������Ҫ�ȴ�����
//ƹ����
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//int main(){
//	string a[2500];
//	int i = 0;
//	int win = 0;
//	int fs = 0;
//	int  t = 1;
//	int f = 1;
//	int sum1=0;
//	int sum2=0;
//	while(scanf("%c",&a[i])!='E'){
//		if(scanf("%c",&a[i])=='W'){
//			win++;
//			sum1++;
//		}
//		if(scanf("%c",&a[i])=='L'){
//			fs++;
//			sum2++;
//		}
//		if(win==11&&fs+win<22){
//			t++;
//			win= 0;
//			fs=0;
//		}else if(fs==11&&win+fs<22){
//			f++;
//			win=0;
//			fs=0;
//		}
//		
//		
//	}	
//	cout<<"11:0"<<endl;
//	cout<<"11:0"<<endl;
//	cout<<"1:1"<<endl;
//	cout<<endl;
//	cout<<sum1<<":"<<sum2<<endl;
//	cout<<t<<":"<<f;
//} 
//#include <bits/stdc++.h>//�����ļ�ͷ
//using namespace std;
//char s;//11���Ƶ�
//string a;//����һ��21����
//long long w,l,i;
//int main(){
//    while(cin>>s && s != 'E')//���룬����E��ֹͣ
//    {
//        if(s == 'W') {w++;a+=s;}
//        //�����W�����ӷ֣�a+=s��Ϊ21�������ü�¼����ͬ
//        if(s == 'L') {l++;a+=s;}
//        if((w >= 11 || l >= 11) && (w - l >=2 || l - w >= 2))//����ж���ƹ��������Ĺ�����
//        { 
//            cout<<w<<":"<<l<<endl;//���
//            w=0;//һ�ֱ�����������ʼ��һ��
//            l=0;
//        }
//        i++;//���˼���ѭ������¼��
//    }
//        cout<<w<<":"<<l<<endl<<endl;
//        //����ж�������һ�Σ���ͬ
//    w=0;l=0;//׼������21����
//        for(int j;j<=i;j++)
//        //����forѭ������Ϊa��string�����
//        {
//        if(a[j] == 'W') w++;//ǰ���¼�õıȷ�����һ��
//        if(a[j] == 'L') l++;
//        if((w >= 21 || l >= 21) && (w - l >=2 || l - w >= 2))//21���Ʊ���
//        {
//            cout<<w<<":"<<l<<endl;//���
//            w=0;
//            l=0;
//        }
//    }
//    cout<<w<<":"<<l;
//}
//ɨ��
//1.
//#include<iostream>
//using namespace std;
//int main()
//{
//    char a[105][105];
//    int b[105][105],n,m,i,j;//���鶨�壨��ά��
//    cin>>n>>m;//�����С���
//    for(i=1;i<105;i++)
//        for(j=1;j<105;j++)
//            b[i][j]=0;//�����鸳ֵΪ0
//    for(i=1;i<=n;i++)
//        for(j=1;j<=m;j++)
//        {
//            cin>>a[i][j];
//            if(a[i][j]=='*')//�жϣ�����ǵ���
//            {
//                b[i+1][j+1]++;
//                b[i+1][j-1]++;
//                b[i+1][j]++;
//                b[i][j+1]++;
//                b[i][j-1]++;
//                b[i-1][j]++;
//                b[i-1][j+1]++;
//                b[i-1][j-1]++;//���ڵİ˸����Ӷ�+1                
//            }
//        }
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<=m;j++)
//        {
//            if(a[i][j]=='*')
//                cout<<"*";//����ǵ��ף�*�� ԭ�����
//            else
//                cout<<b[i][j];//�����������
//        }    
//        cout<<endl;
//    }
//    return 0;
//} 
//2.
//#include<bits/stdc++.h>
//using namespace std;
//bool a[105][105];//һ�ŵ�ͼ������Ϊһ������Ϊ�� 
//int main()
//{
//    memset(a,0,sizeof(a));//��ͼ�ʼ��� 
//    int n,m;
//    char tmp;
//    cin>>n>>m; 
//    for(int i=1;i<=n;i++)//�����ͼ 
//    {
//        for(int j=1;j<=m;j++) 
//        {
//            cin>>tmp;//����ÿһ���� 
//            if(tmp=='*') a[i][j]=1;//����ǵ��׾ͽ��������Ϊһ 
//        }
//    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//        {
//            if(a[i][j]==1) printf("*"); //����ǵ��ײ���������� 
//            else
//            {
//                printf("%d",a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1]);
//                //���Աߵ��׼�������� 
//            }
//        }
//        printf("\n");
//    }
//    return 0;//���Ľ����������� 
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	char x;
//	int a[101][101];
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cin>>x;
//			if(x=='*'){
//				a[i][j]=1;//����ǵ��׾ͽ��������Ϊ1 
//			}
//		}
//	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			if(a[i][j]==1){
//				printf("*");
//			}else{
//				printf("%d",a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i-1][j+1]+a[i-1][j-1]+a[i-1][j]+a[i][j-1]);
//			}
//		}
//		printf("\n");
//	} 
//	return 0;
//}
//������� 
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//struct nod{
//	int we;			//��ߵı��루���ﻹ�ǳ��⣩ 
//	string name;	//������� 
//}p[10000];
//struct zhiling{
//	int lr;		//�����������ң�
//	int move;	//�ƶ����� 
//}a[10000];
//int main(){
//	int n,m,x=1; //�ؼ���x��ֵΪ1����0 
//	cin>>n>>m;//������ 
//	for(int i=1;i<=n;i++){
//		cin>>p[i].we>>p[i].name;
//	}
//	for(int j=1;j<=m;j++){
//		cin>>a[j].lr>>a[j].move;
//	}
//	for(int i=1;i<=m;i++){//�ƶ� 
//		if(p[x].we==a[i].lr){
//			x=x-a[i].move;
//			if(x<=0){
//				x=n+x;
//			}
//		}else{
//			x=x+a[i].move;
//			if(x>n){
//				x=x-n;
//			}
//		}
//	}
//	cout<<p[x].name<<endl;//��� 
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int a[2];
//int main(){
//	int sum = 0;
//	for(int i=0;i<2;i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	cout<<sum;
//	return 0;
//} #include<iostream>

//�߾��� A+Bproblem 
//#include<stdio.h>
//#include<string>
//#include<string.h>
//#include<iostream>
//using namespace std;
////compare�ȽϺ�������ȷ���0�����ڷ���1��С�ڷ���-1
//int compare(string str1,string str2)
//{
//    if(str1.length()>str2.length()) return 1;
//    else if(str1.length()<str2.length())  return -1;
//    else return str1.compare(str2);
//}
////�߾��ȼӷ�
////ֻ���������������
//string add(string str1,string str2)//�߾��ȼӷ�
//{
//    string str;
//    int len1=str1.length();
//    int len2=str2.length();
//    //ǰ�油0��Ū�ɳ�����ͬ
//    if(len1<len2)
//    {
//        for(int i=1;i<=len2-len1;i++)
//           str1="0"+str1;
//    }
//    else
//    {
//        for(int i=1;i<=len1-len2;i++)
//           str2="0"+str2;
//    }
//    len1=str1.length();
//    int cf=0;
//    int temp;
//    for(int i=len1-1;i>=0;i--)
//    {
//        temp=str1[i]-'0'+str2[i]-'0'+cf;
//        cf=temp/10;
//        temp%=10;
//        str=char(temp+'0')+str;
//    }
//    if(cf!=0)  str=char(cf+'0')+str;
//    return str;
//}
////�߾��ȼ���
////ֻ���������������������Ҫ���С
////*string sub(string str1,string str2)//�߾��ȼ���
//{
//    string str;
//    int tmp=str1.length()-str2.length();
//    int cf=0;
//    for(int i=str2.length()-1;i>=0;i--)
//    {
//        if(str1[tmp+i]<str2[i]+cf)
//        {
//            str=char(str1[tmp+i]-str2[i]-cf+'0'+10)+str;
//            cf=1;
//        }
//        else
//        {
//            str=char(str1[tmp+i]-str2[i]-cf+'0')+str;
//            cf=0;
//        }
//    }
//    for(int i=tmp-1;i>=0;i--)
//    {
//        if(str1[i]-cf>='0')
//        {
//            str=char(str1[i]-cf)+str;
//            cf=0;
//        }
//        else
//        {
//            str=char(str1[i]-cf+10)+str;
//            cf=1;
//        }
//    }
//    str.erase(0,str.find_first_not_of('0'));//ȥ������ж����ǰ��0
//    return str;
//}
////�߾��ȳ˷�
////ֻ���������������
//string mul(string str1,string str2)
//{
//    string str;
//    int len1=str1.length();
//    int len2=str2.length();
//    string tempstr;
//    for(int i=len2-1;i>=0;i--)
//    {
//        tempstr="";
//        int temp=str2[i]-'0';
//        int t=0;
//        int cf=0;
//        if(temp!=0)
//        {
//            for(int j=1;j<=len2-1-i;j++)
//              tempstr+="0";
//            for(int j=len1-1;j>=0;j--)
//            {
//                t=(temp*(str1[j]-'0')+cf)%10;
//                cf=(temp*(str1[j]-'0')+cf)/10;
//                tempstr=char(t+'0')+tempstr;
//            }
//            if(cf!=0) tempstr=char(cf+'0')+tempstr;
//        }
//        str=add(str,tempstr);
//    }
//    str.erase(0,str.find_first_not_of('0'));
//    return str;
//}
////�߾��ȳ���
////���������������Ϊquotient,����Ϊresidue
////��Ҫ�߾��ȼ����ͳ˷�
//void div(string str1,string str2,string &quotient,string &residue)
//{
//    quotient=residue="";//���
//    if(str2=="0")//�жϳ����Ƿ�Ϊ0
//    {
//        quotient=residue="ERROR";
//        return;
//    }
//    if(str1=="0")//�жϱ������Ƿ�Ϊ0
//    {
//        quotient=residue="0";
//        return;
//    }
//    int res=compare(str1,str2);
//    if(res<0)
//    {
//        quotient="0";
//        residue=str1;
//        return;
//    }
//    else if(res==0)
//    {
//        quotient="1";
//        residue="0";
//        return;
//    }
//    else
//    {
//        int len1=str1.length();
//        int len2=str2.length();
//        string tempstr;
//        tempstr.append(str1,0,len2-1);
//        for(int i=len2-1;i<len1;i++)
//        {
//            tempstr=tempstr+str1[i];
//            tempstr.erase(0,tempstr.find_first_not_of('0'));
//            if(tempstr.empty())
//              tempstr="0";
//            for(char ch='9';ch>='0';ch--)//����
//            {
//                string str,tmp;
//                str=str+ch;
//                tmp=mul(str2,str);
//                if(compare(tmp,tempstr)<=0)//���̳ɹ�
//                {
//                    quotient=quotient+ch;
//                    tempstr=sub(tempstr,tmp);
//                    break;
//                }
//            }
//        }
//        residue=tempstr;
//    }
//    quotient.erase(0,quotient.find_first_not_of('0'));
//    if(quotient.empty()) quotient="0";
//}
//�׳�֮�� 
//#include<bits/stdc++.h>
//using namespace std;
//int fi(int n){
//	int sum = n;
//	if( n == 1){
//		return n;
//	}else{
//		for(int i=n;i>=1;i--){
//			for(int j=n-1;j<i;j++){
//			
//			sum*=j;
//				
//			}
//		}
//		return sum;
//	}
//}
//int main(){
//	int n = 0;
//	cin >> n;
//	printf("%d",fi(n));
//}
//�׳�֮�� 
//#include<bits/stdc++.h>
//using namespace std;
//long long jie(int n){
//		long long a = 1;
//		for(int i=1;i<=n;i++){
//			a*=i;
//		}
//	return a;
//}
//int main(){
//	long long  n=0;
//	cin>>n;
//	long long sum = 0;
//	for(int i=1;i<=n;i++){
//		sum+=jie(i);
//	}
//	cout<<sum;
//	return 0;
//} 
//#include<bits/stdc++.h>//�������ͷ
//using namespace std;
//long long FA(int a){//����׳˺������ڴ����ÿ�����Ľ׳� 
//	long long b=1;//������� 	
//	for(int i=1;i<=a;i++)//����׳� 	   
//	b*=i;	
//	return b;//����ֵ 
//} 
//int main(){	
//	long long ans=0,n;//������� 	
//	cin>>n;//����n 	
//	for(int i=1;i<=n;i++)//����ÿ�����Ľ׳˵ĺ� 
//    	    	ans+=FA(i);	
//	cout<<ans;//��� 	
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//long long jie(int a){
//	long long b = 1;
//	for(int i=1;i<=a;i++){
//		b*=i;
//	}
//	return b;
//}
//int main(){
//	long long n,sum=0;
//	cin>>n;
//	for(int i=n;i>=1;i--){
//		sum+=jie(i);
//	}
//	cout<<sum;
//	return 0;
//}
