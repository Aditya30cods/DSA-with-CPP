#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], position[n];

    // Input marks
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find position of each student
    for (int i = 0; i < n; i++) {
        position[i] = 1;

        for (int j = 0; j < n; j++) {
            if (a[j] > a[i]) {
                position[i]++;
            }
        }
    }

    // Print positions
    for (int i = 0; i < n; i++) {
        cout << position[i] << " ";
    }

    return 0;
}