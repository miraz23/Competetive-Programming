/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define push                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(v.begin(), v.end())
#define sdc sort(v.begin(), v.end(), greater<int>())
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 int count = 0
#define c1 int count = 1
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt cout << count << endl
#define sum cout << sum << endl
using namespace std;

int main()
{
    push;

    vector<int>v;
    
    int a;
    cin >> a;
    v.push_back(a);

    v.push_back(a / 10);
    v.push_back(a % 10 + (a / 100) * 10);

    sort(v.begin(), v.end());

    cout << v[v.size() - 1] << endl;

    return 0;
}