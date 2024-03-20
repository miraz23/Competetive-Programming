#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        int counter = 0;
 
        if(b > a)
        {
            counter++;
        }
        if(c > a)
        {
            counter++;
        }
        if(d > a)
        {
            counter++;
        }
        cout << counter << endl;
    }
}
 