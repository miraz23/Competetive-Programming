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
#define c0 int counter = 0
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

bool isPrime(long long num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    long long num;
    cin >> num;

    bool start = true;
    if (isPrime(num))
        cout << "(" << num << "^" << 1 << ")";

    else
    {
        for (int i = 2; i < num / 2; i++)
        {

            c0;
            while (num % i == 0)
            {
                counter++;
                num /= i;
            }

            if (counter >= 1)
            {
                if (!start)
                {
                    cout << "*";
                }

                cout << "(" << i << "^" << counter << ")";

                start = false;
            }
        }
        if (num > 1)
            cout << "*" << "(" << num << "^" << 1 << ")";
    }
}