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
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    string s;
    cin >> s;

    string s2 = "hello";
    
    f0;

    for (int i = 0, j = 0; i < s.size() && j < s2.size(); i++)
    {
        if (s2[j] == s[i])
        {
            j++;

            if (j == s2.size())
            {
                flag = true;
            }
        }
    }

    if (flag) yes;
    else no;

    return 0;
}
