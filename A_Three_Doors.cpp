///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define f1 int flag = 1
#define f0 int flag = 0
#define c0 int counter = 0
#define c1 int counter = 1
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x ;

        int a[3];

        for(int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        if(a[x - 1] == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int n;
            c1;

            n = a[x - 1];

            while(n != 0 && counter <= 2)
            {
                counter++;

                if(a[n - 1] == 0)
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    counter++;
                    n = a[n - 1];
                }
            }
            if(counter == 3)
            {
                cout << "YES" << endl;
            }
        }
    }

}