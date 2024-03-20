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

int main()
{
    push;
    ll t, Max, Min;
    cin >> t;

    vector<int> v(t);

    for (auto &u : v)
        cin >> u;

    for (int i = 0; i < t; i++)
    {
        if (i == 0)
        {
            Min = abs(v[1] - v[0]);
            Max = abs(v[t - 1] - v[0]);
        }
        else if (i == t - 1)
        {
            Min = abs(v[i] - v[i - 1]);
            Max = abs(v[0] - v[i]);
        }
        else
        {
            Min = min(abs(v[i - 1] - v[i]), abs(v[i + 1] - v[i]));
            Max = max(abs(v[0] - v[i]), abs(v[t - 1] - v[i]));
        }

        cout << Min << " " << Max << endl;
    }

    return 0;
}