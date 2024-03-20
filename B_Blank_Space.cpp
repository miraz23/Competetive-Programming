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

        int counter[n] = {0};

        int j = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] == 0) counter[j]++;

            else if(a[i] == 1) ++j;

        }
        sort(counter, counter + n);
        cout << counter[n - 1] << endl;
    }
}