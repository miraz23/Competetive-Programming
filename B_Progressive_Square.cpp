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
#define svec sort(vec.begin(), vec.end())
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
        int n, c, d; cin >> n >> c >> d;
        vector<int>v(n*n), vec;
        for(int i = 0; i < n * n; i++) cin >> v[i];

        f1;
        sac;

        int x = 0;
        for(int i = 0; i < n; i++)
        {
            int y = 0;
            for(int j = 0; j < n; j++)
            {
                vec.push_back(v[0] + c*x + d*y);
                y++;
            }
            x++;
        }
        svec;
        for(int i = 0; i < n*n; i++)
        {
            if(v[i] != vec[i])
            {
                flag = false;
                break;
            }
        }
        if(flag) yes;
        else no;

    }

    return 0;
}