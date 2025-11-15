//
// Created by Kishi Kishore N on 15/11/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // 1. Creating vectors
    vector<int> v;                 // empty
    vector<int> v2(5);             // size 5 -> all 0
    vector<int> v3(5, 10);         // size 5 -> all 10
    vector<int> v4 = {1, 2, 3, 4}; // initialization list

    cout << "v3 elements: ";
    for (int x : v3) cout << x << " ";
    cout << "\n";

    // 2. push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "v elements after push_back: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 3. Access operations
    cout << "v[0] = " << v[0] << "\n";
    cout << "v.at(1) = " << v.at(1) << "\n";
    cout << "front = " << v.front() << "\n";
    cout << "back  = " << v.back() << "\n\n";

    // 4. pop_back()
    v.pop_back(); // removes 30

    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 5. Insert operations
    v.insert(v.begin(), 100);          // at beginning
    v.insert(v.begin() + 2, 200);      // at index 2

    cout << "After insert: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // Insert multiple
    v.insert(v.end(), {7, 8, 9});

    cout << "After inserting multiple: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 6. Erase operations
    v.erase(v.begin()); // remove first

    cout << "After erase first: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // erase a range
    if (v.size() > 3)
        v.erase(v.begin(), v.begin() + 2);

    cout << "After erase range: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 7. Sort
    vector<int> s = {5, 2, 9, 1, 7};
    sort(s.begin(), s.end());
    cout << "Sorted vector: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    // 8. Reverse
    reverse(s.begin(), s.end());
    cout << "Reversed vector: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    // 9. Find element
    auto it = find(s.begin(), s.end(), 9);
    if (it != s.end()) cout << "9 found in vector\n";
    else cout << "9 not found\n";

    // 10. Swapping vectors
    vector<int> a = {1, 2, 3};
    vector<int> b = {10, 20, 30};

    a.swap(b);

    cout << "After swap a: ";
    for (int x : a) cout << x << " ";
    cout << "\n";

    cout << "After swap b: ";
    for (int x : b) cout << x << " ";
    cout << "\n";

    // 11. Resize
    vector<int> r = {1, 2, 3};
    r.resize(5); // increases size -> adds 0s
    r.resize(2); // cuts elements

    cout << "After resize: ";
    for (int x : r) cout << x << " ";
    cout << "\n";

    // 12. Capacity functions
    cout << "Size of v = " << v.size() << "\n";
    cout << "Capacity of v = " << v.capacity() << "\n";
    cout << "Is v empty? " << (v.empty() ? "Yes" : "No") << "\n";

    return 0;
}