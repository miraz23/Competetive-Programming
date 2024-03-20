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
 
        int a[n + 1];
 
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
 
        for(int i = 1; i <= n; i++)
        {
            cout << n - a[i] + 1 << " ";
        }
        
        cout << endl;
    }
}