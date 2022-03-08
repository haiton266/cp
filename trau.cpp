#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 2e5 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX], res[NMAX];
void solve()
{
    ll n, m;
    cin >> m >> m;
    // for (int i = 1; i <= n; i++)
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // map<ll, int> map;
    // for (int i = n; i >= 1; i--)
    // {
    //     map[a[i]] = 1;
    //     res[i] = map.size();
    // }
    // while (m--)
    // {
    //     int l;
    //     cin >> l;
    //     cout << res[l] << endl;
    // }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    // ll t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}