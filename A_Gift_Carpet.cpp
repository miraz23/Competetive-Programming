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

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        char ch[r][c];

        string s = "vika";

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> ch[i][j];
            }
        }

        a0;
        c0;

        for (int j = 0; j < c; j++)
        {
            for (int i = 0; i < r; i++)
            {
                if (ch[i][j] == s[count])
                {
                    count++;
                    ans++;
                    break;
                }
            }
        }
        if(ans == 4) yes;
        else no;
    }

    return 0;
}