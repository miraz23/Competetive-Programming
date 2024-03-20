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
    // cin >> t;

    while (t--)
    {
        int i, j, x, n, m, p, k, t;
        string st;
        cin >> st;
        x = st.size();
        long long int sum = 0;

        for (i = 0; i < x; i++)
        {
            sum += st[i] - '0';
        }

        if (x == 1)
            cout << 0 << endl;
        else if (sum < 10)
            cout << 1 << endl;
        else
        {
            j = 0;
            n = sum;
            while (sum > 9)
            {
                sum = 0;
                while (n > 0)
                {
                    sum += n % 10;
                    n /= 10;
                }
                n = sum;
                j++;
            }
            cout << j + 1 << endl;
        }

        return 0;
    }

    return 0;
}