#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        int h[n];
        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];

            int stp = m * k - k;
            int dif = abs(H - h[i]);

            if (dif % k == 0  && stp >= dif && dif > 0)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
}