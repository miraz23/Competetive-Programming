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
    //cin >> t;

    while (t--)
    {
        int n ,i;
        cin >> n; 
 
        for ( i = 1; i <= n; i++)
        {
            if (i % 2 == 1) cout << "I hate"; 
            else cout << "I love"; 
 
            if (i == n)  cout << " it"; 
            else cout << " that "; 
        }
        cout << endl; 
    }

    return 0;
}