                                                  /// ////////////////////////////////////
                                                 ///                                  ///
                                                ///                                  ///
                                               ///       Md.Mohiul Islam Miraz      ///
                                              ///                                  ///
                                             ///                                  ///
                                            /// ////////////////////////////////////

#include <bits/stdc++.h>
#define in1 cin >> t
#define in2 cin >> n
#define in3 cin >> a[i]
#define f flag
#define f1 int flag = 1
#define f0 flag = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
        f1;

        for (int i = 0; i < n; i++)
        {
            in3;
        }

        for(int i = 0; i < n - 2; i++)
        {
            if(a[i] % 2 != a[i + 2] % 2)
            {
                f0;
                break;
            }
        }
        if(f) yes;
        else no;

        }
}