// Link: https://codeforces.com/problemset/problem/1700/B

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
        ll len;
        cin >> len;
        string s;
        cin >> s;

        string t(s.size(), '_');
        if (s[0] != '9')
        {
            for (long p = 0; p < s.size(); p++)
            {
                t[p] = '0' + ('9' - s[p]);
            }
        }
        else
        {
            int carry(0);
            for (long p = s.size() - 1; p >= 0; p--)
            {
                int a = 1 - carry;
                int b = s[p] - '0';
                int diff = a - b;
                if (diff < 0)
                {
                    carry = 1;
                    diff += 10;
                }
                else
                {
                    carry = 0;
                }
                t[p] = (char)(diff + '0');
            }
        }

        cout << t << endl;
    }

    return 0;
}