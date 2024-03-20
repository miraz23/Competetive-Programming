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
    cin >> t;

    while (t--)
    {
        int x1, y1; cin >> x1 >> y1;
        int x2, y2; cin >> x2 >> y2;
        int x3, y3; cin >> x3 >> y3;
        int x4, y4; cin >> x4 >> y4;

        ll mul = max(abs(x2 - x1), abs(y2 - y1));
        ll ans = mul * mul;
        cout << ans << endl;

    }

    return 0;
}