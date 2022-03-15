#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 2e5 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX];
string solution(string st)
{
	string res = "";
	stack<char> stack;
	for (int i = 0; i < st.length(); i++)
		if (st[i] != ')')
			stack.push(st[i]);
		else
		{
			string temp = "";
			while (stack.top() != '(')
			{
				temp = temp + stack.top();
				stack.pop();
			}
			stack.pop();
			for (int k = 0; k < temp.length(); k++)
				stack.push(temp[k]);
		}
	while (!stack.empty())
	{
		res = stack.top() + res;
		stack.pop();
	}
	return res;
}
void solve()
{
	cout << solution("foo(bar(baz))blim");
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