/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define swift                      \
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
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k; cin >> n >> k;
        vector<int>v(n);
        int freq[101] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }f0;

        for(int i = 0; i < 101; i++)
        {
            if(freq[i] >= k)
            {
                flag = true;
                break;
            }
        }
        if(flag) cout << k - 1 << endl;
        else cout << n << endl;
    }

    return 0;
}