//
// Created by Kishi Kishore N on 22/02/26.
//
#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        int val;
        cin>>val;
        if (val<=1399) {
            cout<<"Division 4"<<endl;
        }else if (val>=1400 && val<=1599) {
            cout<<"Division 3"<<endl;
        }else if(val>=1600 && val<=1899) {
            cout<<"Division 2"<<endl;
        }else if (val>=1900) {
            cout<<"Division 1"<<endl;
        }
    }

}

