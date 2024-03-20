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
    //cin >> t;

    while (t--)
    {
        int n; cin >> n;
        vector<string>v;
        int count1 = 0, count2 = 0;
        for(int  i = 0; i < n; i++)
        {
            string s; cin >> s;
            v.push_back(s);
        }
        sac;
        for(int  i = 0; i < n; i++)
        {
            if(v[i] == v[0]) count1++;
            else count2++;
        }
        if(count1 > count2) cout << v[0] << endl;
        else  cout << v[n-1] << endl;
    }

    return 0;
}