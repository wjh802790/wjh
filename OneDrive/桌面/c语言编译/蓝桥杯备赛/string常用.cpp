//#include<string>
//��C�����У�һ��ʹ���ַ�����char str[ ] ������ַ�����
//����ʹ���ַ�������ʱ���Եò����鷳�������������鲻��������󣬵ò���ʧ��
//Ϊ��ʹ����߿��Ը�����Ķ��ַ������в�����C++��STL�м�����string����

//���� 
	//����string�ķ�ʽ����������������ͬ��ֻ��Ҫ��string������ϱ���������
	// ���Ҫ��ʼ��������ֱ�Ӹ�string���͵ı������и�ֵ��
//���ݵķ���
//����ǳ�ʼ����ı���������ֱ�����ַ�����һ��ȥ����
/* string str = "abcd";
	for (int i = 0; i < str.length(); i++)
	{
		printf("%c ", str[i]);//���a b c d
	}
*/

//�������Ҫ�������������ַ�����ֻ����cin��cout 
/*string str;
	cin >> str;
	cout << str;
	*/ 
	
//ͨ������������
//(��Щ��������insert()��erase()��Ҫ���Ե�����Ϊ����)
//string��������STL����������Ҫ��������˿���ֱ�����¶��壺

//string::iterator it;
/*
string str = "abcd";
	for (string::iterator it = str.begin(); it != str.end(); it++)
	{
		printf("%c ", *it);//���a b c d
*/
//string��vectorһ����
//֧��ֱ�ӶԵ��������мӼ�ĳ�����֣���str.begin() + 3��д���ǿ��е�
//string ���ú�������
	//(operator) '+',string����ֱ���� + ������stringƴ������  
	// str3 = str1 + str2;//��str1��str2ƴ�ӣ���ֵ��str3
	//str1 = str1 + str2;//��str2ֱ��ƴ�ӵ�str1��
	
	// ==,!=,<=,<,>,>=������string����ֱ��ʹ����Щ�������Ƚϴ�С 
	
	//.length() / size() 
	//length()����string�ĳ���,����ŵ��ַ���,
	//ʱ�临�Ӷ�ΪO(1),size()��length()����
	
	//.insert()  
	//1.insert(pos, string), ��pos��λ�ò���һ���ַ���string
	//2.insert(it, it2, it3), it Ϊԭ�ַ�����������λ�ã�
	//it2 �� it3 Ϊ�����ַ�������β��������
	//������ʾ��[it2, it3)��������it ��λ����
	/*
	string str = "abcxyz", str2 = "opq";//strΪԭ�ַ�����str2Ϊ�����ַ���
	//��str��3��λ����c��x֮�䣩����str2
	str.insert(str.begin() + 3, str2.begin(), str2.end());
	cout << str << endl;//���abcopqxyz
	*/
	
	//.erase()	
	//1��ɾ������Ԫ�أ�str.erase(it) ����ɾ������Ԫ�أ�itΪ��Ҫɾ����Ԫ�صĵ�����
	/*
	string str = "abcdefg";
	str.erase(str.begin() + 4);//ɾ��4��λ����e��
	cout << str << endl;//���abcdfg
	*/
	//2.ɾ��һ�������ڵ�����Ԫ�أ������ַ�����
	
	//һ��str.erase(first, last), 
	//����firstΪ��Ҫɾ�����������ʼ��������
	//��lastΪ��Ҫɾ���������ĩβ����������һ����ַ����Ϊɾ��[first, last)
	/*
	string str = "abcdefg";
	//ɾ����[str.begin() + 2, str.end() - 1)�ڵ�Ԫ�أ���cdef
	str.erase(str.begin() + 2, str.end() - 1);
	cout << str << endl;//���abg
	*/
	
	//����str.erase(pos, length),
	//����posΪ��Ҫ��ʼɾ������ʼλ�ã�lengthΪɾ�����ַ�����
	/*
	string str = "abcdefg";
	str.erase(3, 2);//ɾ��de
	cout << str << endl;//���abcfg
	*/
	
	//.erase() ���string�е�����,ʱ�临�Ӷ�ΪO(1)
	
	//.substr()
	// substr(pos, len) ���ش�pos��λ��ʼ������Ϊlen���Ӵ���ʱ�临�Ӷ�ΪO(len)
		

	//.find()
	/*
	str.find(str2) ��str2 ��str ���Ӵ�ʱ��
	��������str �е�һ�γ��ֵ�λ�ã����str2 ����str ���Ӵ���
	��ô����string::npos
	str.find(str2, pos), ��str ��pos ��λ��ʼƥ��str2��
	����ֵ������ͬ��
	ʱ�临�Ӷ�ΪO(M*N)��M��N �ֱ���str2 ��str�ĳ���
	*/
	
	//.replace()
	//str.replace(pos,len,str2)
	// ��str ��pos ��λ��ʼ������Ϊlen ���Ӵ��滻Ϊ��str2

	//str.replace(it1,it2,str2)
	// ��str �ĵ�����[it1, it2)��Χ���Ӵ��滻Ϊstr2

