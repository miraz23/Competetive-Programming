#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, c;
        cin >> n >> c;
 
        int a[n];
        int counter[101] = {0};
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            counter[a[i]]++;
        }
 
        int cost = 0;
 
        for (int i = 0; i < 101; i++)
        {
            if (c <= counter[i])
            {
                cost += c;
            }
            else
            {
                cost += counter[i];
            }
        }
        cout << cost << endl;
    }
}