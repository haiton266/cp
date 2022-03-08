#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
const ll NMAX = 1e6;
vector<vector<bool>> kt;
string st[NMAX];
ll n, m, k;
queue<pair<ll, ll>> q;
ll c[5] = {0, 1, 0, -1, 0};
ll d[5] = {0, 0, 1, 0, -1};
bool valid(ll x, ll y)
{
	return x >= 1 && x <= n && y >= 1 && y <= m && kt[x][y] == true && st[x][y] == '1';
}
void bfs(ll u1, ll v1)
{
	q.push(mp(u1, v1));
	while (q.empty() == false)
	{
		pair<ll, ll> dinh = q.front();
		q.pop();
		k++;
		for (int i = 1; i <= 4; i++)
		{
			ll x = dinh.first + c[i];
			ll y = dinh.second + d[i];
			if (valid(x, y))
			{
				kt[x][y] = false;
				q.push(mp(x, y));
			}
		}
	}
}

ll duyet()
{
	ll cnt = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (valid(i, j))
			{
				k = 0;
				kt[i][j] = false;
				cnt++;
				bfs(i, j);
				cout << k << " "; //  So phan tu trong vung lien thong
			}
	cout << endl;
	return cnt;
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
	for (int i = 1; i <= n; i++)
	{
		cin >> st[i];
		st[i] = " " + st[i];
	}
	init();
	cout << duyet();
	return 0;
}
