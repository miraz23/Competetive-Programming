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
 
        int dic = 0;
 
        dic += (s[0] - 'a') * 25;
 
        if(s[1] < s[0])
        {
            dic += s[1] - 'a' + 1;
        }
        else
        {
            dic += s[1] - 'a';
        }
        cout << dic << endl;
    }
}