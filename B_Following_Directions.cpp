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
 
        int al_lr = 0;
        int al_ud = 0;
 
        int flag = 0;
 
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'U') al_ud ++;
            if(s[i] == 'D') al_ud --;
            if(s[i] == 'R') al_lr ++;
            if(s[i] == 'L') al_lr --;
 
            if(al_ud == 1 && al_lr == 1)
            {
                flag = 1;
                break;
            }
        }
 
        if(flag)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
 
}