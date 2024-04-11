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
        string s; cin >> s;

        map<char, int>mp;

        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); ++it)
        {
            if(it->second % n != 0)
            {
                minus;
                return 0;
            } 

        }
        string str;
        for(auto it = mp.begin(); it != mp.end(); ++it) 
        {   
            for(int i = 0; i < it->second / n; i++) 
            {
                str += it->first;
                //cout << str << endl;
            }
        }
        string ans;
        for(int i = 0; i < n; i++) ans += str;

        cout << ans << endl;
    }

    return 0;
}