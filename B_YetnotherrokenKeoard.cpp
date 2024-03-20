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
        string s; cin >> s;
        vector<int> upper, lower;

        for(int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'b')
            {
                s[i] = ' ';
                if (!lower.empty())
                {
                    s[lower.back()] = ' ';
                    lower.pop_back();
                }
                continue;
            }
            if (s[i] == 'B')
            {
                s[i] = ' ';
                if (!upper.empty())
                {
                    s[upper.back()] = ' ';
                    upper.pop_back();
                }
                continue;
            }
            if (islower(s[i])) lower.push_back(i);
            else upper.push_back(i);
        }

        for(char ch : s) if (ch != ' ') cout << ch;
        cout << endl;
    }

    return 0;
}