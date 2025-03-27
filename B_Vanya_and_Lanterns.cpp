// Link: https://codeforces.com/problemset/problem/492/B

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
    int n, L; cin >> n >> L;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sac;

    double ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, (double)(v[i] - v[i - 1]));
    }

    double rad = ans / 2.0;
    double left = v[0] - 0;
    double right = L - v[n - 1];
    double result = max({rad, left, right});

    cout << fixed << setprecision(10) << result << endl;
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