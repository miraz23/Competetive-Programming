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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;

    else if (a.first == b.first)
        return a.second < b.second;

    else
        return false;
}

int main()
{
    int n, d;
    cin >> n >> d;

    map<pair<int, int>, int> m;
    pair<int, int> a[n];

    for (int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;
        a[i] = make_pair(p, t);
        m[a[i]]++;
    }
    sort(a, a + n, cmp);
    cout << m[a[d - 1]];
    
    return 0;
}