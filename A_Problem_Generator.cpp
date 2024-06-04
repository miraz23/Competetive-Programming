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
#define map map<char, int> mp;
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
        int n, m; cin >> n >> m;
        string s; cin >> s;
        
        map;
        c0;

        for(char ch = 'A'; ch <= 'G'; ch++) mp[ch] = 0;
        for(char c : s) mp[c]++;

        for(char ch = 'A'; ch <= 'G'; ch++)
        {
            if(mp[ch] < m)
            {
                count += (m - mp[ch]);
            }
        } cnt;
        
    }

    return 0;
}