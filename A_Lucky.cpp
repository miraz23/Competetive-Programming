#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        string s;
        cin >> s;
 
        int flag = 0;
 
        for(int i = 0; s[i] != '\0'; i++)
        {
            if((int)s[0] + (int)s[1] + (int)s[2] == (int)s[s.size() - 3] + (int)s[s.size() - 2] + (int)s[s.size() - 1])
            {
                flag = 1;
            }
        }
 
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}