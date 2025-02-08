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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        sac; 
        // 5 1 3 2 1 -> 1 1 2 3 5 (1 2 4 7 12)      7 1 5 2 1 -> 1 1 2 5 7 (1 2 4 9 16)

        if (v[0] == 1 && n == 1) yes;
        else
        {
            vector<ll> prefix(n);
            prefix[0] = v[0];
            for (ll i = 1; i < v.size(); i++)
            {
                prefix[i] = prefix[i - 1] + v[i];
            }
            f1;
            for (ll i = 1; i < v.size(); i++)
            {
                if (v[i] > prefix[i - 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag && v[0]==1)
                yes;
            else
                no;
        }
    }

    return 0;
}