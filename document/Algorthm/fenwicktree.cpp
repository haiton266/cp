#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10001], s[10001], f[10001];
ll n;
void update(ll i)
{
	while (i <= n)
	{
		f[i] = f[i] + 1;
		i = i + (i & -i);
	}
}
void init()
{
	for (int i = 1; i <= n; i++)
		s[i] = s[i - 1] + a[i];
	for (int i = 1; i <= n; i++)
		f[i] = s[i] - s[i - (i & -i)];
}
ll fenwick_tree(ll left, ll right)
{
	//	update(10);
	ll sum = 0;
	while (left <= right)
	{
		if (right - (right & -right) + 1 >= left)
		{
			sum = sum + f[right];
			right = right - (right & -right);
		}
		else
		{
			sum += a[right];
			right--;
		}
	}
	return sum;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	init();
	cout << fenwick_tree(1, 5);
	cout << endl;
	return 0;
}
