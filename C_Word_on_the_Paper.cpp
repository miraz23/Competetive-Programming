#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n = 8;
        string s1, s2;
 
        while(n--)
        {
            cin >> s1;
 
            for(int i = 0; i < s1.size(); i++)
            {
                if(s1[i] != '.')
                {
                    s2 += s1[i];
                }
            }
        }
        cout << s2 << endl;
    }
}