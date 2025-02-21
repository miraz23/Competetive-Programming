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
    cin >> t;

    while (t--)
    {
        string s; cin >> s;
        int n = s.length();
        vector<int>v(n);
        v.push_back(0);
        for(int i = 0; i < n; i++){
            if(s[i] == 'R')
                // cout << i + 1 << " "; 
                v.push_back(i+1);
        }
        v.push_back(n+1);
        int ans = 0;
        for(int i = 1; i < v.size(); i++){
            ans = max(ans, v[i] - v[i-1]);
        }
        cout << ans << endl;
    }

    return 0;
}