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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
        ll n;
        cin >> n;
        ll arr[n];
        set<ll> s;
        int cnt1 = 0, cnt2 = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        sort(arr, arr + n);

        if (s.size() > 2) no;
        else if (s.size() == 1) yes;
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] == arr[0])
                    cnt1++;
                if (arr[i] == arr[n - 1])
                    cnt2++;
            }
            if (cnt1 == cnt2 || abs(cnt1 - cnt2) == 1) yes;
            else no;
        }
    }

    return 0;
}