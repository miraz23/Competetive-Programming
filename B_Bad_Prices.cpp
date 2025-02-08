// Link: https://codeforces.com/contest/1213/problem/B

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

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        // 31 41 59 26 53 58 97 93 23 84
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        c0;

        /*

        int mini = INT_MAX;
        for(int i = n - 1; i >= 0; i--){
            if (v[i] > mini) {
                count++;
            }
            mini = min(mini, v[i]);
        }

        */

        //Using Stack
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() >= v[i])
            {
                st.pop();
            }

            if (!st.empty())
            {
                count++;
            }
            st.push(v[i]);
        }
        cnt;
    }

    return 0;
}