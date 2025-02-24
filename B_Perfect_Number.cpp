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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    swift;
    int t;
    // cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        c0;

        for (int i = 19; i < 11000000; i++)
        {
            if (sumOfDigits(i) == 10)
            {
                count++;

                if (count == n)
                {
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
