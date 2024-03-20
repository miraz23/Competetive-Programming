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
    int n;
    cin >> n;

    vector<int>v;

    s0;

    for(int  i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);

        sum += v[i];
    }

    sdc;

    int ms = 0;
    int bs = 0;

    c0;

    for(int i = 0; i < n; i++)
    {
        cc;
        ms += v[i];
        bs = sum - ms;

        if (ms > bs)
        {
            break;
        }
    }

    cout << c << endl;
}