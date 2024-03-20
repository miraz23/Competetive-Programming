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
#define vin                     \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
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
    int t;
    cin >> t;

    for (int x = 1; x <= t; x++)
    {
        int n;
        cin >> n;

        int a, b;
        cin >> a >> b;

        vector<int> v(n);
        vin;
        sac;
        c0;
        int lb, ub;

        for (int i = 0; i < n; i++)
        {
            lb = lower_bound(v.begin(), v.end(), a - v[i]) - v.begin();
            ub = upper_bound(v.begin(), v.end(), b - v[i]) - v.begin();

            if (v[i] * 2 >= a && v[i] * 2 <= b)
            {
                count += ub - lb - 1;
            }
            else
            {
                count += ub - lb;
            }
        }
        count /= 2;

        cout << "Case " << x << ": " << count << endl;
    }

    return 0;
}