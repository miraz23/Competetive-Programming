#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumPenalty(vector<int>& a) {
    int n = a.size();
    vector<int> indices(n + 1, -1); // Store the last occurrence index of each element
    vector<int> dp(n + 1, 0); // Store the dynamic programming values

    for (int i = 0; i < n; ++i) {
        dp[i + 1] = dp[i]; // Initialize dp[i+1] with dp[i]
        if (indices[a[i]] != -1) {
            dp[i + 1] = max(dp[i + 1], dp[indices[a[i]]] + 1); // Update dp[i+1] if needed
        }
        indices[a[i]] = i; // Update the last occurrence index of the element
    }

    return n - dp[n]; // Minimum penalty is the total elements minus the maximum increasing subsequence
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int result = minimumPenalty(a);
        cout << result << endl;
    }

    return 0;
}
