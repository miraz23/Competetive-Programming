// Link: https://codeforces.com/problemset/problem/1366/A

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
        ll a, b;
        cin >> a >> b;

        if (a == 0 || b == 0)
            cout << 0 << endl;
        else
        {
            if (a * 2 <= b)
                cout << a << endl;
            else if (b * 2 <= a)
                cout << b << endl;
            else
                cout << (a + b) / 3 << endl;
        }
    }

    return 0;
}