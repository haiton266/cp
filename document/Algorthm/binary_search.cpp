#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 1e6 + 1, MMAX = 1e5 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX], b[NMAX];
ll n;
ll m;
ll tinh(ll x)
{
	ll s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (x - x / (b[i] + 1)) * a[i];
		if (s > m)
			break;
	}
	return s;
}
ll search2()
{
	ll l = 1, r = 1e15 + 1;
	while (l < r)
	{
		ll mid = (l + r) / 2;
		ll x = tinh(mid);
		if (x >= m)
		{
			r = mid;
		}
		else
			l = mid + 1;
	}
	return l; // search m
}
void solve()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	cout << search2();
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// freopen("input.inp", "r", stdin);
	// freopen("output.out", "w", stdout);
	// ll t;
	// cin >> t;
	// while (t--)
	solve();
	return 0;
}
