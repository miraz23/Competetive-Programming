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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string str = s;
        int l = str.size() - 1;
        f0;
        int i = 0, j = l;

        while (i < j)
        {
            if (str[i] == str[j])
            {
                i++;
                j--;
            }
            else if(str[i] < str[j])
            {
                cout << str << endl;
                flag = true;
                break;
            }
            else if(str[i] > str[j])
            {
                reverse(s.begin(), s.end());
                cout << s + str << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << str << endl;
    }

    return 0;
}