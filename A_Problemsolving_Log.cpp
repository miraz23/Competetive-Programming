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
    int n;
    cin >> n;
    vector<int> v(26);
    string s;
    cin >> s;

    for (char m : s)
    {
        v[m - 'A']++;
    }
    c0;
    for (int i = 0; i < 26; i++)
    {
        if (i + 1 <= v[i])
            count++;
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