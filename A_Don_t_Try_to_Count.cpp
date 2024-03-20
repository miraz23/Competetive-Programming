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

void solve()
{
    int n, m;
    cin >> n >> m;

    string s1, s2;
    cin >> s1 >> s2;

    c0;
    
    while(1)
    {
        size_t str = s1.find(s2);

        if (string :: npos != str)
        {
            break;
        }
        if (m * n < s1.size())
        {
            count = -1;
            break;
        }
        count++;
        s1 += s1;   
    }
    cnt;
}

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}