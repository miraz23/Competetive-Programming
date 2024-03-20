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
 
        string s;
        cin >> s;
 
        int max = (int)s[0];
 
        for(int i = 0; i < n; i++)
        {
 
            if((int)s[i] > max)
            {
                max = (int)s[i];
            }
        }
 
        int counter = 0;
 
        for(int i = 97; i <= max; i++)
        {
            counter++;
        }
        cout << counter << endl;
 
    }
}