#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        string s;
        cin >> s;
 
        string pi = "314159265358979323846264338327";
 
        int counter = 0;
 
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == pi[i])
            {
                counter++;
            }
            else break;
        }
        cout << counter << endl;
    }
}