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
    cin >> t;

    while (t--)
    {
        string s; cin >> s;
        vector<int> x;

        for (char c : s)
        {
            x.push_back(c - '0');
        }

        int n = x.size();
        bool merged = false;
        for (int i = n - 2; i >= 0; --i)
        {
            int sum = x[i] + x[i + 1];
            if (sum >= 10)
            {
                x[i] = sum / 10;
                x[i + 1] = sum % 10;
                merged = true;
                break;
            }
        }

        if (!merged)
        {
            x[1] += x[0];
            x.erase(x.begin());
        }

        for (int num : x)
        {
            cout << char(num + '0');
        }
        cout << endl;
    }

    return 0;
}