//#include<bits/stdc++.h>
//using namespace std;
//bool is(string s,string t){
//	vector<int> num1;
//	vector<int> num2;
//	for(int i=0;i<s.size();i++){
//		num1.push_back(s[i]);
//	}
//	for(int i=0;i<t.size();i++){
//		num2.push_back(t[i]);
//	}
//	sort(num1.begin(),num1.end());
//	sort(num2.begin(),num2.end());
//
//	
//	for(int i=0;i<26;i++){
//		if(num1[i]!=num2[i]){
//			return false;
//		}
//	}
//	return true;
//}
//int main(){
//	string s,t;
//	cin>>s>>t;
//	is(s,t);
//	printf(is(s,t)?"true":"false");
//	return 0;
//}

//#include <iostream>
// 
//using namespace std;
// 
//string s1,s2;
//int a[1000];
//int b[1000];
//int c[1001];
// 
//int main()
//{
//    cin >>s1 >>s2;
//    int la=s1.length();
//    int lb=s2.length();
// 
//    for (int i=0;i<la;i++)
//    {
//        a[la-i] = s1[i] - '0';    //ת������
//    }
//    for (int i=0;i<lb;i++)
//    {
//        b[lb-i] = s2[i] - '0';
//    }
// 
//    int lc = max(la,lb)+1;       //c����ĳ���
//    for (int i=1;i<=lc;i++)
//    {
//        c[i] += a[i] + b[i];     //���Ĵ���
//        c[i+1] = c[i]/10;
//        c[i] = c[i]%10;
//    }
// 
//    if (c[lc]==0 && lc>0) lc--;  //����ǰ��0
//    for (int i=lc;i>0;i--)
//    {
//        cout <<c[i];
//    }
//    return 0;
//}


//#include <iostream>
//#include <string>
// 
//using namespace std;
// 
//string s1,s2;
//string s3;
//bool flag=0;
// 
//int a[10100],b[10100],c[10100];
// 
//bool comp(string a,string b)
//{
//    int la=a.length();
//    int lb=b.length();
//    if (la!=lb) return la>lb;
//    else
//    {
//        for (int i=0;i<la;i++)
//        {
//            if (a[i]!=b[i])
//            {
//                return a[i]>b[i];
//                break;
//            }
//        }
//    }
//}
// 
//int main()
//{
//    cin >>s1 >>s2;
//    if (!comp(s1,s2))
//    {
//        s3=s1;
//        s1=s2;
//        s2=s3;
//        flag=1;                 //����λ��ı� flag
//    }
// 
// 
//    int la=s1.length();
//    int lb=s2.length();
//    for (int i=0;i<la;i++)
//    {
//        a[la-i]=s1[i]-'0';
//    }
//    for (int i=0;i<lb;i++)
//    {
//        b[lb-i]=s2[i]-'0';
//    }
//    int lc=max(la,lb);          //��ӷ���ͬ c ����ĳ�������� a��b�нϳ��Ǹ�
//    for (int i=1;i<=lc;i++)
//    {
//        if (a[i]<b[i])          //��λ�ж�
//        {
//            a[i+1]--;           //����������λ��1
//            a[i]+=10;           //��λ+10
//        }
//        c[i]=a[i]-b[i];
//    }
// 
//    while (c[lc]==0&&lc>1) lc--;  //����ǰ��0��������߾������в�ͬ
//    if(lc==1&&c[0]==0) flag=0;    //���Ϊ0������²���� - ��
//    if(flag) cout <<"-";
// 
//    for (int i=lc;i>0;i--)
//    {
//        cout <<c[i];
//    }
// 
//    return 0;
//}

/*=========================================
 
�߾���
 
�����㷨������ʽ�������ҳ��Ĺ��ɣ�
 
c[i+j-1] += a[i] * b[j];
 
c[i+j] += c[i+j-1]/10;
 
c[i+j-1] %= 10 ;
 
==========================================*/
 
//#include <iostream>
//#include <string>
 
//using namespace std;
// 
//string s1,s2;
//int a[2008],b[2008],c[2008];
// 
//int main()
//{
//    int la,lb,lc;
//    cin >>s1 >>s2;
//    la=s1.length();
//    lb=s2.length();
// 
//    for (int i=0;i<la;i++)
//    {
//        a[la-i]=s1[i]-'0';
//    }
//    for (int i=0;i<lb;i++)
//    {
//        b[lb-i]=s2[i]-'0';
//    }
//    lc=la+lb;                          //c �����λ�����ᳬ�����
//    for (int i=1;i<=la;i++)
//    {
//        for (int j=1;j<=lb;j++)
//        {
//            c[i+j-1] += a[i]*b[j];     //�����㷨
//            c[i+j] += c[i+j-1]/10;     //��λ
//            c[i+j-1] %= 10;            //��λ
//        }
//    }
//    if (c[lc]==0&&lc>0) lc--;          //����ǰ����
//    for (int i=lc;i>0;i--)
//    {
//        cout <<c[i];
//    }
//    return 0;
//}

