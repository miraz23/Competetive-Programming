#include <iostream>
using namespace std;

void rec(string s, int i)
{
    if (s.size() == i)
        return;
    else
    {
        cout << s[i] << " ";
        rec(s, i + 1);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        rec(s, 0);
        cout << endl;
    }
    return 0;
}
