<<<<<<< HEAD
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
=======
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
>>>>>>> 3e944c1792d995d6aadcb134291dc6f7f9605a53
}