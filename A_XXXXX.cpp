// Link: https://codeforces.com/problemset/problem/1364/A

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

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    s0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    if (sum % x != 0) {
        cout << n << endl;
        return;
    }
    
    int left = -1, right = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] % x != 0) {
            left = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] % x != 0) {
            right = i;
            break;
        }
    }
    
    if (left == -1) {
        cout << -1 << endl;
        return;
    }
    
    cout << max(n - (left + 1), right) << endl;
}

int main()
{
    swift;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}