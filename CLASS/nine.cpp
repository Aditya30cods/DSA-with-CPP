#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    // Put zeros at the end
    while (j < n) {
        a[j] = 0;
        j++;
    }

    // Print array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}