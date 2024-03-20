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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
        ll a, b, c;
        cin >> a >> b >> c;

        ll m = pow(10, a - 1);
        ll n = pow(10, b - 1);
        ll o = pow(10, c - 1);
        ll p = pow(10, c - 1);

        while(o < m) o *= 2;
        while(p < n) p *= 3;

        cout << o << " " << p << endl;
    }

    return 0;
}