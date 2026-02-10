//
// Created by Kishi Kishore N on 10/02/26.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        int last = -1;   // -1 none, 0 took from a, 1 took from b
        int cnt = 0;     // consecutive takes from 'last'
        string c;
        c.reserve(n + m);

        while (i < n && j < m) {
            bool takeA;
            if (a[i] < b[j]) takeA = true;
            else takeA = false;

            // If we would take from the same string again but already hit k, force switch
            if (last == 0 && cnt == k) takeA = false;
            if (last == 1 && cnt == k) takeA = true;

            if (takeA) {
                c.push_back(a[i++]);
                if (last == 0) cnt++;
                else { last = 0; cnt = 1; }
            } else {
                c.push_back(b[j++]);
                if (last == 1) cnt++;
                else { last = 1; cnt = 1; }
            }
        }

        cout << c << "\n";
    }
    return 0;
}



3
6 4 2
aaaaaa
bbbb
5 9 3
caaca
bedededeb
7 7 1
noskill
wxhtzdy
