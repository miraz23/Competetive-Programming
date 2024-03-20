#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;

        int  flag = 0;

        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == s2[0])
            {
                int len = s1.size() - 1;

                if(i % 2 == 0 && (len - i) % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}