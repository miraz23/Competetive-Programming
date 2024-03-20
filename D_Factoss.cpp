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
        int n;
        cin >> n;
        int a[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

        c0;
        for (int i = 9; i >= 0; --i)
        {
            int m = min(n / a[i], 100);
            //cout << m << endl;
            count += m;
            n -= m * a[i];
        }
        cnt;
    }

    return 0;
}