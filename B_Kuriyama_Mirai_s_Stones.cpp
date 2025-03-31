// Link: https://codeforces.com/contest/433/problem/B

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
    ll arr[n] = {};
    ll arr2[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + n);
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
        arr2[i] = arr2[i - 1] + arr2[i];
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t, r, l; cin >> t >> l >> r;
        l -= 1;
        r -= 1;
        if (t == 1)
        {
            if (l == 0)
                cout << arr[r] << endl;
            else
            {
                cout << arr[r] - arr[l - 1] << endl;
            }
        }
        else
        {
            if (l == 0)
                cout << arr2[r] << endl;
            else
            {
                cout << arr2[r] - arr2[l - 1] << endl;
            }
        }
    }
}

int main()
{
    swift;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}