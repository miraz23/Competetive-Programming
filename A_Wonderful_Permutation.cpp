#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        int counter = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < k; i++)
        {
            if(a[i] > k)
            {
                counter++;
            }
        }
        cout << counter << endl;

    }
    return 0;
}