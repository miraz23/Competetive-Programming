#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s1 = "codeforces";

    while(t--)
    {
        string s2;
        cin >> s2;

        int counter = 0;

        for(int i = 0; i < 11; i++)
        {
            if(s2[i] != s1[i]) counter++;
        }
        cout << counter << endl;
    }
}