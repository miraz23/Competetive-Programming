#include <bits/stdc++.h>
 
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
        int flag = 0;
 
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        sort(a, a + n);
 
        for(int i = 0; i < n - 2; i++)
        {
            if(a[i] == a[i + 1] && a[i] == a[i + 2])
            {
                flag = 1;
                cout << a[i] << endl;
                break;
            }
            else
            {
                flag = 0;
            }
        }
 
        if(flag == 0)
        {
            cout << "-1" << endl;
        }
 
    }
    return 0;
}