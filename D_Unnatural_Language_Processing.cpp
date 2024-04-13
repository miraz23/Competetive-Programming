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
#define end cout << endl
using namespace std;

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;
        string s, temp; cin >> s;

        bool flag1 = false;
        bool flag2 = false;
        
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == 'a' || s[i] == 'e') && (s[i + 1] != 'a' && s[i + 1] != 'e'))
            {
                temp += s[i];
                flag2 = true;
            }
            else if ((s[i] != 'a' && s[i] != 'e') && flag2 == false)
            {
                temp += s[i];
            }
            else if ((s[i] != 'a' && s[i] != 'e') && flag2 == true)
            {
                if (s[i + 1] != 'a' && s[i + 1] != 'e')
                {
                    temp += s[i];
                    temp += '.';
                    flag1 = true;
                    flag2 = false;
                }
                else
                {
                    temp += '.';
                    temp += s[i];
                    flag2 = true;
                    flag1 = false;
                }
            }
        }
        cout << temp << s[n - 1] << endl;
    }

    return 0;
}