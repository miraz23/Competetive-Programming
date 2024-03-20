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

    while(t--)
    {
        int hx, hy, f; 
        cin >> hx >> hy >> f;

        int vx, vy;
        cin >> vx >> vy;

        f1;

        while (f--)
        {
            int fx, fy;
            cin >> fx >> fy;

            if ((vx + vy) % 2 == (fx + fy) % 2)
            {
                flag = false;
            }
        }
        if (flag) yes;
        else no;
    }
    return 0;
}