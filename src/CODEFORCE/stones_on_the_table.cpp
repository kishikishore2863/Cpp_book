//
// Created by Kishi Kishore N on 31/01/26.
//
#include <iostream>

using namespace std;

int main() {
    int count;
    cin>>count;
    int arr[count];
    for (int i=0; i<count; i++) {
        char c;
        cin>>c;
        if (c == 'R')arr[i]=1;
        if (c == 'G')arr[i]=2;
        if (c == 'B')arr[i]=3;
    }

    int res = 0;
    for (int i=1; i<count; i++) {
        if (arr[i-1] == arr[i])res++;
    }
    cout<<res<<endl;
    return 0;
}