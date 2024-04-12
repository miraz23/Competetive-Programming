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
        int n; cin >> n;

        int cash = 1;
        int max = 1;
        
        int h0, m0;
        cin >> h0 >> m0;

        while (--n)
        {
            int h, m; cin >> h >> m;
            
            if (h0 == h && m0 == m)
            {
                cash++;
                if (cash > max) max = cash;
            }
            else cash = 1;

            h0 = h;
            m0 = m;
        }
        cout << max;
    }

    return 0;
}