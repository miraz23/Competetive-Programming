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
 
        int max = 0;
        int max_index = -1;
 
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
 
            if (b > max && a <= 10)
            {
                max = b;
                max_index = i;
            }
        }
 
        cout << max_index << endl;
    }
}