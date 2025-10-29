#include <iostream>
#include <cstring>

using namespace std;

class book{

private:
    int serial_no;
    char title[30];

public:
    book(int serial_no, const char* title) {
        this->serial_no = serial_no;
        strcpy(this->title,title);
    }


    book(const book &b) {
        this->serial_no = b.serial_no;
        strcpy(this->title, b.title);
    }

    void  set_serial_no(int serial_no) {
        this->serial_no = serial_no;
    }

    void set_title(char* title) {
       strcpy(this->title,title);
    }

    int  get_serial_no() {
        return serial_no;
    }

    char* get_title() {
        return title;
    }

    void display() {
        cout<<"book serial_no:"<<get_serial_no()<<endl;
        cout<<"book title:"<<get_title()<<endl;
    }


};

int main() {
    book b1(12,"jshjdh");
    b1.display();
    book b2 = b1;
    b2.set_serial_no(99);
    b2.set_title("kishi");
    b2.display();
    return 0;
}