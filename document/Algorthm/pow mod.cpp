#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
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
void solve(){
	ll k; cin >> k;
//	ll x = (1LL << k);
	ll x = pw(2,k,mod);
	cout << (6 * pw(4,x-2,mod) %mod)%mod << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t; //cin >> t;
	t=1;
	while (t--) solve();
	return 0;
}
