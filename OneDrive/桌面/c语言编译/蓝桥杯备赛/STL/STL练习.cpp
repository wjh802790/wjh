#include<bits/stdc++.h>
using namespace std;
#include<unordered_set>
#include<unordered_map>
#include<queue>;
#include<set>;
#include<map>;
int nums[10];
//vector ����������ʵ�����
//deque����������ʵ�����
//list ���� ˫�������
//set / multiset����˫�������
//map / multimap����˫�������
//stack������֧�ֵ�����
//queue������֧�ֵ�����

//��ϣ�� 
//int main(){
//	int n,target;
//	cin>>n>>target;	
//	unordered_map<int,int> hash;
//	for(int i=0;i<n;i++){
//		cin>>nums[i];
//		hash[i]=nums[i];
//	}
//	for(int i=0;i<hash.size();i++){
//		auto it=hash.find(target-nums[i]);
//		if(it!=)
//	}
//
//	return 0;
//}

//һά�Ӵ�С���� 
//bool cmp(int x,int y){
//	return x>y;
//}
//int main(){
//	int n,value;
//	cin>>n>>value;
//	std::vector<int> vec;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		vec.push_back(a[i]);
//	}
//	
////	sort(vec.begin(),vec.end());//��С����
////	sort(vec.begin(),vec.end(),cmp);//�Ӵ�С 
//	
//	
//	return 0;
//} 

//���Ĵ��ж�
//bool ispalindrome(string s){
//	int left=0;
//	int right=s.length()-1;
//	while(left<right){
//		if(s[left]!=s[right]){
//			return false;
//		}
//		left++;
//		right--;
//	}
//	return true;
//}
//int main(){
//	string s;
//	cin>>s;
//	printf(ispalindrome(s)?"Yes":"NO");
//	return 0;
//} 


//multimap	--��ȥ�أ������Զ����� 
//int main(){
//	int n,t,s;
//	cin>>n;
//	multimap<int,int> mp;
//	for(int i=0;i<n;i++){
//		cin>>t>>s;
//		mp.insert({t,s});	
//	} 
////	mp.erase(3);
//	//ɾ����ʱ����ɾ��keyΪ3������Ԫ��,
//	//��ɾ��ָ��Ԫ��,ֻ���ڱ���������ɾ��
//	multimap<int,int>::iterator it=mp.begin();
//	for(;it!=mp.end();){
//		if((*it).first==3 && (*it).second==2){
//		it=mp.erase(it);
//		break;
//		}
//		else
//		it++;
//	}
//
//	for(auto j : mp){
//		cout<<j.first<<" "<<j.second;
//	}
//	return 0;
//} 

//map		--keyȥ�أ����Զ����� 
//int main(){
//	int n,t,s;
//	cin>>n;
//	map<int,int> mp;
//	for(int i=0;i<n;i++){
//		cin>>t;
//		mp[t]++;	
//	//�����key��Ӧ��valueֵ��¼�ľ���key���ֵĴ��� 
//	} 
//	for(int i=0;i<n;i++){
//		cin>>t>>s;
//		mp[t]=s;
//map��Ԫ�ض���pair<key,value>�ķ�ʽ 
///����Ԫ�� 
//1,		mp.insert({1,2});
//2,		mp[1]=2;
//map�������Ǹ���keyֵ���� 
//mapҲ��ȥ�صĹ��ܣ���������keyֵ��ȥ�أ���keyֵȷ����ʱ��
//�ڲ���key��ͬ�����ݣ�ֻ��ı�key��Ӧ��valueֵ 
//��������Ҳ���Ƕ�key������ 
//	}
//	for(auto j:mp){
//		cout<<j.first<<" "<<j.second<<endl;
//	}
//	return 0;
//}




//ָ�붨�巽����
// std::set<int>::iterator it =s.begin();
//set<int>::iterator it=s.begin(); 
//set��������Ĭ�ϴ�С���� 
//int main(){
//	
//	int n,t;
//	cin>>n;
//	set<int> s;
//	for(int i=0;i<n;i++){
//		cin>>t;
//		s.insert(t);
//	}
////	set<int>::iterator it=s.begin();
////	for(;it!=s.end();it++){
////		cout<<*it<<" ";
////	}
////	//����ָ�� 
////	for(auto j : s){
////		cout<<j<<" ";
////	}
////	s.erase(3);
//	//ɾ������s������ֵΪ3��Ԫ��
//	
//	//ɾ��3�����Ԫ�� 
////	auto j=s.find(3);
////	j++;
////	if(j!=s.end()){
////		j=s.erase(j);
////	} 
//	 
////	std::set<int>::iterator lit=s.begin();
////	//����ָ��ɾ��ֵΪ4��Ԫ�� 
////	for(;lit!=s.end();){
////		if(*lit==4)
////		lit=s.erase(lit);
////		else
////		lit++;
////	}
//	for(auto j:s){
//		cout<<j<<" ";
//	}
//	return 0;
//}





