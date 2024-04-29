/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(v.begin(), v.end())
#define sdc sort(v.begin(), v.end(), greater<int>())
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

int n, k, arr[510][510], m;
char c[510][510];
int get(int a, int b, int x, int y)
{

    if (a > x || b > y)
        return 0;
    return arr[x][y] - arr[a - 1][y] - arr[x][b - 1] + arr[a - 1][b - 1];
}
int main()
{
    int t;
    t = 1;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cin >> c[i][j];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (c[i][j] == 'W')
                    arr[i][j] = 1;
                else
                    arr[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] += (arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1]);
            }
        }
        bool f1 = 1, f2 = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (c[i][j] == 'B')
                {
                    bool here1 = 1, here2 = 1;
                    int l = get(1, 1, i, j), r = get(i, j, n, m);
                    if (l == 0 || r == 0)
                        here1 = 0;
                    l = get(1, j, i, m), r = get(i, 1, n, j);
                    if (l == 0 || r == 0)
                        here2 = 0;

                    f1 &= (here1 | here2);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (c[i][j] == 'B')
                    arr[i][j] = 1;
                else
                    arr[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] += (arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (c[i][j] == 'W')
                {
                    bool here1 = 1, here2 = 1;
                    int l = get(1, 1, i, j), r = get(i, j, n, m);
                    if (l == 0 || r == 0)
                        here1 = 0;
                    l = get(1, j, i, m), r = get(i, 1, n, j);
                    if (l == 0 || r == 0)
                        here2 = 0;

                    f2 &= (here1 | here2);
                }
            }
        }
        if (f1 || f2) yes;
        else no;
    }
    return 0;
}