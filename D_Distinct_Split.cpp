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
#define a0 int ans = 0
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
        int n;
        string str;
        cin >> n >> str;
        vector<int> prefix(n, 0), suffix(n, 0);
        set<char> se;
        for (int i = 0; i < n; i++)
        {
            se.insert(str[i]);
            prefix[i] = se.size();
        }
        se.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            se.insert(str[i]);
            suffix[i] = se.size();
        }
        int maxo = 0;
        a0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = prefix[i] + suffix[i + 1];
            maxo = max(maxo, ans);
        }
        cout << maxo << endl;
    }

    return 0;
}