//�� 
//int main(){
//	priority_queue<int> dui;	
//	//Ĭ�ϴ���� ÿ�η���һ�����ֵ 
//	int n,t;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>t;
//		dui.push(t);
//	}
//	cout<<dui.top()<<endl;
//	while(dui.size()){
//		int t=dui.top();
//		dui.pop();
//		cout<<t<<" ";
//	}
//	return 0;
//}



//char a[26];
//bool check(string s){
//	unordered_map<char,int>need,window;
//	for(char c : t)
//	need[c]++;
//	
//	
//}
//int main(){
//	string s="abecdcba";
//	check(s);
//	
//} 
//int main(){
//	int a[]={10,20,50,40,30,10};
//	list<int> lsm;
//	for(int i=0;i<6;i++){
//		lsm.push_back(a[i]);
//	}
//	
//	lsm.remove(10);		//removeɾ������ֵΪ10��Ԫ�� 
//	for(list<int>::iterator it=lsm.begin();it!=lsm.end();it++){
//		cout<<*it<<" ";
//	}
//	return 0;
//} 

//int main(){
//	int a[]={10,20,50,40,30};
//	list<int> l;
//	for(int i=0;i<5;i++){
//		l.insert(a[i]);
//	}
//	return 0;
//}

//int main(){
//	int a[]={10,20,50,40,30};
//	list<int> l;
//	list<int> l2(l);
//	for(list<int>::iterator it=l.begin();it!=l.end();it++){
//		cout<<*it<<" ";
//	}
//	for(list<int>::iterator it=l2.begin();it!=l2.end();it++){
//		if(*it%2==0){
//			it=l2.erase(it);
//		}
//	}
//	for(list<int>::iterator it=l2.begin();it!=l2.end();it++){
//		cout<<*it<<" ";
//	}
//	return 0;
//}
 


//�ܽ᣺queue����
//�ص㣺�Ƚ��ȳ�
//���ṩ������ 
//��ջ push() back() 	��ջ�����ڶ�β���� 
//��ջ pop()  front()	��ջ�����ڶ�ͷ���� 
//Ԫ�ظ��� size()
//�ǿ��ж� !q.empty() 

//int main(){
//	int a[]={10,20,50,40,30};
//	queue<int> q;
//	for(int i=0;i<5;i++){
//		q.push(a[i]);
//		//��β���� 
//	}
//	
//	while(!q.empty()){
//		cout<<q.front();
//		q.pop();
//	} 
//	while(q.size()>0){
//		cout<<q.front();
//		//��ͷɾ�� 
//		q.pop();
//	}
//	
//	
//	return 0;
//} 


//�ܽ� stack
//�ص㣺 ����ȳ� 
//���ṩ������ 
//ջ�ĳ�ʼ����
//��ջ push���� ��ջ pop()
//ջ��ָ�� top() 
//ջԪ�ش�С size()
//ջ�ǿ��ж�	!s.empty() 
//int main(){
//	int a[]={10,20,50,30,40};
//	int count[5]={0};
//	stack<int> s;
//	for(int i=0;i<5;i++){
//		s.push(a[i]);
//	}
//	int i=0;
//	while(!s.empty()){	//!s.empty() ջs��Ϊ�ղ���ȡ����Ԫ�� 
//		cout<<s.top()<<endl;
//		count[i++]=s.top();
//		s.pop();
//	}
////	while(i>=0){
////		cout<<count[i--]<<" ";
////	}
//	for(i=0;i<5;i++){
//		cout<<"i:"<<i<<" "<<count[i]<<endl;
//	}
//}


