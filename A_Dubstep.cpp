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
#define c1 int counter = 1
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
    string s1;
    cin >> s1;

    string s2;

    for (int i = 0; i < s1.size(); )
    {
        if (s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            if (!s2.empty())
            {
                s2 += ' ';
            }
            while (i < s1.size() && !(s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B'))
            {
                s2 += s1[i];
                i++;
            }
        }
    }

    cout << s2 << endl;

}