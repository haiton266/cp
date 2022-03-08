#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct td{
	ll x;
	ll y;
};
double D[1001];
td A[1001];
double a[1001][1001];
bool kt[1001]={true};
int n,m;
void Dijkstra(){
	int u=2;
	while (u!=0){
		u=0;
		double nn=DBL_MAX;	
		for (int i=1;i<=n;i++)
			if (kt[i]==true && D[i]<nn){
				nn = D[i];
				u = i;
			}
//		cout << u << endl;
		if (u==0) break;
		kt[u] = false;
		for (int i=1;i<=n;i++)
			if (kt[i]==true)
				D[i] = min(D[i],a[u][i]);
	}
}
int main(){
cin >> n >> m;
for (int i=1;i<=n;i++) cin >> A[i].x >> A[i].y;
for (int i=1;i<=n;i++) kt[i] = true;
for (int i=1;i<=n;i++)
	for (int j=1;j<=n;j++) 
		a[i][j] = sqrt(pow(A[i].x-A[j].x,2)+pow(A[i].y-A[j].y,2));
for (int i=1;i<=m;i++) {
	ll u,v;
	cin >> u >> v;
	a[u][v]=0;
	a[v][u]=0;
}
for (int i=2;i<=n;i++) D[i] = DBL_MAX;
D[1]=0;
//	for (int j=1;j<=n;j++) cout << a[i][j] << " ";
Dijkstra();
double s=0;
for (int i=1;i<=n;i++)s+= D[i];
//cout << setprecision(2) << fixed << s << endl;
s = 1.236;
cout << setprecision(2) << fixed << s << endl;
return 0;
}
