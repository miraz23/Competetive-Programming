// Link: https://codeforces.com/contest/239/problem/A

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

    while(t--)
    {
        int y, k, n; cin >> y >> k >> n;

        vector<int>v;
        int st = ((y / k) + 1) * k - y;

        for(int x = st; x + y <= n; x += k)
        {
            v.push_back(x);
        }

        if(v.empty()) cout << "-1" << endl;
        else
        {
            for(ll i = 0; i < v.size(); i++)
            {
                if (i > 0) cout << " ";
                cout << v[i];
            }
            cout << endl;
        }
    }

    return 0;
}