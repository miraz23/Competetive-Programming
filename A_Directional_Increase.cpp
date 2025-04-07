// Link: https://codeforces.com/problemset/problem/1693/A

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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
const int maxn = 2e5 + 100;
using namespace std;

int a[maxn];
ll ps[maxn];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            ps[i] = ps[i - 1] + a[i];
        }
        if (ps[n] != 0)
        {
            no;
            continue;
        }
        f1;
        for (int i = 1; i <= n; i++)
        {
            if (ps[i] < 0)
                flag = 0;
        }
        bool vis = 0;
        for (int i = 1; i <= n; i++)
        {
            if (ps[i] == 0)
                vis = 1;
            else if (vis)
                flag = 0;
        }
        if (flag)
            yes;
        else
            no;
    }

    return 0;
}