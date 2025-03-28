// Link: https://codeforces.com/contest/1613/problem/C

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
#define c0 ll count = 0
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

bool check(const vector<ll> &v, ll h, ll k)
{
    ll sum = 0, cur = 0;
    for (size_t p = 0; p < v.size(); p++)
    {
        ll res = v[p] + k - cur;
        sum += min(res, k);
        cur = v[p] + k;
    }
    return sum >= h;
}

void solve()
{
    ll n, h; cin >> n >> h;

    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll left = 1, right = h, ans = h;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (check(v, h, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
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