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
#define vd vector<ll>v(n)
#define sd set<ll>st
#define vin for(int i = 0; i < n; i++) cin >> v[i]
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 long long count = 0
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
        int n; a0; c0; cin >> n;
        
        vd; vin; sd;
        
        for(int i = 0; i < n; i++)
        {
            ans+=v[i];
            st.insert(v[i]);

            if(ans % 2 == 0)
            {
                if(st.count(ans / 2)) count++;
            }
        } cnt;

        //cout << 8*1000000000 << endl;
        
    }

    return 0;
}