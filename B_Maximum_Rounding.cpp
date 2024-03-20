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
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt cout << count << endl
#define sum cout << sum << endl
using namespace std;

int main()
{
    push;
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        ll len = s.size();
        s = '0' + s;

        reverse(s.begin(), s.end());

        int j = 0;
        ll temp = 0;

        for (ll i = 0; i < len; i++)
        {
            if (s[i] >= '5')
            {
                s[i + 1]++;
                
                for (ll j = i; temp <= j; j--)
                {
                    s[j] = '0';
                }
                temp = i;
            }
        }
        reverse(s.begin(), s.end());

        if (s[0] == '0')
        {
            for (ll i = 1; i <= len; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            for (ll i = 0; i <= len; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}