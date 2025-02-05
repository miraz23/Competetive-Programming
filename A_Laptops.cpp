/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                      \
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
    //cin >> t;

    while (t--)
    {
        int n; cin >> n;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sac;
        for(int i = 0; i < v.size(); i += 1)
        {
            if(v[i].first < v[i + 1].first && v[i].second > v[i + 1].second)
            {
                cout << "Happy Alex" << endl;
                return 0;
            }
        }
        cout << "Poor Alex" << endl;
    }

    return 0;
}