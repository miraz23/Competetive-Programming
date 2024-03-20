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
        
        string s1, s2;
        cin >> s1 >> s2;
        
        int counter = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(s1[i] == 'R' && s2[i] != 'R')
            {
                counter++;
                break;
            }
            else if(s2[i] == 'R' && s1[i] != 'R')
            {
                counter++;
                break;
            }
        }
        if(counter)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}