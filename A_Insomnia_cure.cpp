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
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int k, l, m, n, d;
        c0;

        cin >> k >> l >> m >> n >> d;
        count = d;

        if (k == 1 || l == 1 || m == 1 || n == 1)
            cout << d << endl;
        else
        {
            for (int i = 1; i <= d; i++)
            {
                if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
                    count--;
            }
            cout << count << endl;
        }
    }

    return 0;
}