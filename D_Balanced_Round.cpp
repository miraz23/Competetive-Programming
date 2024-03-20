#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
 
        int a[n];
 
        for(long long int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
 
        int i = 0;
        long long int counter = 0;
 
        sort(a, a + n);
 
        while(i < n)
        {
            int j = i + 1;
 
            while(j < n)
            {
                if(a[j] - a[j - 1] > k)
                {
                    break;
                }
                
                j += 1;
            }
            
            long long result = j - i;
 
            counter = max(counter, result);
 
            i = j;
        }
        cout << n - counter << endl;
    }
}