//
// Created by Kishi Kishore N on 25/02/26.
//
#include <iostream>
#include <cstring>

using  namespace std;

void solve() {
    int k, n;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    int leastcount =-1000;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            if (leastcount<i-k+1) {
                count++;
            }
            leastcount=i;
        }

    }
    cout << count << endl;
}

int main() {
    int input;
    cin>>input;
    while (input--) {
        solve();
    }
    return 0;
}

