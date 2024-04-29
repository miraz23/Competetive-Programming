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
    int t;
    cin >> t;
    while (t--)
    {
        int n,j,i;
        cin >> n;
        vector<int> v(n);
        vector<int> s;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        s.push_back(v[0]);
        for ( i = 1; i < n; i++)
        {
            if (v[i]!=v[i-1])
            {
                s.push_back(v[i]);
            }
        }
        for ( i = s.size()-1; i > 0; i--)
        {
            s[i]=s[i]-s[i-1];
        }
        bool ans=true;
        for ( i = 0; i < s.size(); i++)
        {
            if (i==s.size()-1)
            {
                break;
            }
            if (s[i]==1)
            {
                ans=!ans;
            }
            else
            {
                break;
            }
        }
        if (ans)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}