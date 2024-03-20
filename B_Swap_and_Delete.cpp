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
#define c01 int count0 = 0, count1 = 0
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
        string s; cin >> s;
        a0;
        map<int,int>mp;
        for(ll i = 0; i < s.size(); i++)
        {
            mp[s[i] - '0']++;
        }
        for(ll i = 0; i < s.size(); i++)
        {
            if (mp[!(s[i] - '0')] > 0)
            {
                mp[!(s[i] - '0')]--;
            }
            else
            {
                ans = s.size() - i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}