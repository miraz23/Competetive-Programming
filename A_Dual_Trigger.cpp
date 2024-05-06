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
    cin >> t;

    while (t--)
    {
        int n, i, count = 0, f = 0;
        string s;
        cin >> n >> s;
        
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '1') count++;
        }
        if (count % 2 != 0) no;
        else if (count == 2)
        {
            for (i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    f = 1;
                    no; break;
                }
            }
            if (f == 0) yes;
        }
        else yes;
    }

    return 0;
}