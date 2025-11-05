//
// Created by Kishi Kishore N on 04/11/25.
//
#include <iostream>
using namespace std;

int main() {
    int size;
    cin>>size;
    int arr[size];
    for (int i=0; i<size; i++) {
        cin >>arr[i];
    }
    for (int i=0; i<size;i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}