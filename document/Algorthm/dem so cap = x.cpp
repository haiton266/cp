#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200001];
void solve(){
    ll n; cin >> n;
    ll s = 0;
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
        s = s + a[i];
    }
    double x = (double)s/n *2; // Bai nay dem so cap = tbc*2
	map<ll,ll> so;
	vector <double> b;
	for (ll i = 1; i <= n; i++)
    {
		so[a[i]]++;
		if (so[a[i]]==1) b.push_back(a[i]);
	}
	sort(b.begin(),b.end());
    ll i = 0, j = b.size()-1;
    ll res = 0;
	while (i < j) {
	    if (b[i] + b[j] == x) {
			res+=so[b[i]]*so[b[j]];
	    }
	    if (b[i] + b[j] < x)
	        i += 1;
	    else
	        j -= 1;
	}
	for (ll i=0;i<b.size();i++) if (b[i]*2==x) res += so[b[i]]*(so[b[i]]-1)/2;
	cout << res << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t; cin >> t;
	while (t--) solve();
	return 0;
}
