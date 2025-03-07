// Link: https://codeforces.com/problemset/problem/27/A

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
        ll n; cin >> n;
        vector<int> v(n);

        a0;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sac;
        for (ll i = 0; i < n; i++)
        {
            if (v[0] > 1)
                ans = 1;
            else
            {
                for (ll i = 1; i < n; i++)
                {
                    if (v[i] - v[i - 1] > 1)
                    {
                        ans = v[i - 1] + 1;
                        break;
                    }
                }
            }
            if (ans <= 0)
                ans = v[n - 1] + 1;
        }
        cout << ans << endl;
    }

    return 0;
}