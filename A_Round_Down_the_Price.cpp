///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define in1 cin >> t
#define in2 cin >> n
#define in3 cin >> a[i]
#define in4 cin >> s
#define f1 int flag = 1
#define f0 int flag = 0
#define c0 int counter = 0
#define cc counter++
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt cout << counter << endl
using namespace std;

int main()
{
    int t;
    in1;

    while(t--)
    {
        int n;
        in2;

        ll mul = 1;

        while(mul * 10 <= n)
        {
            mul *= 10;
        }
        cout << n - mul << endl;
    }
}