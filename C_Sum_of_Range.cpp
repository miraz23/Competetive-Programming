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
    int t = 1;
    //cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int mn = min(a, b) - 1;
        int mx = max(a, b);
        ll sum = (mx * (mx + 1) * 0.5) - (mn * (mn + 1) * 0.5);
        ll sume = (mx * (mx + 1)) - (mn * (mn + 1));
        ll sumo = 0;
        cout << sum << endl;
        cout << sume << endl;
        cout << sumo << endl;
    }

    return 0;
}