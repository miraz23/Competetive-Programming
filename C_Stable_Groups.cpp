// Link: https://codeforces.com/problemset/problem/1539/C

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
#define ll unsigned long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

void solve()
{
    ll n, k, x; cin >> n >> k >> x;
    ll ar[n];

    for (ll i = 0; i < n; ++i)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);

    vector<ll> v;
    for (ll i = 0; i < n - 1; ++i)
    {
        if(ar[i + 1] - ar[i] > x)
        {
            v.push_back(ar[i + 1] - ar[i]);
        }
    }
    sac;
    ll i = 0;
    while (i < v.size())
    {
        if ((v[i] - 1) / x <= k)
        {
            k -= (v[i] - 1) / x;
            i++;
        }
        else
        {
            break;
        }
    }
    cout << v.size() - i + 1 << endl;
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