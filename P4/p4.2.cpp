#include <iostream>
#include <cstring>

using namespace std;

class MyString {
    char * data;
    public:
        MyString(const char * S) {
            data = new char[strlen(S) + 1];
            strcpy(data,S);
        }
        
        MyString(const MyString &o) {
            data = new char[strlen(o.data) + 1];
            strcpy(data, o.data);
        }
        
        ~MyString() {delete [] data;}
        void print() const {cout <<data<< endl;}
};

int main() {
    MyString a ("hardware");
    MyString b = a;
    a.print();
    b.print();
    return 0;
}
