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
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        c[i] = v[i];
    }

    sac;
    a0;
    c0;

    for (int i = 0; i < n; i++)
    {
        if (v[0] == c[i])
        {
            count++;
            if (count == 2)
                break;
            ans = i;
        }
    }

    if (count >= 2)
        cout << "Still Rozdil" << endl;
    else
        cout << ans + 1 << endl;

    return 0;
}