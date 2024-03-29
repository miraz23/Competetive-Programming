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

    while (t--)
    {
        string s;
        cin >> s;

        vector<int> v;

        string str = "";
        str += s[0];
        str += s[1];

        int h = stoi(str);
        v.push_back(h);

        if (v[0] < 12 && v[0] > 0)
        {
            cout << s << " AM" << endl;
        }
        else if(v[0] == 12 || (s[0] == '0' && s[1] == '0'))
        {
            if(s[0] == '0' && s[1] == '0') cout << "12:" << s[3] << s[4] << " AM" << endl;  
            else if(v[0] == 12) cout << "12:" << s[3] << s[4] << " PM" << endl;
        }
        else if(v[0] > 12)
        {
            int hr = (h + 12) - 24;
            if(hr < 10) cout << '0' << hr << ':' << s[3] << s[4] << " PM" << endl;
            else cout << hr << ':' << s[3] << s[4] << " PM" << endl;
        }
    }

    return 0;
}