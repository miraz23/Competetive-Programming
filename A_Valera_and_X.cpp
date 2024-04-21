/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define vstr vector<string>v
#define vin for (int i = 0; i < n; i++) cin >> v[i];
#define vp v.push_back
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
        int n; cin >> n;

        vstr(n); vin;

        for (int i = 0; i < n; i++)
        {
            if (v[i][i] != v[0][0] || v[i][n - i - 1] != v[0][0])
            {
                no;
                return 0;
            }
        } c0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(v[i][j] == v[0][1])
                {
                    count++;
                    //cnt
                    if(count == n*n)
                    {
                        no;
                        return 0;
                    }
                }
                else if ((i != j && i != n - j - 1) && v[i][j] != v[0][1])
                {
                    no;
                    return 0;
                }
            }
        }
        yes;
    }

    return 0;
}