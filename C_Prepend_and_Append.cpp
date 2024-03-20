#include<bits/stdc++.h>
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
 
        int counter = 0;
 
        for(int i = 0, j = n - 1; i < n / 2; i++, j--)
        {
            if(s[i] != s[j])
            {
                counter++;
            }
            else break;
        }
        cout << n - counter * 2 << endl;
    }
}