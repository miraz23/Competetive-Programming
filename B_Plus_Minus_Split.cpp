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
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define c12 int count1 = 0, count2 = 0;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
#define answer cout << ans << endl
using namespace std;

void solve()
{
    int n; cin >> n;
    c12;
    string s; cin>>s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '-') count2++;
        else count1++;
    }
    int maxi = max(count1, count2);
    int mini = min(count1, count2);

    a0;
    ans =  maxi - mini;
    answer;
}

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}