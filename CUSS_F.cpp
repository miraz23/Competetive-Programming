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
#define sdc sort(v.begin(), v.end(), greater<int>())
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 int count = 0
#define c1 int count = 1
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
        char c[3][3];

        f0;
        
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> c[i][j];
            }
        }

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(c[i][j] == 'h')
                {
                    if(i == 0)
                    {
                        if(j == 0 && (c[1][2] == 'h' || c[2][1] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if(j == 1 && (c[2][0] == 'h' || c[2][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if(j == 2 && (c[1][0] == 'h' || c[2][1] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(i == 1)
                    {
                        if(j == 0 && (c[0][2] == 'h' || c[2][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if(j == 1)
                        {
                            flag = 0;
                        }
                        if(j == 2 && (c[0][0] == 'h' || c[2][0] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(i == 2)
                    {
                        if(j == 0 && (c[0][1] == 'h' || c[1][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if(j == 1 && (c[0][0] == 'h' || c[0][2] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                        if(j == 2 && (c[1][0] == 'h' || c[0][1] == 'h'))
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }

        if(flag) yes;
        else no;
    }

    return 0;
}