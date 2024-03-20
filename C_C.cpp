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

int GCD(vector<int> &v)
{
    int result = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        result = __gcd(result, v[i]);
    }
    return result;
}

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = n / k;
        s0;
        vector<int> v;
        for (int i = 0; i < k - 1; i++)
        {
            v.push_back(ans);
        }
        for (int i = 0; i < k - 1; i++)
            sum += v[i];

        int rem = n - sum;
        v.push_back(rem);

        int gcd = GCD(v);
        if (gcd > 1)
            yes;
        else
            no;
    }

    return 0;
}