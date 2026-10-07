#include <iostream>
using namespace std;

class Widget
{
    int id;
    static int count;

public:
    Widget()
    {
        id = ++count;
        cout << "Created W" << id << endl;
    }

    ~Widget()
    {
        --count;
        cout << "Destroyed W" << id << endl;
    }

    static int alive()
    {
        return count;
    }
};
int Widget::count = 0;

int main()
{
    Widget a, b;

    cout << "Alive = " << Widget::alive() << endl;

    {
        Widget c;
        cout << "Alive = " << Widget::alive() << endl;
    }

    cout << "Alive = " << Widget::alive() << endl;

    return 0;
}