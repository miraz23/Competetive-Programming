//WA

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        int a[n];
 
        int x = n * (n + 1) * 0.5;
 
        a[0] = (x % n) + 1;
 
        for (int i = 1; i < n; i++)
        {
            a[i] = i + 1;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl;
    }
}