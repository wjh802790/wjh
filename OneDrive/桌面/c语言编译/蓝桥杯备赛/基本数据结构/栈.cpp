//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	stack<string> c;
//	while(n--){
//		string r;
//		cin>>r;
//		if(r=="in"){
//			string name;
//			cin>>name;
//			c.push(name);
//			c.size++;
//		}else{
//			if(r=="out"){
//				string name;
//				c.pop();
//				c.size--;
//			}
//		}
//		while(c.size()){
//			cout<<c.top<<endl;
//			c.pop();
//		}
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,i;
//	string s1,s2,s3;
//	stack<string> c;
//	cin>>n;
//	for(i=0;i<n;i++){
//		cin>>s1>>s2;
//		if(s1=="in")
//		c.push(s2);
//		if(s1=="out")
//		{
//			if(c.empty())
//			goto end;
//			for(s3=c.top();s3!=s2;c.pop()){
//				if(c.empty())
//				goto end;
//				s3=c.top();
//			}
//		}
//	}
//	if(c.empty())
//	end:cout<<"empty";
//	else
//	cout<<c.top();
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	return 0;
}

//前缀和 
//#include <bits/stdc++.h>
//using namespace std;
//long long n,m,a[100005],sum[100005];
//int main(){
//	cin >> n >> m;
//	for (int i = 1;i <= n;i++) cin >> a[i],sum[i] = sum[i - 1] + a[i];
//	while (m--){
//		long long l,r;
//		cin >> l >> r;
//		cout << sum[r] - sum[l - 1] << endl;
//	}
//	return 0;
//}

//开设一个辅助数组 
//#include<bits/stdc++.h>
//using namespace std;
//const int MAX=1010;
//int a[MAX][MAX],sum[MAX][MAX];
//int main(){
//	int n,m,q,x1,y1,x2,y2;
//	cin>>n>>m>>q;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cin>>a[i][j];
//			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
//		}
//	}
//	while(q--){
//		int x1,y1,x2,y2;
//		cin>>x1>>y1>>x2>>y2;
//		cout<<sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1]<<endl;
//	}
//	return 0;
//}


//结构体
//#include<bits/stdc++.h>
//using namespace std;
//const int MAX=1010;
//struct goal{
//	int x1,y1,x2,y2;
//	int sum;
//}goal;
//int a[MAX][MAX];
//int main(){
//	int n,m,q,x1,y1,x2,y2,z=0;
//	cin>>n>>m>>q;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cin>>a[i][j];
//		}
//	}
//	
//	while(q--){
//		cin>>goal[z].x1>>goal[z].y1>>goal[z].x2>>goal[z].y2;
//		goal[z].sum=a[goal[z].x1]
//	}
//
//	return 0;
//} 


