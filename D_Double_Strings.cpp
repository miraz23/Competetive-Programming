// Link: https://codeforces.com/problemset/problem/1703/D

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
    cin >> t;

    while (t--)
    {
        int n; cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        string ans(n, '0');

        for (int i = 0; i < n; i++)
        {
            if (a[i].size() == 1)
                continue;

            for (int j = 0; j < a[i].size() - 1; j++)
            {
                string x = a[i].substr(0, j + 1);
                string y = a[i].substr(j + 1);

                if (x == y)
                {
                    if (freq[x] > 0)
                    {
                        ans[i] = '1';
                        break;
                    }
                }
                else
                {
                    if (freq[x] > 0 && freq[y] > 0)
                    {
                        ans[i] = '1';
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}