/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(str.begin(), str.end())
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
        s0; f0;

        string str = s;
        sac;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != str[i])
            {
                flag = 1;
            }
        }

        if(!flag) cout << 1 << endl;
        else
        {
            for(int i = 0; i < s.size()-1; i++)
            {
                sum += s[i] ^ s[i+1];
            }
            if(sum < 2) cout << sum + 1 << endl;
            else sm;
        }
    }

    return 0;
}