//
// Created by Kishi Kishore N on 23/01/26.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        // Possible values for a3 derived from the equations
        vector<int> candidates = {
            a1 + a2,
            a4 - a2,
            a5 - a4
        };

        int ans = 0;

        for (int a3 : candidates) {
            int cnt = 0;
            if (a3 == a1 + a2) cnt++;       // i = 1
            if (a4 == a2 + a3) cnt++;       // i = 2
            if (a5 == a3 + a4) cnt++;       // i = 3
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
    return 0;
}
