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

int main()
{
    push;
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m, x, a;
        cin >> n >> h >> m;
        x = h * 60 + m;
        a = 1510;
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m;
            int p = h * 60 + m;
            if (p < x)
            {
                p += (24 * 60);
            }
            a = min(a, p - x);
        }
        cout << a / 60 << " " << a % 60 << endl;
    }

    return 0;
}