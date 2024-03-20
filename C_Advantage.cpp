#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int n;
        scanf("%d", &n);
 
        int a[n];
        int max = -1, max_sec = -1;
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
 
            if (max == -1 || a[i] > a[max])
            {
                max_sec = max;
                max = i;
            }
            else if(max_sec == -1 || a[i] > a[max_sec])
            {
                max_sec = i;
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            if (i == max)
            {
                cout << a[max] - a[max_sec] << " ";
            }
            else
            {
                cout << a[i] - a[max] << " ";
            }
        }
        cout << endl;
    }
}