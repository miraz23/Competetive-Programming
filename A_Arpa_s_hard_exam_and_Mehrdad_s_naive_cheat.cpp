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
        ll n, ans; cin >> n;

        ans = n % 8;

        if (n == 0) cout << "1" << endl;
        else if (ans == 0) cout << "6" << endl;
        else if (ans == 1) cout << "8" << endl;
        else if (ans == 2) cout << "4" << endl;
        else if (ans == 3) cout << "2" << endl;
        else if (ans == 4) cout << "6" << endl;
        else if (ans == 5) cout << "8" << endl;
        else if (ans == 6) cout << "4" << endl;
        else if (ans == 7) cout << "2" << endl;

    }

    return 0;
}