//
// Created by Kishi Kishore N on 19/10/25.
//
#include <iostream>
int f(int a,int b) ;
int main() {
    int a =10;
    int b = 10;
    std::cout << f(a,b);
    std::cout<<"a: "<< a;
    std::cout<<"b: "<< a;
}

int f(int a,int b) {
    a =a+ 50;
    b=b+50;
    return a+b;
}