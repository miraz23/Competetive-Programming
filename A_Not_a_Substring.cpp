/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define push                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(s.begin(), s.end())
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
        string s;
        cin >> s;

        c0;
        int count2 = 0;
        int len = s.size();
        vector<char> v;

        if (s[0] == '(' && s[len - 1] == ')' && len < 3)
            no;
        else
        {
            sac;

            for (int i = 0; i < len; i++)
            {
                if (s[i] == '(')
                {
                    count++;
                }
                else
                    count2++;
            }

            if (count < count2)
            {
                yes;
                for (int i = 0; i < count2; i++)
                {
                    v.push_back('(');
                }
                for (int i = 0; i < count2; i++)
                {
                    v.push_back(')');
                }
            }
            else if (count > count2)
            {
                yes;
                for (int i = 0; i < count; i++)
                {
                    v.push_back('(');
                }
                for (int i = 0; i < count; i++)
                {
                    v.push_back(')');
                }
            }
            else yes;
            for (int i = 0; i < v.size(); i++)
                cout << v[i];
                cout << "()" << endl;
        }
    }

    return 0;
}