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
#define c1 int count = 1
#define c1 int count = 1
#define s0 long long sum = 0
#define a0 long long ans = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
#define cv cout << v[i] << " "
#define ce cout << endl
using namespace std;

int main()
{
    push;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        sac;
        f1;
        c1;

        if (v[0] == v[n - 1])
        {
            minus;
        }
        else
        {
            for(int i = 1; i < n; i++)
            {
                if(v[0] % v[i] == 0)
                {
                    count++;
                    flag = false;
                }
            }

            if(flag)
            {
                cout << 1 << " ";
                cout << n - 1 << endl;

                cout << v[0] << endl;

                for(int i = 1; i < n; i++)
                {
                    cv;
                }
                ce;
            }
            else 
            {
                cout << count << " ";
                cout <<  n - count << endl;

                for(int i = 0; i < count; i++)
                {
                    cv;
                }
                ce;
                
                for(int i = count; i < n; i++)
                {
                    cv;
                }
                ce;
            }
        }
    }

    return 0;
}