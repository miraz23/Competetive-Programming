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
    ll n, lcm;
    cin >> n;

    if (n == 1)
        lcm = 1;
    else if (n == 2)
        lcm = 2;
    else if (n == 3)
        lcm = 6;
    else if (n % 2 == 0)
    {
        if (n % 3 == 0)
            lcm = (n - 1) * (n - 2) * (n - 3);
        else
            lcm = n * (n - 1) * (n - 3);
    }
    else
        lcm = n * (n - 1) * (n - 2);

    cout << lcm << endl;

    return 0;
}