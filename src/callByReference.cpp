//
// Created by Kishi Kishore N on 19/10/25.
//

#include <iostream>

using namespace std;
int f(int &a, int &b) ;

int main() {
    int a=10;
    int b=10;
    int c = f(a,b);
    cout<< "a : "<<a;
    cout<<"b : "<<b;
    
}

int f(int &a, int &b) {
    a = a+50;
    b = b+50;

    return a+b;
}
