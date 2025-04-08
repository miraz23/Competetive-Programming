// Link: https://codeforces.com/problemset/problem/459/B

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
    ll n; cin >> n;
    vector<ll> v(n);
    ll a = 1, b = 1;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sac;
    ll d = v[n - 1] - v[0];

    if (v[0] == v[n - 1])
        cout << d << " " << (n - 1) * n / 2 << endl;
    else
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (v[j] == v[n - 1])
                a++;
            else if (v[j] == v[0])
                b++;
        }
        cout << d << " " << a * b << endl;
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