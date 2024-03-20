#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int n = 0;
        n = c + abs(c - b);

        if(a < n)
        {
            cout << 1 << endl;
        }
        else if(a == n)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 2 << endl;
        }

    }
}