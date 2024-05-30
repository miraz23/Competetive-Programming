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
        int n; cin >> n;
        string s; cin >> s;

        int flag1=1, flag2=1;


        for(int i = 0; i < s.size()-1; i++)
        {
            if(isalpha(s[i]) && isdigit(s[i+1]))
            {
                flag1=0;
                break;
            }
        }


        for(int i = 0; i < s.size()-1; i++)
        {
            if(isalpha(s[i]) && isalpha(s[i+1]) && s[i] > s[i+1])
            {
                flag1=0;
                break;
            }
        }
        for(int i = 0; i < s.size()-1; i++)
        {
            if(isdigit(s[i]) && isdigit(s[i+1]) && s[i] > s[i+1])
            {
                flag2=0;
                break;
            }
        }

        if(flag1 && flag2) yes;
        else no;
    }

    return 0;
}