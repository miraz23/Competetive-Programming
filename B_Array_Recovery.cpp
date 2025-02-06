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
        vector<int> v(n), ans(n);
        
        for(int i = 0; i < n; i++)
            cin >> v[i];

        ans[0] = v[0];
        f1;

        for (int i = 1; i < n; i++)
        {
            int a = ans[i - 1] + v[i];
            int b = ans[i - 1] - v[i];
            if (a >= 0 && b >= 0 && a != b)
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
            ans[i] = max(a, b);
        }
        if (flag)
        {
            for(int i = 0; i < n; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }

    return 0;
}