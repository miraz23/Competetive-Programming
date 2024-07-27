#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, ans = INT32_MAX, x, i, j, k;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (j = -1000; j <= 1000; j++)
    {
        x = j;
        count = 0;
        for (i = 0; i < n; i++)
        {
            k = abs(a[i] - x);
            count += (k / 7);
            k %= 7;
            count += (k / 3);
            k %= 3;
            count += (k / 1);
            k %= 1;
        }
        ans = min(ans, count);
    }
    cout << ans << endl;
    return 0;
}