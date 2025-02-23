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
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n > m)
        {
            no;
            continue;
        }

        vector<int> ans(n + 1);
        int sum = 0;
        if (n % 2 == 0 and m % 2 == 0)
        {
            yes;
            for (int i = 1; i <= n - 2; i++)
            {
                ans[i] = 1;
                sum++;
            }
            ans[n - 1] = (m - sum) / 2;
            ans[n] = ans[n - 1];
        }
        else if (n % 2 == 1 and m % 2 == 0)
        {
            yes;
            for (int i = 1; i <= n - 1; i++)
            {
                ans[i] = 1;
                sum++;
            }
            ans[n] = m - sum;
        }
        else if (n % 2 == 0 and m % 2 == 1)
        {
            no;
            continue;
        }
        else if (n % 2 == 1 and m % 2 == 1)
        {
            yes;
            for (int i = 1; i <= n - 1; i++)
            {
                ans[i] = 1;
                sum++;
            }
            ans[n] = m - sum;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}