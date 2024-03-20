#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        string n;
        cin >> n;
 
        int len = n.size();
 
        if ((int)(n[len - 1]) % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if ((int)(n[0]) % 2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int res = - 1;
 
            for (int j = 0; j < len; j++)
            {
                if ((int)(n[j]) % 2 == 0)
                {
                    res = 2;
                }
            }
            cout << res << endl;
        }
    }
}