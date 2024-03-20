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
#define c0 ll count = 0
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
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int a, b, c; cin >> a >> b >> c;
        a /= 1;
        int temp = b / 3;
        b %= 3;
        if(b + c < 3 && b != 0) cout << -1 << endl;
        else{
            int m = (b + c) / 3;
            int n = (b + c) % 3;
            if(n > 0) n = 1;
            else n = 0;
            cout << a + temp + m  + n << endl;
        }


    }

    return 0;
}