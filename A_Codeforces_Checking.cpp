#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char c;
 
    int n;
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        cin >> c;
 
        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' ||  c == 'c' || c == 'e' || c == 's')
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}