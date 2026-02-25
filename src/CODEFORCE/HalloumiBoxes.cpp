//
// Created by Kishi Kishore N on 25/02/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>& list);
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> list(n);
        for (int i=0; i<n; i++) {
            int element;
            cin>>element;
            list.push_back(element);
        }
        int sort = isSorted(list);
        if (sort) {
            cout<<"YES"<<endl;
        }else {
            if (k>1) {
                cout<<"Yes"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
        }

    }
}

bool isSorted(vector<int>& list) {
    int n= list.size();
    for (int i=1; i<n; i++) {
        if (list[i-1] >list[i]) {
            return false;
        }
    }
    return true;
}