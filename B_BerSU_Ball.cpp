// Link: https://codeforces.com/problemset/problem/489/B

/*

||-------------------------------||
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sacv1 sort(v1.begin(), v1.end())
#define sacv2 sort(v2.begin(), v2.end())
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
    swift;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, m; cin >> n;
        
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
            cin >> v1[i];

        cin >> m;
        vector<int> v2(m);
        for (int i = 0; i < m; i++)
            cin >> v2[i];

        sacv1; sacv2; c0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (abs(v1[i] - v2[j]) < 2)
                {
                    v2[j] = 1000;
                    count++;
                    break;
                }

        cnt;
    }

    return 0;
}