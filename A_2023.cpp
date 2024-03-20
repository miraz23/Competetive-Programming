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
#define in for(int i = 0; i < n; i++) cin >> a[i]
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
#define end cout << endl
using namespace std;

void above()
{
    int n , k, y = 2023;
    cin >> n >> k;
    int a[n];
    c1; in;
    for(int i = 0; i < n; i++) count *= a[i];
    if((y % count == 0) && y >= count)
    {
        yes;
        cout << y / count << ' ';
        for(int i = 0; i < k - 1; i++) cout << "1 ";
        end;
    } 
    else no;
    
}

int main()
{
    push;
    int t = 1;
    cin >> t;
    
    while (t--)
    {
        above();
    }

    return 0;
}