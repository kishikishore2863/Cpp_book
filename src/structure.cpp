//
// Created by Kishi Kishore N on 19/10/25.
//
#include <iostream>
using namespace std;

struct student {
    int age;
    char name[20];
    float marks;
};

void printDetails(struct student x);

int main() {
     student s1;
    cout<<"enter age,name and marks";
    cin>>s1.age;
    cin.ignore();
    cin.getline(s1.name,20);
    cin>>s1.marks;

     printDetails(s1);

}

void printDetails(struct student x) {
    cout<<"age :"<<x.age<<" "<<"name : "<<x.name<<" "<<"marks : "<<x.marks<<endl;
}