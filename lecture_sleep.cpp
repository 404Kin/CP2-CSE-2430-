#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), t(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    int base = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 1) {
            base += a[i];
        }
    }

    int maxGain = 0;
    int currentGain = 0;

    for (int i = 0; i < k; i++) {
        if (t[i] == 0) {
            currentGain += a[i];
        }
    }
    maxGain = currentGain;

    for (int i = k; i < n; i++) {
        if (t[i - k] == 0) {
            currentGain -= a[i - k];
        }
        if (t[i] == 0) {
            currentGain += a[i];
        }
        maxGain = max(maxGain, currentGain);
    }

    cout << base + maxGain << endl;

    return 0;
}
