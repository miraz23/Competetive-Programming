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

int main()
{
    swift;
    ll n, m, ans = 0;
    cin >> n >> m;

    if (n == m) cout << 0 << endl;
    else if (m % n != 0) minus;
    else
    {
        ll d = m / n;
        while (d % 2 == 0)
        {
            d /= 2;
            ans++;
        }
        while (d % 3 == 0)
        {
            d /= 3;
            ans++;
        }
        if (d != 1) ans = -1;
        cout << ans << endl;
    }

    return 0;
}