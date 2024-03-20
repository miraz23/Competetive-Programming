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
    int t;
    cin >> t;
    while (t-- > 0)
    {

        int n;

        cin >> n;

        if (n <= 9)
        {

            cout << n << endl;
        }
        else if (n <= 17)
        {

            cout << n - 9 << 9 << endl;
        }
        else if (n <= 24)
        {

            cout << n - 17 << 8 << 9 << endl;
        }
        else if (n <= 30)
        {

            cout << n - 24 << 7 << 8 << 9 << endl;
        }
        else if (n <= 35)
        {

            cout << n - 30 << 6 << 7 << 8 << 9 << endl;
        }
        else if (n <= 39)
        {

            cout << n - 35 << 5 << 6 << 7 << 8 << 9 << endl;
        }
        else if (n <= 42)
        {

            cout << n - 39 << 4 << 5 << 6 << 7 << 8 << 9 << endl;
        }
        else if (n <= 44)
        {

            cout << n - 42 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << endl;
        }
        else if (n <= 45)
        {

            cout << n - 44 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << endl;
        }
        else
        {

            cout << -1 << endl;
        }
    }
    return 0;
}