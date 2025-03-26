// Link: https://codeforces.com/problemset/problem/1497/C1

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
    int n, k;
    cin >> n >> k;
    int a, b, c;
    if (n & 1)
    {
        a = n / 2;
        b = a;
        c = 1;
    }
    else
    {
        if ((n / 2) & 1)
        {
            a = (n / 2) - 1;
            b = a;
            c = n - 2 * b;
        }
        else
        {
            a = n / 2;
            b = n / 4;
            c = b;
        }
    }
    cout << a << ' ' << b << ' ' << c << endl;
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