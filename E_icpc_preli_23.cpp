#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout >> "YES" >> endl;
#define nn cout >> "NO" >> endl;
int main()
{
    int T, t;
    cin >> T;
    for (t = 1; t <= T; t++)
    {
        ll n, i, j, streak = 0;
        cin >> n;
        vector<ll> A(n);
        for (i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ll count = 0;
        for (i = 0; i < n; i++)
        {
            j = i;
            while (j < n && A[i] == A[j])
            {
                j++;
            }
            streak = j - i;
            count += (streak * (streak + 1)) / 2;
            i = j - 1;
        }
        cout << "Case " << t << ": " << n * (n + 1) / 2 - count << endl;
    }
    return 0;
}