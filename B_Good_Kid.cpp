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
#define a1 long long ans = 1
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;


int solve()
{
    int n;
    cin >> n;

    vector<ll>v(n);

    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sac;
    v[0] = v[0] + 1;

    ll ans = 1;

    for(ll i = 0; i < n; i++)
    {
        ans *= v[i];
    }
    cout << ans << endl;
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