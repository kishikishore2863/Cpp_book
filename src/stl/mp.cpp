//
// Created by Kishi Kishore N on 18/11/25.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void test();
int main() {
    test();
    return 0;   
}


void test() {
    unordered_map<int,vector<int>> map = {{1,{1,2,3,4}}, {2,{2,3,4}}};
    unordered_map<int,int> map2 = {{2,2},{10,9}};


    cout<<map.contains(2)<<endl;
    cout<<map2[10]<<endl;
    cout<<map2[1]<<endl;
    cout<<map.contains(1)<<endl;
}

void map_doc() {
    // Declaration: C++ supports multiple implementations, but we will be using
    // std::unordered_map. Specify the data type of the keys and values.
    unordered_map<int, int> hashMap1;

    // If you want to initialize it with some key value pairs, use the following syntax:
    unordered_map<int, int> hashMap = {{1, 2}, {5, 3}, {7, 2}};

    // Checking if a key exists: use the following syntax:
    int res =  hashMap.contains(1); // true (1)
    int res2 = hashMap.contains(9); // false (0)

    cout<<res<<endl;
    cout<<res2<<endl;

    // Accessing a value given a key: use square brackets, similar to an array.
    hashMap[5]; // 3

    // Note: if you were to access a key that does not exist, it creates the key with a default value of 0.
    hashMap[342]; // 0

    // Adding or updating a key: use square brackets, similar to an array.
    // If the key already exists, the value will be updated
    hashMap[5] = 6;

    // If the key doesn't exist yet, the key value pair will be inserted
    hashMap[9] = 15;

    // Deleting a key: use the .erase() method.
    hashMap.erase(9);

    // Get size
    hashMap.size(); // 3

    // Iterate over the key value pairs: use the following code.
    // .first gets the key and .second gets the value.
    for (auto const& pair: hashMap) {
        cout << pair.first << " " << pair.second << endl;
    }
}