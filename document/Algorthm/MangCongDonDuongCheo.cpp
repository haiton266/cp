#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10001],f[5002][5002],f2[5002][5002];
void solve(){
	ll n,k;
	cin >> n >> k;
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=0;i<=n;i++)
		for (int j=0;j<=n;j++) f[i][j] = 0;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (a[i]!=a[j]) 
				{
					ll t1=i-k+1,t2=j-k+1;
					if (i-k+1<=0 || j-k+1<=0){
						ll t = min(i-k+1,j-k+1);
						t1 = i-k+1 - t + 1;
						t2 = j-k+1 - t + 1;
					}
					f[i+1][j+1] -=1;
					f[t1][t2]+=1; 
				}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) f[i][j] = f[i][j] + f[i-1][j-1];
	// Vi k[i] ban dau = 0 nen ket qua chinh la f[i] (a[i] = a[i] + f[i])
	ll res=0;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			res = max(res,f[i][j]);
	cout << res << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
	
	return 0;
}	
