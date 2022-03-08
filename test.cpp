#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 2e5 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX];
int main()
{
    for (int test = 6; test <= 100; test++)
    {
        ofstream out("test" + to_string(test) + ".txt");
        int t = 1 + (ll)(rand()) * 1381883 % (ll)1e4;
        out << t << endl;
        for (int i = 1; i <= t; i++)
        {
            ll n = 25 + (ll)(rand() * ((ll)1e16 - 25 + 1.0) * test / (1.0 + RAND_MAX));
            out << n << endl;
        }
    }

    return 0;
}