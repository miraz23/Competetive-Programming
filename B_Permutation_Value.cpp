//WA

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
 
        for(int i = 1; i <= n; i++)
        {
            if(i != 2)
            {
                cout << i << " ";
            }
        }
        cout << 2 << endl;
    }
}