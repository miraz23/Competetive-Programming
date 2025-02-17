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
        int n, m; cin >> n >> m;

        vector<int> a(n);
        vector<int> b(n + 1);
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            s.insert(a[i]);
            b[i] = s.size();
        }

        while (m--)
        {
            int x;
            cin >> x;
            cout << b[x - 1] << endl;
        }
    }

    return 0;
}