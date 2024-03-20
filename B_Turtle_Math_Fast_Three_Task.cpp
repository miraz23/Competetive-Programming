/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define push                      \
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
    int n;
    cin >> n;
    vector<int> v(n);
    s0;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        v[i] = v[i] % 3;
    }
    ll ans = sum % 3;

    if (ans == 0)
    {
        cout << 0 << endl;
        return;
    }

    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == ans)
            {
                cout << 1 << endl;
                return;
            }
        }
    }
    if (ans == 1)
        cout << 2 << endl;
    else
        cout << 1 << endl;
}
int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}