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
        int n, q; cin >> n >> q;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sdc;

        vector<int> prefix(n);
        prefix[0] = v[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + v[i];
        }
        //4 3 3 1 1 4 5 9 -- 9 5 4 4 3 3 1 1 -- 9 14 18 22 25 28 29 30
        while(q--)
        {
            int x; cin >> x;
            int left = 0, right = n - 1, mid, ans = -1;
            while(left <= right)
            {
                mid = (left + right) / 2;
                if(prefix[mid] >= x) 
                {
                    ans = mid+1;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}