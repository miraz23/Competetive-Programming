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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e')
            {
                v.push_back(s[i]);
                int j = i+1;
                if (j+1 < s.size() - 1)
                {
                    if (s[j] != 'a' || s[j] != 'e' && s[j+1] != 'a' || s[j+1] != 'e')
                    {
                        v.push_back(s[j]);
                        v.push_back('.');
                        i=j;
                    }
                    else
                        v.push_back('.');
                }
            }
            else
                v.push_back(s[i]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        end;
    }

    return 0;
}