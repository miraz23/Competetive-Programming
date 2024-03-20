/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define push                      \
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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        s0;
        f1;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % n != 0)
            no;
        else
        {
            ll rem = sum / n;
            for (ll i = 0; i < n; i++)
            {
                ll a = v[i] - rem;
                if (a % 2 != 0)
                {
                    no;
                    flag = false;
                    break;
                }
            }
            if (flag)
                yes;
        }
    }

    return 0;
}