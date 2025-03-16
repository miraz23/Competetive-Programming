// Link: https://codeforces.com/problemset/problem/1667/A

/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = LLONG_MAX;

    for (int start = 0; start < n; start++)
    {
        vector<int> b(n, 0);
        int moves = 0;

        for (int i = start - 1; i >= 0; i--)
        {
            int steps = (abs(b[i + 1]) / a[i]) + 1;
            b[i] = -steps * a[i];
            moves += steps;
        }

        for (int i = start + 1; i < n; i++)
        {
            int steps = (b[i - 1] / a[i]) + 1;
            b[i] = steps * a[i];
            moves += steps;
        }

        ans = min(ans, moves);
    }

    cout << ans << endl;
}

int32_t main()
{
    solve();

    return 0;
}
