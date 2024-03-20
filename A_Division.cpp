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
 
        if(n >= 1900) cout << "Division 1" << endl;
        else if(n <= 1899 && n >= 1600) cout << "Division 2" << endl;
        else if(n <= 1599 && n >= 1400) cout << "Division 3" << endl;
        else if(n <= 1399) cout << "Division 4" << endl;
    }
 
}