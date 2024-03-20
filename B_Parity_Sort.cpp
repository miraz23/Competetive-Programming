#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n], arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        copy(a, a + n, arr);
        sort(arr, arr + n);

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0 && a[i] % 2 == 0 || arr[i] % 2 == 1 && a[i] % 2 == 1)
            {
                continue;
            }

            else
            {
                flag = 0;
                break;
            }

        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}