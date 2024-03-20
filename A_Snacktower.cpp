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
    int n;
    cin >> n;
    int arr[100001];
    int c = 0;
    c = n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr[x] = 1;

        if (x == c)
        {
            for (int i = c; i > 0; i--)
            {
                if (arr[i])
                {
                    cout << i << " ";
                    arr[i] = 0;
                    c = i - 1;
                }
                else
                {
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}