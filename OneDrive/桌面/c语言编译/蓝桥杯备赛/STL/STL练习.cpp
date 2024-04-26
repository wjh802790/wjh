#include<bits/stdc++.h>
using namespace std;
#include<unordered_set>
#include<unordered_map>
#include<queue>;
#include<set>;
#include<map>;
int nums[10];
//vector ——随机访问迭代器
//deque——随机访问迭代器
//list —— 双向迭代器
//set / multiset——双向迭代器
//map / multimap——双向迭代器
//stack——不支持迭代器
//queue——不支持迭代器

//哈希表 
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

//一维从大到小排序 
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
////	sort(vec.begin(),vec.end());//从小到大
////	sort(vec.begin(),vec.end(),cmp);//从大到小 
//	
//	
//	return 0;
//} 

//回文串判断
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


//multimap	--不去重，但是自动排序 
//int main(){
//	int n,t,s;
//	cin>>n;
//	multimap<int,int> mp;
//	for(int i=0;i<n;i++){
//		cin>>t>>s;
//		mp.insert({t,s});	
//	} 
////	mp.erase(3);
//	//删除的时候是删除key为3的所有元素,
//	//想删除指定元素,只能在遍历过程中删除
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

//map		--key去重，且自动排序 
//int main(){
//	int n,t,s;
//	cin>>n;
//	map<int,int> mp;
//	for(int i=0;i<n;i++){
//		cin>>t;
//		mp[t]++;	
//	//这里的key对应的value值记录的就是key出现的次数 
//	} 
//	for(int i=0;i<n;i++){
//		cin>>t>>s;
//		mp[t]=s;
//map中元素都是pair<key,value>的方式 
///插入元素 
//1,		mp.insert({1,2});
//2,		mp[1]=2;
//map的排序都是根据key值排序 
//map也有去重的功能，不过是在key值上去重，当key值确定的时候，
//在插入key相同的数据，只会改变key对应的value值 
//其它函数也都是对key起作用 
//	}
//	for(auto j:mp){
//		cout<<j.first<<" "<<j.second<<endl;
//	}
//	return 0;
//}




//指针定义方法：
// std::set<int>::iterator it =s.begin();
//set<int>::iterator it=s.begin(); 
//set集合有序，默认从小到大 
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
////	//智能指针 
////	for(auto j : s){
////		cout<<j<<" ";
////	}
////	s.erase(3);
//	//删除集合s内所有值为3的元素
//	
//	//删除3后面的元素 
////	auto j=s.find(3);
////	j++;
////	if(j!=s.end()){
////		j=s.erase(j);
////	} 
//	 
////	std::set<int>::iterator lit=s.begin();
////	//利用指针删除值为4的元素 
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





//堆 
//int main(){
//	priority_queue<int> dui;	
//	//默认大根堆 每次返回一个最大值 
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
//	lsm.remove(10);		//remove删除所有值为10的元素 
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
 


//总结：queue队列
//重点：先进先出
//不提供迭代器 
//入栈 push() back() 	入栈操作在队尾进行 
//出栈 pop()  front()	出栈操作在队头进行 
//元素个数 size()
//非空判断 !q.empty() 

//int main(){
//	int a[]={10,20,50,40,30};
//	queue<int> q;
//	for(int i=0;i<5;i++){
//		q.push(a[i]);
//		//队尾插入 
//	}
//	
//	while(!q.empty()){
//		cout<<q.front();
//		q.pop();
//	} 
//	while(q.size()>0){
//		cout<<q.front();
//		//队头删除 
//		q.pop();
//	}
//	
//	
//	return 0;
//} 


//总结 stack
//重点： 后进先出 
//不提供迭代器 
//栈的初始化，
//入栈 push（） 出栈 pop()
//栈顶指针 top() 
//栈元素大小 size()
//栈非空判断	!s.empty() 
//int main(){
//	int a[]={10,20,50,30,40};
//	int count[5]={0};
//	stack<int> s;
//	for(int i=0;i<5;i++){
//		s.push(a[i]);
//	}
//	int i=0;
//	while(!s.empty()){	//!s.empty() 栈s不为空才能取出来元素 
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


//总结：deque与vector差不多，但是可以从数组头部添加元素
//时间复杂度o（1），如果是vector从头部添加元素，时间复杂度就是o(n) 
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

//总结 vector
//插入 insert(beg,end,i)
//添加元素:push_back()
//删除元素:pop_back() 
//删除下标为i的元素erase(beg+i,end+i+1)
//删除t1-t2内所有元素 erase(begin+t1+1,end+t2+1) 
//元素大小 size()
//清空: clear()
//反转数组 reverse(beg,end) 
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
//vector排序 
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
//	cout<<"从大到小";
//	for(;it!=v.end();it++){
//		cout<<*it<<" ";
//	}
//	sort(v.begin(),v.end());
//	cout<<endl<<"从小到大";
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
//	//reverse(反转函数) 
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
