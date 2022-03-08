#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll D[1001];
ll a[1001][1001];
bool kt[1001]={true};
int n;
void prp(){
	for (int i=1;i<=n;i++) {D[i]=LLONG_MAX;kt[i]=true;}
	for (int i=1;i<=n;i++)
	for (int j=1;j<=n;j++)
		a[i][j] = LLONG_MAX;
	D[1] = 0;
}
void Dijkstra(){
	int u=2;
	while (u!=0){
		u=0;
		ll nn=LLONG_MAX;	
		for (int i=1;i<=n;i++)
			if (kt[i]==true && D[i]<nn){
				nn = D[i];
				u = i;
			}
		if (u==0) break;
		kt[u] = false;
		for (int i=1;i<=n;i++)
			if (kt[i]==true)
				D[i] = min(D[i],a[u][i]);
	}
}
int main(){

cin >> n;
int m; cin >> m;
prp();
while (m--){
	int u,v,t;
	cin >> u >> v >> t;
	a[u][v] = t;
	a[v][u] = t;
}

Dijkstra();
for (int i=1;i<=n;i++) cout << D[i] << " ";
return 0;
}

