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
        int n, k, i;
        cin >> n >> k;
        vector<int> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        if (k == 4)
        {
            int cnt1 = k, cnt2 = 2;
            for (i = 0; i < n; i++)
            {
                if (v[i] % 4 == 0)
                {
                    cnt1 = 0;
                    break;
                }
                else
                {
                    if (cnt1 > k - v[i] % k)
                        cnt1 = k - v[i] % k;
                }
            }

            for (i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                    cnt2 = max(cnt2 - 1, 0);
            }
            cout << min(cnt2, cnt1) << endl;
        }
        else
        {
            int cnt1 = k;
            for (i = 0; i < n; i++)
            {
                if (v[i] % k == 0)
                {
                    cnt1 = 0;
                    break;
                }
                else
                {
                    if (cnt1 > k - v[i] % k)
                        cnt1 = k - v[i] % k;
                }
            }
            cout << cnt1 << endl;
        }
    }

    return 0;
}