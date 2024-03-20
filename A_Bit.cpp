#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
 
        if (s == "++X" || s == "X++")
        {
            count++;
        }
        else if (s == "--X" || s == "X--")
        {
            count--;
        }
    }
    
    cout << count << endl;
}