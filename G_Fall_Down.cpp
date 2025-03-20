// Link: https://codeforces.com/problemset/problem/1669/G

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
    int n, m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> v[i][j];

    for (int j = 0; j < m; ++j)
    {
        int k = n - 1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (v[i][j] == 'o')
            {
                k = i - 1;
            }
            else if (v[i][j] == '*')
            {
                swap(v[i][j], v[k][j]);
                --k;
            }
        }
    }

    for (const auto &row : v)
    {
        for (char c : row)
            cout << c;
        cout << endl;
    }

    cout << endl;
}

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}