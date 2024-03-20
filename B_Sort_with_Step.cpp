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
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n >> k;

        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {

            int x;

            cin >> x;

            if (abs(x - i) % k != 0)
            {

                cnt++;
            }
        }
        if (k == 1)
        {

            cout << "0" << endl;
        }

        else
        {

            if (cnt == 0)
            {

                cout << "0" << endl;
            }
            else if (cnt > 0 && cnt <= 2)
            {

                cout << "1" << endl;
            }
            else
            {

                cout << "-1" << endl;
            }
        }
    }

    return 0;
}