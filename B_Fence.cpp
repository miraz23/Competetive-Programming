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
#define c0 ll count = 0
#define c1 int count = 1
#define a0 long long ans = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define s0 ll sum = 0
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        s0;
        for (int i = 0; i < k; ++i)
        {
            sum += v[i];
        }

        ll sum2 = sum;
        int j = 0;

        for (int i = k; i < n; ++i)
        {
            sum += v[i] - v[i - k];
            if (sum < sum2)
            {
                sum2 = sum;
                j = i - k + 1;
            }
        }

        cout << j + 1 << endl;
    }

    return 0;
}