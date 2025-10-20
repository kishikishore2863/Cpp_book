#include <iostream>

using namespace  std;

int main() {
    int x=10;
    int &y = x;
    int z =30;
    y = z;
    cout<<"y = "<<y<<" ";

}


