// Link: https://codeforces.com/problemset/problem/296/A

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
        int n, a[100];
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int continuous = 1, max_continuous = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[i - 1])
            {
                continuous += 1;
                if (continuous > max_continuous)
                {
                    max_continuous = continuous;
                }
            }
            else
            {
                continuous = 1;
            }
        }
        cout << (max_continuous <= (n + 1) / 2 ? "YES" : "NO") << endl;
    }

    return 0;
}