///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define f1 int flag = 1
#define f0 int flag = 0
#define c0 int counter = 0
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        
        c0;

        if(s1[0]!=s1[1]) counter++;
        if(s1[1]!=s2[0] && s1[0]!=s2[0]) counter++;
        if(s1[0]!=s2[1] && s1[1]!=s2[1] && s2[0]!=s2[1]) counter++;
        
        cout << counter << endl;
    }
}