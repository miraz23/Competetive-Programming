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
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        cout << 2 * (k - (n + 1) / 2) << endl;
    }
}