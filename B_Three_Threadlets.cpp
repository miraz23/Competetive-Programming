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
        int a, b, c;
        cin >> a >> b >> c;
        int mini = min({a, b, c});
        c0;
        f1;
        while(a != mini)
        {
            if (count > 3 || a % mini != 0)
            {
                flag = 0;
                break;
            }
            a -= mini;
            count++;
        }
        while(b != mini)
        {
            if(count > 3 || b % mini != 0)
            {
                flag = 0;
                break;
            }
            b -= mini;
            count++;
        }
        while(c != mini)
        {
            if(count > 3 || c % mini != 0)
            {
                flag = 0;
                break;
            }
            c -= mini;
            count++;
        }
        if(count > 3)
            flag = 0;

        if (flag) yes;
        else no;
    }

    return 0;
}