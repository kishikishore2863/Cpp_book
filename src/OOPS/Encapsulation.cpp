//
// Created by Kishi Kishore N on 29/10/25.
//
#include <iostream>

using namespace  std;

class Student {

private:
    char name[30];
    int age;
    int rollNo;
    static char schoolName[30];

public:

    int age1() const {
        return age;
    }

    int roll_no() const {
        return rollNo;
    }

    void set_age(int age) {
        this->age = age;
    }

    void set_roll_no(int roll_no) {
        rollNo = roll_no;
    }


    static const char* display(){
        return schoolName;
    }


};
char Student::schoolName[30]= {"schooler"};

int main() {
    Student s1,s2;
    s1.set_roll_no(1);
    s1.set_age(22);

    s2.set_roll_no(2);
    s2.set_age(50);

    cout << "s1 roll_no = "<<s1.roll_no()<<endl;
    cout << "s1 age = "<<s1.age1()<<endl;

    cout << "s2 roll_no = "<<s2.roll_no()<<endl;
    cout << "s2 age = "<<s2.age1()<<endl;

    cout<<Student::display()<<endl;


}