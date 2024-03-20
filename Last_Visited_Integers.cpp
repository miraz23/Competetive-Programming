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
#define c0 int count = 0
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

class Solution
{
public:
    vector<int> lastVisitedIntegers(vector<string> &words)
    {
        vector<int> v;
        vector<int> ans;
        c0;
        for (string i : words)
        {
            if ("prev" == i)
            {
                count++;
                if (count <= v.size())
                {
                    ans.push_back(v[v.size() - count]);
                }
                else
                    ans.push_back(-1);
            }
            else
            {
                v.push_back(stoi(i));
                count = 0;
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
        vector<int> result = Solution(words[i]);
    }

    

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
}