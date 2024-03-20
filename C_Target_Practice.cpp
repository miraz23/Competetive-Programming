/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define push                      \
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
    char a[10][10];

    for (ll i = 0; i < 10; i++)
    {
        for (ll int j = 0; j < 10; j++)
        {
            cin >> a[i][j];
        }
    }

    a0;

    for (ll i = 0; i < 10; i++)
    {
        for (ll j = 0; j < 10; j++)
        {
            if (a[i][j] == 'X')
            {
                if (i == 0 || i == 9 && j == 0 || j == 9)
                {
                    ans += 1;
                }
                else if (i == 1 || i == 8 && j == 1 || j == 8)
                {
                    ans += 2;
                }
                else if (i == 2 || i == 7 && j == 2 || j == 7)
                {
                    ans += 3;
                }
                else if (i == 3 || i == 6 && j == 3 || j == 6)
                {
                    ans += 4;
                }
                else if (i == 4 || i == 5 && j == 4 || j == 5)
                {
                    ans += 5;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}