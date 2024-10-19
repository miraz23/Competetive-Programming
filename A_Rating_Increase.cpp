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
        string s, s1, s2;
        cin >> s;
        int i, f = 0;
 
       
        for (i = 1; i < s.size(); ++i)
        {
            s1 = s.substr(0, i); 
            s2 = s.substr(i);    
 
            
            if (s2[0] != '0' && stoi(s1) < stoi(s2))
            {
                cout << s1 << " " << s2 << endl;
                f = 1;
                break;
            }
        }
 
        if (f==0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}