//�ܽ᣺deque��vector��࣬���ǿ��Դ�����ͷ�����Ԫ��
//ʱ�临�Ӷ�o��1���������vector��ͷ�����Ԫ�أ�ʱ�临�ӶȾ���o(n) 
//void dequeprint(deque<int> &d){
//	deque<int>::iterator it=d.begin();
//	for(;it!=d.end();it++){
//		cout<<*it<<" ";
//	}
//	for(auto j : d){
//		cout<<j<<" ";
//	}
//}
//int main(){
//	int a[]={10,20,50,30,40};
//	deque<int> d;
//	for(int i=0;i<5;i++){
//		d.push_back(a[i]);
//	}
//	dequeprint(d);
//	for(int i=4;i>=0;i--){
//		d.push_front(a[i]);
//	}
//	dequeprint(d);
//	
//	
//	return 0;
//}

//�ܽ� vector
//���� insert(beg,end,i)
//���Ԫ��:push_back()
//ɾ��Ԫ��:pop_back() 
//ɾ���±�Ϊi��Ԫ��erase(beg+i,end+i+1)
//ɾ��t1-t2������Ԫ�� erase(begin+t1+1,end+t2+1) 
//Ԫ�ش�С size()
//���: clear()
//��ת���� reverse(beg,end) 
//
//void vectorprint(vector<int> &v){
//	vector<int>::iterator it=v.begin();
//	for(;it!=v.end();it++){
//		cout<<*it<<" ";
//	}
//	for(auto i : v){
//		cout<<i<<" ";
//	}
//}
//int main(){
//	int a[]={4,6,8,1,3,5,7,9};
//	vector<int> v;
//	for(int i=0;i<8;i++){
//		v.push_back(a[i]);
//	}
//	vectorprint(v);
//	
//	return 0;
//}

//	vector<int>::iterator it=v.begin();
//	for(it=v.begin();it!=v.end();it++){
//		if(*it%2==0){
//			it=v.erase(it);
//		} 
//	} 
//	for(int i=0;i<v.size();i++){
//		if((*it)%2==0){
//			it=v.erase(it);
//			it++;
//		}else{
//			it++;
//		}
//	}
//	for(it=v.begin();it!=v.end();it++){
//		cout<<*it<<" ";
//	}
//}

//int main(){
//	int x;
//	cin>>x;
//	vector<int> n;
//	for(int i=0;i<x;i++){
//		n.push_back(i);
//	}
//	vector<int>::iterator it=n.begin();
//	for(int i=0; i<n.size();i++){
//		cout<<it[i]<<" ";
//	},
//	for(it=n.begin();it!=n.end();it++){
//		cout<<*it;
//	}

//	return 0;
//} 
//vector���� 
//bool cmp1(int x,int y){
//	return x>y;
//}
//int main(){
//	int a[]={1,3,9,2,4,6};
//	vector<int> v;
//	for(int i=0;i<6;i++){
//		v.push_back(a[i]);
//	}
//	sort(v.begin(),v.end(),cmp1);
//	vector<int>::iterator it=v.begin();
//	cout<<"�Ӵ�С";
//	for(;it!=v.end();it++){
//		cout<<*it<<" ";
//	}
//	sort(v.begin(),v.end());
//	cout<<endl<<"��С����";
//	for(it=v.begin();it!=v.end();it++){
//		cout<<*it<<" ";
//	}
//	return 0;
//} 

//int main(){
//	int a[]={1,3,5,7,9,0,2,4,6,8};
//	vector<int> v1;
//	for(int i=0;i<10;i++){
//		v1.push_back(a[i]);
//	}
//	vector<int> v2(v1);
//	sort(v1.begin(),v1.end());
//	sort(v2.begin(),v2.end());
//	vector<int>::iterator it=v1.begin();
//	vector<int>::iterator it1=v2.begin();
//	for(;it!=v1.end(),it1!=v2.end();it++,it1++){
//		cout<<*it<<" ";
//		cout<<*it1<<" ";
//	}
//	cout<<v1.size()<<v2.size()<<endl;
//	reverse(v1.begin(),v1.end());
//	//reverse(��ת����) 
//	for(it=v1.begin(),it1=v2.begin();it!=v1.end(),it1!=v2.end();it++,it1++){
//		cout<<*it<<" ";
//		cout<<*it1<<" ";
//	}
////	for(int i=0;i<v1.size();i+=2){
////		v1.erase(i);
////	} 
//	for(int i=0;i<v2.size();i++){
//		cout<<v1[i]<<" ";
//	}
//	
//	
//	return 0;
//}
