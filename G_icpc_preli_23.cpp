#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n, w = 0, r = 0;
        n = s.length();

        for(int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                w++;
            else
                r = r + (s[i] - '0');
        }

        int ov1 = n / 6;
        int ov2 = n % 6;

        if(ov1 > 1)
            cout << ov1 << "." << ov2 << " Overs ";
        else if(ov1 == 1 && ov2 > 0)
            cout << ov1 << "." << ov2 << " Overs ";
        else if(ov1 == 1 && ov2 == 0)
            cout << ov1 << "." << ov2 << " Over ";
        else
            cout << ov1 << "." << ov2 << " Over ";
        if(r > 1)
            cout << r << " Runs ";
        else
            cout << r << " Run ";
        if(w > 1)
            cout << w << " Wickets." << endl;
        else
            cout << w << " Wicket." << endl;
    }

    return 0;
}