//
// Created by Kishi Kishore N on 04/11/25.
//
#include <iostream>
using namespace std;

class complex {
private:
    int real,image;
public:
    void setvalues(int x,int y){real=x;image=y}
    void print() {
        cout<<real<<" "<<"+ "<<image<<" i"<<endl;
    }
};

int main() {

}