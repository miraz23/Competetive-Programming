// Link: https://codeforces.com/problemset/problem/519/B

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
    int n; cin >> n;

    vector<int> a(n);
    vector<int> b(n - 1);
    vector<int> c(n - 2);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    for (int i = 0; i < n - 2; i++)
        cin >> c[i];
    sort(c.begin(), c.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << a[i] << endl;
            break;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != c[i])
        {
            cout << b[i] << endl;
            break;
        }
    }

    return 0;
}