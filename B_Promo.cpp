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
    int n, q;
    cin >> n >> q;
    int ar[n + 3];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    sort(ar + 1, ar + n + 1);
    ll pre[n + 4];
    pre[0] = 0;
    for (int i = n, j = 1; i >= 1; i--, j++)
    {
        pre[j] = pre[j - 1] + ar[i];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        ll ans = pre[x] - pre[x - y];
        cout << ans << endl;
    }

    return 0;
}