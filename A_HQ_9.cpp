///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define sac sort(v.begin(), v.end())
#define sdc sort(v.begin(), v.end(), greater<int>())
#define f1 int flag = 1
#define f0 int flag = 0
#define c0 int counter = 0
#define cc counter++
#define c counter
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt cout << counter << endl
using namespace std;

int main()
{
    string s;
    cin >> s;

    f0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag = 1;
        }
    }

    if(flag) yes;
    else no;
}