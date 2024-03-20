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
    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int counta = 0, countb = 0;

        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == 'A') counta++;
            else countb++;
        }
        if(counta > countb) cout << "A" << endl;
        else cout << "B" << endl;
         
    }

    return 0;
}