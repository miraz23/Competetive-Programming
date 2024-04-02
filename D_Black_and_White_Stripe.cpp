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
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int countw = 0, countb = 0, minw = INT_MAX;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'B') countb++;

            else if (s[i] == 'W') countw++;

        }
        if (countb == k) minw = 0;
        else minw = countw;

        for (int i = 1; i <= n - k; i++)
        {
            if (s[i - 1] == 'B') countb--;
            else if (s[i - 1] == 'W') countw--;

            if (s[i + k - 1] == 'B')
            {
                countb++;
            }
            else if (s[i + k - 1] == 'W') countw++;

            if (countb == k)
            {
                minw = 0;
                break;
            }

            minw = min(minw, countw);
        }

        cout << minw << endl;
    }

    return 0;
}