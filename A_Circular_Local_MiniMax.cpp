#include <bits/stdc++.h>
#define swift                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(v.begin(), v.end())
#define sdc sort(v2.begin(), v2.end(), greater<int>())
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
    int t;
    cin >> t;

    while (t--)
    {
        // 1 1 1 11 111 1111 -> 1 1 1, 11 111 1111 -> 1 1 1, 1111 111 11 -> 1 1111 1 111 1 11 -> 11 1 1111 1 111 1 11 1
        //  1 9 8 4 -> 1 4 8 9 -> 1 4, 8 9 -> 1 4, 9 8 -> 1 9 4 8
        
        int n; cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sac;

        if (n % 2 == 1 && v[n / 2] == v[n / 2 - 1])
        {
            no;
            continue;
        }

        vector<int> ans(n);
        int j = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans[i] = v[j++];
        }
        for (int i = 1; i < n; i += 2)
        {
            ans[i] = v[j++];
        }

        v = ans;
        f0;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] < v[(i + 1) % n] && v[i] < v[(i ? i - 1 : n - 1)])
                continue;
            else if (v[i] > v[(i + 1) % n] && v[i] > v[(i ? i - 1 : n - 1)])
                continue;
            else
            {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            yes;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else no;
    }

    return 0;
}