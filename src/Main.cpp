//
// Created by Kishi Kishore N on 29/10/25.
//

#include <iostream>

using namespace std;

class Product {

private:
    int x,y;
    static  int s;

public:
    void printValues(int a, int b) {
        x=a;
        y=b;
        cout<<"x="<<x<<" y="<<y<<endl;
    }

};
int Product::s=1;
int main() {
    Product p1,p2;
    p1.printValues(1,2);
    p2.printValues(3,4);

    return 0;
}