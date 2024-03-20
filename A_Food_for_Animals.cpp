#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    
    while(t--)
    {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int flag = 0;

        if (x + y <= a + b + c)
        {
            if (x <= a + c)
            {
                if (y <= b + c)
                {
                    flag = 1;
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}