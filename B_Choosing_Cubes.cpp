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
#define c0 int count = 0
#define c1 int count = 1
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mb cout << "MAYBE" << endl
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
        int n, f, k; cin >> n >> f >> k;
        vector<int>v(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        int temp = v[f-1];

        sdc;
        int f1 = 0, f2=0;

        for(int i = 0; i < v.size(); i++)
        {
            if(temp == v[i])
            {
                if(i > k-1) f1 =1;
                else if(i <= k-1) f2 = 1; 
                
                
                // 5 2 2
                //  4 3 3 2 3 ----- 4 3 3 3 2
            }
        }

        if(f1 && f2) mb;
        else if(f1) no;
        else yes;
    }

    return 0;
}