//
// Created by Kishi Kishore N on 27/01/26.
//
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[26]={0};
    string s;
    cin>>s;
    for (int i=0; i<n; i++) {
        char c = tolower(s[i]);
        arr[c-'a'] =1;
    }

    for (int a:arr) {
        if (a!= 1) {
            cout<<"NO"<<endl;
            exit(0);
        }
    }
    cout<<"YES"<<endl;

}