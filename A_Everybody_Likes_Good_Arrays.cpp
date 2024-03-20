//////////////////////////////////////
//                                  //
//                                  //
//      Md.Mohiul Islam Miraz       //
//                                  //
//                                  //
//////////////////////////////////////

#include<bits/stdc++.h>
#define in1 cin >> t
#define in2 cin >> n
#define in3 cin >> a[i]
#define in4 cin >> s
#define f flag
#define f1 int flag = 1
#define f0 flag = 0
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

        int a[n];
        c0;

        for(int i = 0; i < n; i++)
        {
            in3;
        }

        for(int i = 0; i < n - 1; i++)
        {
            if((a[i] % 2 == 0 && a[i + 1] % 2 == 0)|| (a[i] % 2 == 1 && a[i + 1] % 2 == 1))
            {
                int temp = 0;
                temp = (a[i] * a[i + 1]);
                a[i] = temp;
                cc;
            }
        }
        cnt;

    }
}