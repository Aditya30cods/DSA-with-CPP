#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // If K > N
    k = k % n;

    // Left rotation
    string ans = s.substr(k) + s.substr(0, k);

    cout << ans;

    return 0;
}