#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
int mn;
const ll NMAX = 3e5 + 1;
ll a[NMAX];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ofstream out("input.inp");
    clock_t start = clock() * (clock() + 1);
    cout << start << endl;
    ll t = (rand() % (1000 - 1 + 1) + 1) / 42 * 1000;
    out << t << endl;
    while (t--)
    {
        ll n = rand() * start % (100 - 1 + 1) + 1;
        n += 2;
        out << n << endl;
        for (int i = 1; i <= n; i++)
            out << rand() * start % ((ll)1e9 - 0 + 1) + 1 << " ";
        out << endl;
    }
    return 0;
}