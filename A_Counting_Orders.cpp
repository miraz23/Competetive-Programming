//Link: https://codeforces.com/contest/1827/problem/A

/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define saca sort(a.begin(), a.end())
#define sacb sort(b.begin(), b.end())
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
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        saca;
        sacb;

        f0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= b[i])
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << 0 << endl;
            continue;
        }

        ll ans = 1;
        for (ll i = 0; i < n; i++)
        {
            int left = i, right = n - 1;
            int index;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (a[i] > b[mid])
                {
                    index = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            ll mod = 1e9+7;
            ll res = index - i + 1;
            ans *= res;
            ans %= mod;
        }

        cout << ans << endl;
    }
    return 0;
}