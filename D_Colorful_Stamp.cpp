// Link: https://codeforces.com/problemset/problem/1669/D

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

bool solve(int n, string s)
{
    if (n == 1)
    {
        if (s == "R" || s == "B")
        {
            no;
            return 0;
        }
    }
    ll blue = 0, red = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if ((red == 0 && blue > 0) || (blue == 0 && red > 0))
            {
                no;
                return 0;
            }
            red = 0, blue = 0;
        }
        else
        {
            if (s[i] == 'R')
            {
                red++;
            }
            else
            {
                blue++;
            }
        }
    }
    if ((red == 0 && blue > 0) || (blue == 0 && red > 0))
    {
        no;
        return 0;
    }
    yes;
}

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        solve(n, s);
    }

    return 0;
}