//线性dp


//1 开餐馆 
//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e6+10;
//
//int t,n,k;
//int p[N],m[N],f[N]; 
//
//int main(){
//	cin>>t;
//	while(t--){
//	memset(f,0,sizeof(f));	//清零，否则会保留上一组数据 
//	scanf("%d %d",&n,&k);
//	for( int i = 1 ; i <= n; i++ )
//	cin >> m[i];
//	for( int i = 1 ; i <= n ; i++)
//	cin >> p[i];
//	int maxn=0;
//	f[1]=p[1];
//	for(int i=2;i<=n;i++){
//		f[i]=p[i];
//	for(int j=i-1;j>=0;j--)
//			if(m[i]-m[j]>k)f[i]=max(f[i],f[j]+p[i]);
//		}
//	for(int i=1;i<=n;i++){
//		maxn=max(maxn,f[i]);	//打擂比较，求最大值
//	}
//		cout<<maxn<<endl; 
//
//}
//
//	return 0;
//}

//矩阵偏移量
//X=x+dx,Y=y+dy;
//dx[] 

//2 传纸条
//#include<bits/stdc++.h>
//using namespace std;
//
//const int  N =50,INF=1e9;
//
//int d[N][N],f[N][N];
//int n,m;
//
//int main(){
//	cin>>m>>n;
//	for(int i=1;i<=m;i++)
//		for(int j=1;j<=n;j++)
//			cin>>d[m][n];
//	
//	f[1][1]=d[1][1];
//	
//	int res
//	cout<<f[m][n]<<endl;
//	return 0;
//} 



//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=360;
//
//int n,m;
//int f[N][N][N][N];
//int score[N];
//
//int main(){
//	int b[5]={0};
//	cin>>n>>m;
//		for(int i=0;i<=n;i++){
//		cin>>score[i];
//	}
//	for(int i=0;i<m;i++){
//		int t;
//		scanf("%d",&t);
//		b[t]++;
//	}
//	for (int A = 0; A <= b[1]; A ++ )
//        for (int B = 0; B <= b[2]; B ++ )
//            for (int C = 0; C <= b[3]; C ++ )
//                for (int D = 0; D <= b[4]; D ++ )
//                {
//                    int t = score[A + B * 2 + C * 3 + D * 4];
//                    int &v = f[A][B][C][D];
//                    v = t;
//                    if (A) v = max(v, f[A - 1][B][C][D] + t);
//                    if (B) v = max(v, f[A][B - 1][C][D] + t);
//                    if (C) v = max(v, f[A][B][C - 1][D] + t);
//                    if (D) v = max(v, f[A][B][C][D - 1] + t);
//                }
//
//    printf("%d\n", f[b[1]][b[2]][b[3]][b[4]]);
//    return 0;
//}
	
	
//#include<bits/stdc++.h>
//using namespace std;
//
//const int N =110;
//int n,m;
//int f[N][N],a[N][N];
//
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		scanf("%d %d",&n,&m);
//		for(int i=1;i<=n;i++){
//			for(int j=1;i<=m;j++){
//				scanf("%d",&a[i][j]);
//			}
//		}
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=m;j++){
//				f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
//			}
//		}
//		cout<<f[n][m]<<endl;
//	}
//	
//	return 0;
//}

#include <iostream>
using namespace std;
const int N = 110;
int n,m;
int a[N][N];
int f[N][N];
int main () {
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= m;j++) cin >> a[i][j];
        }
        for (int i = 1;i <= n;i++) {
            for (int j = 1;j <= m;j++) f[i][j] = max (f[i - 1][j],f[i][j - 1]) + a[i][j];
        }
        cout << f[n][m] << endl;
    }
    return 0;
}


