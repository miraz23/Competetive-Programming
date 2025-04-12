// Link: https://codeforces.com/problemset/problem/1367/C

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

void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    c0; a0; f0;

    int i = 0, j = 0;
    while(i < n && j < n)
    {
        if (s[j] == '1')
        {

            if (!flag)
                ans += (count / (k + 1));
            else
                ans += ((count - k) / (k + 1));
            i = j;
            count = 0;
            flag = true;
        }
        else if (s[j] == '0')
            count++;
        j++;
    }

    if (!flag)
        ans += ((count - 1) / (k + 1)) + 1;
    else
        ans += (count / (k + 1));
    cout << ans << endl;
}

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}