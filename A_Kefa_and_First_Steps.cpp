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
    int n;
    cin >> n;

    vector<int>v;
    vector<int>a;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    if(n == 1) cout << 1 << endl;
    else
    {
        c1;

        for(int i = 0; i < n - 1; i++)
        {
            if(v[i] <= v[i + 1])
            {
                cc;
                a.push_back(counter);
            }

            else if(v[i + 1] < v[i])
            {
                counter = 1;
                a.push_back(counter);
            }
        }
        sort(a.begin(), a.end());

        cout << a[a.size() - 1] << endl;
    }
}