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
        int a[n];

        int counter1 = 0, counter2 = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] % 2 == 0)
            {
                counter1 += a[i];
            }
            else counter2 += a[i];

        }
        if(counter1 > counter2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}