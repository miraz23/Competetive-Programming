// Link: https://codeforces.com/problemset/problem/600/B

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
    int a, b; cin >> a >> b;

    int x[a], y[b];
    for (int i = 0; i < a; i++)
        cin >> x[i];

    for (int i = 0; i < b; i++)
        cin >> y[i];

    sort(x, x + a);

    for (int i = 0; i < b; i++)
    {
        cout << upper_bound(x, x + a, y[i]) - x << " ";
    }
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