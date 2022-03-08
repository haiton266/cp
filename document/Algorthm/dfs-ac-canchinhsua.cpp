#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 1e6 + 1, MMAX = 1e5 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX], b[NMAX], vt1[NMAX], vt2[NMAX];
vector<ll> d[NMAX + 1];
bool cmp1(const int &x, const int &y)
{
	return a[x] < a[y];
}
bool cmp2(const int &x, const int &y)
{
	return b[x] < b[y];
}
bool kt[NMAX];
string st;
void dfs(int u)
{
	st[u] = '1';
	kt[u] = false;
	for (int i = 0; i < d[u].size(); i++)
		if (kt[d[u][i]])
			dfs(d[u][i]);
}
void solve()
{
	ll n;
	cin >> n;
	st = "";
	for (int i = 1; i <= n; i++)
		d[i].clear();
	for (int i = 0; i <= n; i++)
		st = st + '0';
	memset(kt, true, sizeof(kt));
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		cin >> b[i];
	for (int i = 1; i <= n; i++)
	{
		vt1[i] = i;
		vt2[i] = i;
	}
	sort(vt1 + 1, vt1 + n + 1, cmp1);
	sort(vt2 + 1, vt2 + n + 1, cmp2);
	sort(a + 1, a + n + 1);
	sort(b + 1, b + n + 1);
	for (int i = 1; i < n; i++)
		d[vt1[i]].pb(vt1[i + 1]);
	for (int i = 1; i < n; i++)
		d[vt2[i]].pb(vt2[i + 1]);
	if (a[n] < b[n])
		dfs(vt2[n]);
	else
		dfs(vt1[n]);
	for (int i = 1; i <= n; i++)
		cout << st[i];
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// freopen("input.inp", "r", stdin);
	// freopen("output.out", "w", stdout);
	ll t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}