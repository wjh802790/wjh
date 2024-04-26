//结题思路 
//要么一次性读取数据后面再慢慢判断
//要么边输入边判断两种情况，不过答案要先存起来
//乒乓球
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
//#include <bits/stdc++.h>//万能文件头
//using namespace std;
//char s;//11分制的
//string a;//再来一个21分制
//long long w,l,i;
//int main(){
//    while(cin>>s && s != 'E')//输入，碰到E就停止
//    {
//        if(s == 'W') {w++;a+=s;}
//        //如果是W华华加分，a+=s是为21分制做好记录，下同
//        if(s == 'L') {l++;a+=s;}
//        if((w >= 11 || l >= 11) && (w - l >=2 || l - w >= 2))//这个判断是乒乓球比赛的规则啦
//        { 
//            cout<<w<<":"<<l<<endl;//输出
//            w=0;//一局比赛结束，开始下一局
//            l=0;
//        }
//        i++;//做了几次循环，记录好
//    }
//        cout<<w<<":"<<l<<endl<<endl;
//        //如果有多的再输出一次，下同
//    w=0;l=0;//准备进入21分制
//        for(int j;j<=i;j++)
//        //来个for循环，因为a是string定义的
//        {
//        if(a[j] == 'W') w++;//前面记录好的比分再来一次
//        if(a[j] == 'L') l++;
//        if((w >= 21 || l >= 21) && (w - l >=2 || l - w >= 2))//21分制比赛
//        {
//            cout<<w<<":"<<l<<endl;//输出
//            w=0;
//            l=0;
//        }
//    }
//    cout<<w<<":"<<l;
//}
//扫雷
//1.
//#include<iostream>
//using namespace std;
//int main()
//{
//    char a[105][105];
//    int b[105][105],n,m,i,j;//数组定义（二维）
//    cin>>n>>m;//读入行、列
//    for(i=1;i<105;i++)
//        for(j=1;j<105;j++)
//            b[i][j]=0;//给数组赋值为0
//    for(i=1;i<=n;i++)
//        for(j=1;j<=m;j++)
//        {
//            cin>>a[i][j];
//            if(a[i][j]=='*')//判断：如果是地雷
//            {
//                b[i+1][j+1]++;
//                b[i+1][j-1]++;
//                b[i+1][j]++;
//                b[i][j+1]++;
//                b[i][j-1]++;
//                b[i-1][j]++;
//                b[i-1][j+1]++;
//                b[i-1][j-1]++;//相邻的八个格子都+1                
//            }
//        }
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<=m;j++)
//        {
//            if(a[i][j]=='*')
//                cout<<"*";//如果是地雷（*） 原样输出
//            else
//                cout<<b[i][j];//否则输出数字
//        }    
//        cout<<endl;
//    }
//    return 0;
//} 
//2.
//#include<bits/stdc++.h>
//using namespace std;
//bool a[105][105];//一张地图，有雷为一，无雷为零 
//int main()
//{
//    memset(a,0,sizeof(a));//地图最开始清空 
//    int n,m;
//    char tmp;
//    cin>>n>>m; 
//    for(int i=1;i<=n;i++)//读入地图 
//    {
//        for(int j=1;j<=m;j++) 
//        {
//            cin>>tmp;//读入每一个点 
//            if(tmp=='*') a[i][j]=1;//如果是地雷就将这个点设为一 
//        }
//    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//        {
//            if(a[i][j]==1) printf("*"); //如果是地雷不用输出数字 
//            else
//            {
//                printf("%d",a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1]);
//                //将旁边的雷加起来输出 
//            }
//        }
//        printf("\n");
//    }
//    return 0;//愉快的结束了主程序 
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
//				a[i][j]=1;//如果是地雷就将这个点设为1 
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
//玩具谜题 
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//struct nod{
//	int we;			//玩具的编码（朝里还是朝外） 
//	string name;	//玩具名字 
//}p[10000];
//struct zhiling{
//	int lr;		//（向左还是向右）
//	int move;	//移动几格 
//}a[10000];
//int main(){
//	int n,m,x=1; //关键是x的值为1还是0 
//	cin>>n>>m;//输入流 
//	for(int i=1;i<=n;i++){
//		cin>>p[i].we>>p[i].name;
//	}
//	for(int j=1;j<=m;j++){
//		cin>>a[j].lr>>a[j].move;
//	}
//	for(int i=1;i<=m;i++){//移动 
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
//	cout<<p[x].name<<endl;//输出 
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

//高精度 A+Bproblem 
//#include<stdio.h>
//#include<string>
//#include<string.h>
//#include<iostream>
//using namespace std;
////compare比较函数：相等返回0，大于返回1，小于返回-1
//int compare(string str1,string str2)
//{
//    if(str1.length()>str2.length()) return 1;
//    else if(str1.length()<str2.length())  return -1;
//    else return str1.compare(str2);
//}
////高精度加法
////只能是两个正数相加
//string add(string str1,string str2)//高精度加法
//{
//    string str;
//    int len1=str1.length();
//    int len2=str2.length();
//    //前面补0，弄成长度相同
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
////高精度减法
////只能是两个正数相减，而且要大减小
////*string sub(string str1,string str2)//高精度减法
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
//    str.erase(0,str.find_first_not_of('0'));//去除结果中多余的前导0
//    return str;
//}
////高精度乘法
////只能是两个正数相乘
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
////高精度除法
////两个正数相除，商为quotient,余数为residue
////需要高精度减法和乘法
//void div(string str1,string str2,string &quotient,string &residue)
//{
//    quotient=residue="";//清空
//    if(str2=="0")//判断除数是否为0
//    {
//        quotient=residue="ERROR";
//        return;
//    }
//    if(str1=="0")//判断被除数是否为0
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
//            for(char ch='9';ch>='0';ch--)//试商
//            {
//                string str,tmp;
//                str=str+ch;
//                tmp=mul(str2,str);
//                if(compare(tmp,tempstr)<=0)//试商成功
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
//阶乘之和 
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
//阶乘之和 
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
//#include<bits/stdc++.h>//神犇万能头
//using namespace std;
//long long FA(int a){//定义阶乘函数，在此求出每个数的阶乘 
//	long long b=1;//定义变量 	
//	for(int i=1;i<=a;i++)//计算阶乘 	   
//	b*=i;	
//	return b;//返回值 
//} 
//int main(){	
//	long long ans=0,n;//定义变量 	
//	cin>>n;//输入n 	
//	for(int i=1;i<=n;i++)//计算每个数的阶乘的和 
//    	    	ans+=FA(i);	
//	cout<<ans;//输出 	
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
