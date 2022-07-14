#include <bits/stdc++.h>
#define f1n(i, n) for (int i = 1; i <= n; i++)
using namespace std;

int n;
int a[10];

int main()
{
    cin >> n;
    f1n(i, n) a[i] = i;
    do
    {
        f1n(i, n) cout << a[i] << (i < n ? " " : "\n");
    } while (next_permutation(a + 1, a + 1 + n));
}