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
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    int t = 1;
    cin >> t;

    while (t--)
    {
        vector<char>v(9);
        for (int i = 0; i < 9; i++)
        {
            cin >> v[i];
        }
       
        int countA=0, countB=0, countC=0;
        for (int i = 0; i < 9; i++)
        {
            if(v[i]=='A') countA++;
            if(v[i]=='B') countB++;
            if(v[i]=='C') countC++;
        }
        if(countA!=3) cout << 'A' << endl;
        if(countB!=3) cout << 'B' << endl;
        if(countC!=3) cout << 'C' << endl;
    }

    return 0;
}