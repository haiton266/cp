#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const ll NMAX = 1e6;
string st[NMAX];
vector<vector<bool>> kt;
ll c[5] = {0, 1, 0, -1, 0};
ll d[5] = {0, 0, 1, 0, -1};
ll n, m, k;
bool valid(ll x, ll y)
{
	return x >= 1 && x <= n && y >= 1 && y <= m && kt[x][y] == true && st[x][y] == '1';
}
void dfs(ll u, ll v)
{
	k++;
	kt[u][v] = false;
	for (ll i = 1; i <= 4; i++)
	{
		ll x = u + c[i];
		ll y = v + d[i];
		if (valid(x, y))
			dfs(x, y);
	}
}
ll duyet()
{
	ll res = 0;
	for (ll i = 1; i <= n; i++)
		for (ll j = 1; j <= m; j++)
			if (valid(i, j))
			{
				k = 0;
				dfs(i, j);
				res++;
				cout << k << " "; //  So phan tu trong vung lien thong
			}
	cout << endl;
	return res;
}
void init()
{
	kt.clear();
	vector<bool> t;
	for (int i = 0; i <= m; i++)
		t.pb(true);
	for (int i = 0; i <= n; i++)
		kt.pb(t);
}
int main()
{
	freopen("input.inp", "r", stdin);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++)
	{
		cin >> st[i];
		st[i] = " " + st[i];
	}
	init();
	cout << duyet();
	return 0;
}