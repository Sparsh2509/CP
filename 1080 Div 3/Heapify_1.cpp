#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getRoot(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        bool possible = true;

        for (int i = 1; i <= n; i++) {
            if (getRoot(i) != getRoot(a[i])) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
