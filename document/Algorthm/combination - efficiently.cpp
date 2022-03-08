// C++ implementation to find nCr
#include <bits/stdc++.h>
using namespace std;

// Function to find the nCr
ll printNcR(ll n, ll r)
{
	if (n < r)
		return 0;
	ll p = 1, k = 1;
	if (n - r < r)
		r = n - r;
	if (r != 0)
	{
		while (r)
		{
			p *= n;
			k *= r;
			ll m = __gcd(p, k);
			p /= m;
			k /= m;
			n--;
			r--;
		}
	}
	else
		p = 1;
	return p;
}

// Driver code
int main()
{
	int n = 50, r = 25;

	printNcR(n, r);

	return 0;
}
