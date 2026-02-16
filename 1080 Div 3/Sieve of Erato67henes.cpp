#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool ok = false;

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if (val == 67) {
                ok = true;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
