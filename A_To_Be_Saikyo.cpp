///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define vi vector<int>v(n)
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
    int n;
    cin >> n;

    vi;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end());

    if(n == 1)
    {
        cout << 0 << endl;
    }
    else if(v[n - 1] < v[0])
    {
        cout << 0 << endl;
    }
    else if(v[n - 1] > v[0])
    {
        cout << v[n - 1] - v[0] + 1 << endl;
    }
    else cout << 1 << endl;

    return 0;
}
