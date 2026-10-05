#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;
    int k = 3;
    string ans = "";

    for (int i = 0; i < s.length(); i += k) {
        string chunk = s.substr(i, k);

        if ((i / k) % 2 == 1) {
            reverse(chunk.begin(), chunk.end());
        }

        ans += chunk;
    }

    cout << ans;

    return 0;
}