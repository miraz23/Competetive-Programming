// Link: https://codeforces.com/problemset/problem/1472/D

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

void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sdc; s0; c1;
    for (int i = 0; i < n; i++)
    {
        if (count)
        {
            if (v[i] % 2 == 0)
            {
                sum += v[i];
            }
        }
        else
        {
            if (v[i] % 2 == 1)
            {
                sum -= v[i];
            }
        }
        count ^= 1;
    }

    if (sum > 0)
    {
        cout << "Alice" << endl;
    }
    else if (sum < 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}