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
    int n; cin >> n;
    string s; cin >> s;

    a0;
    string str;

    for(int i = 0; i < n - 1; i++)
    {
        c0;
        for(int j = 0; j < n - 1; j++)
            if (s[j] == s[i] && s[j + 1] == s[i + 1]) count++;
                
        if(ans < count)
        {
            ans = count;
            str = string(1, s[i]) + string(1, s[i + 1]);
        }
    }

    cout << str << endl;
    return 0;
}