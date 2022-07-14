#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;

const ll NMAX = 2e5 + 1;
const ll mod = 1e9 + 7;

string st[NMAX];
bool kt[NMAX];
ll a[NMAX], p[NMAX];
ll f[50][30001];
int n;
map<string, bool> m;
bool check(string ss)
{
	for (int k = 1; k < ss.length(); k++)
	{
		string st1 = "", st2 = "";
		for (int j = 0; j < ss.length(); j++)

			if (j < k)
				st1 = st1 + ss[j];
			else
				st2 = st2 + ss[j];
		// cout << st1 << " " << st2 << endl;
		if (m[st1] == true && m[st2] == true)
			return true;
	}
	return false;
}
void solve()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> st[i];
		m[st[i]] = true;
	}
	for (int i = 1; i <= n; i++)
		if (check(st[i]))
			cout << 1;
		else
			cout << 0;
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("input.inp", "r", stdin);
	freopen("output.out", "w", stdout);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}