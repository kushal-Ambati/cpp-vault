#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    cout << "before swap: " << "a = " << a << " b = " << b << endl;

    swap(a, b);

    cout << "after swap: " << "a = " << a << " b = " << b << endl;

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}