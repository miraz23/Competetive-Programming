// Link: https://codeforces.com/problemset/problem/459/A

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
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2;

        int x_diff = x1 - x2;
        int y_diff = y1 - y2;

        if (x_diff != 0 and y_diff != 0)
        {
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }
        else if (x_diff != 0)
        {
            x3 = x1;
            y3 = y1 + abs(x_diff);
            x4 = x2;
            y4 = y2 + abs(x_diff);
        }
        else
        {
            x3 = x1 + abs(y_diff);
            y3 = y1;
            x4 = x2 + abs(y_diff);
            y4 = y2;
        }

        if (x_diff != 0 and y_diff != 0 and abs(x_diff) != abs(y_diff))
            cout << -1 << endl;
        else
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }

    return 0;
}