// Link: https://codeforces.com/problemset/problem/189/A

/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(v.begin(), v.end())
#define sdc sort(v.begin(), v.end(), greater<int>())
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 int count = 0
#define c1 int count = 1
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

void solve()
{
    int n, a, b, c; cin >> n >> a >> b >> c;

    vector<int> v(n + 1, -1);
    v[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (i >= a && v[i - a] != -1)
            v[i] = max(v[i], v[i - a] + 1);
        if (i >= b && v[i - b] != -1)
            v[i] = max(v[i], v[i - b] + 1);
        if (i >= c && v[i - c] != -1)
            v[i] = max(v[i], v[i - c] + 1);
    }

    cout << v[n] << endl;
}

int main()
{
    swift;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}