#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
ll a[100001];

ll phi(ll n) {
    ll res = n;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

ll sqr(ll x) {
    return x*x;
}

ll pw(ll a, ll b, ll MOD) {
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(pw(a, b/2,MOD)) % MOD;
        else
            return a * (sqr(pw(a, b/2,MOD)) % MOD) % MOD;
}
ll gcd_extend(ll a, ll b, ll *x, ll *y) {
  if (b == 0) {
    *x = 1;
    *y = 0;
    return a;
  }
  ll x1, y1;
  ll gcd = gcd_extend(b, a%b,  &x1, &y1);
  *x = y1;
  *y = x1 - (a / b) * y1;
  return gcd;
}
int modulo_inverse_euclidean(ll n, ll m) {
  ll x, y;
  if (gcd_extend(n, m, &x, &y) != 1) return -1; // not exist
  return (x % m  + m) % m; // vì x có th? âm 
}
void solve(){
	ll a,b,c,m; cin >> a >> b >> c >> m;
//	cout << pw(c,m,m) << endl;
	cout << (pw(a,b,m) * modulo_inverse_euclidean(c,m))%m;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll t;
	solve();
	return 0;
}
