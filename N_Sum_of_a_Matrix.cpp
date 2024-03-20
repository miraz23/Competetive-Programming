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

int r, c;
int arr1[100][100], arr2[100][100], result[100][100];

void sum(int ri, int ci)
{
    if (ri == r || ci == c)
    {
        return;
    }

    if (ci < c - 1)
    {
        sum(ri, ci + 1);
    }
    else
    {
        sum(ri + 1, 0);
    }

    result[ri][ci] = arr1[ri][ci] + arr2[ri][ci];
}

int main()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {

        for (int x = 0; x < c; x++)
        {
            cin >> arr1[i][x];
        }
    }
    for (int i = 0; i < r; i++)
    {

        for (int x = 0; x < c; x++)
        {
            cin >> arr2[i][x];
        }
    }

    sum(0, 0);

    for (int i = 0; i < r; i++)
    {

        for (int x = 0; x < c; x++)
        {
            cout << result[i][x] << " ";
        }
        cout << endl;
    }
}