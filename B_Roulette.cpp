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
    int t;
    cin >> t;

    vector<vector<int>> v(t);
    vector<int> store;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }

    int x;
    cin >> x;

    int min = INT_MAX;

    for (int i = 0; i < t; i++)
    {
        if (find(v[i].begin(), v[i].end(), x) != v[i].end())
        {
            if (v[i].size() < min)
            {
                min = v[i].size();
                store.clear();
                store.push_back(i);
            }
            else if (v[i].size() == min)
            { 
                store.push_back(i);
            }
        }
    }

    cout << store.size() << endl;

    for (int i = 0; i < store.size(); i++)
    {
        cout << store[i] + 1 << " ";
    }

    return 0;
}