// Link: https://codeforces.com/problemset/problem/349/A

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
        vector<int> v(100001);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        f1;
        int tf = 0, hn = 0, fy = 0;
        for(int i = 0; i < n; i++)
        {
            if (v[i] == 25) tf++;
            else if (v[i] == 50)
            {
                if (tf < 1)
                {
                    flag = false;
                    break;
                }
                else
                {
                    tf = tf - 1;
                    fy = fy + 1;
                }
            }
            else if (v[i] == 100)
            {
                if (tf >= 1 && fy >= 1)
                {
                    tf = tf - 1;
                    fy = fy - 1;
                }
                else if (tf >= 3)
                {
                    tf = tf - 3;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) yes;
        else no;
    }

    return 0;
}