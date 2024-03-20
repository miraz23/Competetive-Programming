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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int count1 = 0, count2 = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
                count1++;
            if (s2[i] == '1')
                count2++;
        }
        if (count1 < count2)
        {
            for (int i = 0; i < n; i++)
            {
                if (s2[i] == '1')
                {
                    if (s1[i] == '0')
                    {
                        count++;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s1[i] == '1')
                {
                    if (s2[i] == '0')
                    {
                        count++;
                    }
                }
            }
        }

        cnt; 
    }

    return 0;
}