//int main(){
//字符串输入输出函数 gets,puts,cin.getline()，


//while (scanf("%d", &n) != EOF){	}  		//考虑到多组输入，所以写成循环的形式
 
//字符串的输入 gets函数

/*如果前面使用过 gets()，
而后面又要从键盘给字符变量赋值的话就不需要吸收回车清空缓冲区了，
因为缓冲区的回车已经被 gets() 取出来扔掉了
而使用scanf函数在下一个变量赋值前就需要用getchar()清空缓存区
*/
 
//gets() 用来输入一行字符串，识别'\n' 结束，遇到空格不会结束哦， 
//puts()用来输出一行字符串,puts() 用来输出一行字符串，并且紧跟一个换行 


//cin()	//用法1：输入一个数字或字符
		//int a,b;
		//cin>>a>>b;
		//cout<<a+b<<endl;
		//用法2：接收一个字符串，遇“空格”、“TAB”、“回车”就结束
		//char a[20];
		//cin>>a;
		//cout<<a<<endl;
		
//cin.getline()	用法:接收一个字符串，可以接收空格并输出
		//char m[20];
		//cin.getline(m,5);
  		//cout<<m<<endl;
  		//延伸 
  		//1、cin.getline()实际上有三个参数，
		  	//cin.getline(接收字符串的变量,接收字符个数,结束字符)
  		//2、当第三个参数省略时，系统默认为'\0'
		//3、如果将例子中cin.getline()改为cin.getline(m,5,'a');
		//当输入jlkjkljkl时输出jklj，输入jkaljkljkl时，输出jk
		
//	getline()	用法:接收一个字符串,可以接收空格并输出,需包含“#include<string>”


	//注意的问题
		//1、cin.getline()属于istream流，而getline()属于string流，
		//是不一样的两个函数

		//2、当同时使用cin>>,getline()时，需要注意的是，
		//在cin>>输入流完成之后，getline()之前，需要通过
		//str="\n";
		//getline(cin,str);
		//的方式将回车符作为输入流cin以清除缓存，如果不这样做的话，
		//在控制台上就不会出现getline()的输入提示，而直接跳过，
		//因为程序默认地将之前的变量作为输入流。
	
	
//	int a,b;
//	cin>>a>>b;
//	cout<<a+b<<endl;
//	getchar();	//中间需要加上getchar()清空缓存区 
//	char str[100] ;
//	gets(str);
//	printf("%s\n",str);


//	puts(str);
//	char str1[50];
//	cin.getline(str1,11);
	//cin,getline(str1,n)
	//输入的时候，是10个字符，因为第三个参数自动定义为'\0',
	//所有cin.getline只会读取前10个字符,也就是n-1个字符 
//	puts(str1);
//	printf("%s",str1);

//getline用法 
//	string name;
//	getline(cin,name);
//	cout<<name<<endl;
//	return 0;
//}

