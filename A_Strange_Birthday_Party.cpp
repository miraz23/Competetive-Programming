/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(k.begin(), k.end())
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
    int n, m; cin >> n >> m;
    vector<ll> k(n), c(m);

    for (auto &i : k)
        cin >> i;
    for (auto &i : c)
        cin >> i;

    sac;
    ll now = 1, ans = 0;
    for (ll i = n - 1; i >= 0; --i)
    {
        if (now < k[i])
        {
            ans += c[now - 1];
            ++now;
        }
        else
        {
            ans += c[k[i] - 1];
        }
    }
    cout << ans << endl;
}

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}