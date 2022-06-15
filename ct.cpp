#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 2e5 + 1;
const ll mod = 1e9 + 7;
string st[9];
ll a[NMAX], sum[NMAX];
int n;
int s;

bool check(ll mid)
{
	for (int i = mid; i <= n; i++)
		if (sum[i] - sum[i - mid] <= s)
			return true;
	return false;
}

ll search(ll f, ll l)
{
	while (f <= l)
	{
		ll mid = (f + l) / 2;
		if (check(mid) == false)
			l = mid - 1;
		else
			f = mid + 1;
	}
	return l;
}

void solve()
{
	sum[0] = 0;
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		sum[i] = sum[i - 1] + a[i];
	if (sum[n] == s)
		cout << 0 << endl;
	else if (sum[n] < s)
		cout << -1 << endl;
	else
		// cout << search(1, n) << endl;
		cout << n - search(1, n) << endl;
	// cout << check(3) << endl;
	// cout << s << endl;
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