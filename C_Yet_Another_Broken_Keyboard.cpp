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

int main()
{
    swift;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        set<char> st;
        a0;
        for (int i = 0; i < k; ++i)
        {
            char c;
            cin >> c;
            st.insert(c);
        }
        for (int i = 0; i < n; ++i)
        {
            int j = i;
            while (j < n && st.count(s[j]))
                ++j;
            int len = j - i;
            ans += len * 1ll * (len + 1) / 2;
            i = j;
        }
        cout << ans << endl;
    }

    return 0;
}