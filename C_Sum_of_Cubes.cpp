// Link: https://codeforces.com/problemset/problem/1490/C

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
        ll x; cin >> x;
        set<ll>s;
        f0;
        for(ll i = 1; i*i*i <= x; i++)
        {
            ll a3 = i*i*i;
            s.insert(a3);

            ll b3 = x - a3;
            
            if(s.find(b3) != s.end())
            {
                flag = true;
            }
        }
        if(flag) yes;
        else no;
    }

    return 0;
}