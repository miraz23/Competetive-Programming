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
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 int count = 0
#define c1 int count = 1
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt cout << count << endl
#define sum cout << sum << endl
using namespace std;

int main()
{
    push;

    int t, n;
    cin >> t >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int dif = INT_MAX;
    
    for(int i = 0; i < n; i++)
    {
        dif = min(dif, a[i + t - 1] - a[i]);
    }
    cout << dif << endl;

    return 0;
}