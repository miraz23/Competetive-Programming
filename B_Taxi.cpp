// Link: https://codeforces.com/problemset/problem/158/B

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

int main()
{
    swift;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, a; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }
        a0;
        ans += mp[4] + mp[3] + (mp[2] / 2);
        mp[1] -= min(mp[3], mp[1]);

        if (mp[2] % 2)
        {
            mp[1] -= min(2, mp[1]);
            ans++;
        }
        ans += (mp[1] + 3) / 4;
        cout << ans << endl;
    }

    return 0;
}