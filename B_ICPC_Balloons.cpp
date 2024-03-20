#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin>>n;
 
        string s;
        cin >> s;
 
        int counter = 0;
 
        sort(s.begin(), s.end());
 
        for(int i = 0; i < n; i++)
        {
            if(s[i] == s[i - 1])
            {
                counter++;
            }
            else if(s[i] != s[i - 1] || i == 0)
            {
                counter += 2;
            }
 
        }
        cout << counter << endl;
    }
}