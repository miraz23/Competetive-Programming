// Link: https://codeforces.com/problemset/problem/514/A

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
        string x; cin >> x;

        for (int i = 0; i < x.size(); i++)
        {
            int digit = x[i] - '0';
            int inv_digit = 9 - digit;

            if (i == 0 && digit == 9)
            {
                continue;
            }

            if (inv_digit < digit)
            {
                x[i] = inv_digit + '0';
            }
        }

        cout << x << endl;
    }

    return 0;
}