#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int x = 1; x <= t; x++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int num = arr[i];

            for (int j = 2; j * j <= num; j++)
            {
                while (num % j == 0)
                {
                    if(j == k) count++;
                    num /= j;
                }
            }
            if (num > 1)
            {
                if(num == k) count++;
            }   
        }
        cout << "Case " << x << ": " << count << endl;
    }

    return 0;
}
