//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//const int N=1e7+10;
//int n,k;
//int q[N];
//void quick_sort(int l,int r){
//	if(l>=r) return;
//	int x=q[l+r>>1],i=l-1,j=r+1;
//	while(i<j){
//		do i++;while(q[i]<x);
//		do j--;while(q[j]>x);
//		if(i<j)swap(q[i],q[j]);
//	} 
//	quick_sort(q,l,j),quick_sort(q,j+1,r);
//}
//int main(){
//	scanf("%d %d",&n,&k);
//	for(int i=0;i<n;i++){
//		scanf("%d",&q[i]);
//	}
//	quick_sort(n,0);
//	return 0;
//}



//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//
//const int N=1e6+10;
//int h[N];
//int res[N];
//int n;
//void merge_sort(int h[],int l,int r){
//	if(l>=r)return;
//	int mid=l+r>>1;
//	merge_sort(h,l,mid);
//	merge_sort(h,mid+1,r);
//	int k=0,i=1,j=mid+1,tmp[r+1];
//	while(i<=mid&&j<=r){
//		if(h[i]<=h[j])tmp[k++]=h[i++];
//		else tmp[k++]=h[j++];
//		while(i<=mid)tmp[k++]=h[i++];
//		while(j<=r)tmp[k++]=h[j++];
//		for(i=1,j=0;i<=r;i++,j++)h[i]=tmp[i]; 
//	}
//}
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>h[i];
//	}	
//	merge_sort(h,0,n-1);
//
//	return 0;
//} 

//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	string s1,s2;
//	getline(cin,s1);
//	getline(cin,s2);
//	
//	
//	return 0;
//}




//#include<bits/stdc++.h>
//#define endl '\n'
//using namespace std;
//
//const int N=1e5+10;
//
//int n,res;
//int main(){
//	std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	cin>>n;
//	priority_queue<int,vector<int>,greater<int> >q;
//	for(int i=0;i<n;i++){
//		int x=0;
//		cin>>x;
//		q.push(x);
//	}
//
//	while(q.size()>=2){
//		int a=q.top();q.pop();
//		int b=q.top();q.pop();
//		res+=a+b;
//		q.push(a+b);
//	}
//	cout<<res<<endl;
//	return 0;
//}


