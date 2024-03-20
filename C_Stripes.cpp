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
        int i, j;
        char RB[8][8];
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                cin >> RB[i][j];
            }
        }
        bool red = true, blue = true;
        for (int i = 0; i < 8; i++)
        {
            red = true;
            blue = true;
            for (int j = 0; j < 8; j++)
            {
                if (RB[i][j] != 'R')
                {
                    red = false;
                }
                if (RB[j][i] != 'B')
                {
                    blue = false;
                }
            }
            if (red || blue)
            {
                break;
            }
        }
        if (red)
        {
            cout << "R" << endl;
        }
        else if (blue)
        {
            cout << "B" << endl;
        }
    }

    return 0;
}