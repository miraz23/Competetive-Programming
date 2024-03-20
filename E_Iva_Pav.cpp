#include <iostream>
#include <vector>
using namespace std;

// Function to check if it's possible to reach k from l to r
bool isPossible(vector<int>& a, int l, int r, int k) {
    int result = a[l - 1];
    for (int i = l; i <= r; i++) {
        result &= a[i];
        if (result >= k) {
            return true;
        }
    }
    return false;
}

// Binary search to find the largest r such that al & al+1 & ... & ar >= k
int binarySearch(vector<int>& a, int l, int n, int k) {
    int low = l - 1;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(a, l, mid, k)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int q;
        cin >> q;

        while (q--) {
            int l, k;
            cin >> l >> k;

            int result = binarySearch(a, l, n, k);
            cout << result + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
