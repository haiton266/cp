#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool kt[10000001];
vector<ll> b;
void snt(int n)
{
	memset(kt, true, sizeof(kt));
	kt[1] = false;
	for (int i = 2; i <= n; i++)
	{
		if (kt[i])
		{
			b.push_back(i); // truy xuat vao mang b;
			int j = 2;
			while (j * i <= n)
			{
				kt[j * i] = false;
				j++;
			}
		}
	}
}
int main()
{
	int num;
	cin >> num;
	snt(num);
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << " ";
	return 0;
}
