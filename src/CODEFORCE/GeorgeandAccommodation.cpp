//
// Created by Kishi Kishore N on 22/01/26.
//
#include <iostream>

using namespace std;

int main() {
    int count=0;
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        int p,max;
        cin>>p>>max;
        if (p<(max-1)) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}