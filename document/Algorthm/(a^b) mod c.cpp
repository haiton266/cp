#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 1e6 + 1, MMAX = 1e5 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX]; //, d[NMAX];
bool kt[NMAX];
ll sqr(ll x)
{
	return x * x;
}

ll pw(ll a, ll b, ll MOD)
{
	if (b == 0)
		return 1 % MOD;
	else if (b % 2 == 0)
		return sqr(pw(a, b / 2, MOD)) % MOD;
	else
		return a * (sqr(pw(a, b / 2, MOD)) % MOD) % MOD;
}
void solve()
{
	ll n;
	cin >> n;
	map<ll, ll> x;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		x[a[i]]++;
	}
	ll res = 0;
	for (auto xt : x)
	{
		res += (pw(2, xt.second, mod) - 1 + mod) % mod;
	}
	cout << res << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	clock_t start, end;
	start = clock();
	// freopen("input.inp", "r", stdin);
	// freopen("output.out", "w", stdout);
	// snt(1e6);
	// ll t;
	// cin >> t;
	// while (t--)
	solve();
	end = clock();
	// cout << "Time(s): " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	return 0;
}