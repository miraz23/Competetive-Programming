///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define in1 cin >> t
#define in2 cin >> n
#define in3 cin >> a[i]
#define in4 cin >> s
#define f flag
#define f1 int flag = 1
#define ff1 flag = 1
#define f0 int flag = 0
#define ff0 flag = 0
#define c0 int counter = 0
#define cc counter++
#define c counter
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
        int k = 0;
        
        for(int i = 0; i < n; i++)
        {
            in3;
            if(a[i] == 2) k++;
        }
        if(k == 0) cout << 1 << endl;
        
        else if(k % 2 == 0)
        {
            int k2 = 0;
            
            for(int i = 0; i < n; i++)
            {
                if(a[i] == 2)
                {
                    k2++;
                }
                if(k2 == k / 2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else cout << -1 << endl;

    }
}