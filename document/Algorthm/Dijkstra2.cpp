#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
const ll NMAX = 1e3 + 1;
const ll mod = 1e9 + 7;
ll a[NMAX][NMAX];
int d[NMAX];
bool kt[NMAX];
int n = 7;
double maxProbability(int n, vector<vector<int>> &edges, vector<double> &succProb, int start, int end)
{
    vector<bool> kt(n, true);
    vector<double> d(n, DBL_MAX);
    d[start] = 0;
    vector<pair<int, double>> a[n];
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        double wt = succProb[i];
        a[v].push_back({u, wt});
        a[u].push_back({v, wt});
    }
    while (true)
    {
        double nn = DBL_MAX;
        int u = -1;
        for (int i = 0; i < n; i++)
            if (kt[i] && d[i] < nn)
            {
                nn = d[i];
                u = i;
            }
        if (u == -1)
            break;
        kt[u] = false;
        for (int i = 0; i < a[u].size(); i++)
            if (kt[a[u][i].first] && d[u] + a[u][i].second < d[a[u][i].first])
                d[a[u][i].first] = d[u] + a[u][i].second;
    }
    return d[end];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
    vector<double> succProb = {0.5, 0.05, 0.3};
    cout << maxProbability(3, edges, succProb, 0, 1);
    return 0;
}