#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    while(n--)
    {
        string s;
        cin >> s;
 
        int flag = 0;
 
        if(s[0] == 'Y' || s[0] == 'y')
        {
            if(s[1] == 'E' || s[1] == 'e')
            {
                if(s[2] == 'S' || s[2] == 's')
                {
                    flag = 1;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}