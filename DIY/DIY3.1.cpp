#include <iostream>
using namespace std;

// Volume of cube
int volume(int side)
{
    return side * side * side;
}

// Volume of cuboid
int volume(int length, int breadth, int height)
{
    return length * breadth * height;
}

// Volume of cylinder
double volume(double radius, double height)
{
    return 3.14 * radius * radius * height;
}

int main()
{
    int side = 5;
    int length = 4, breadth = 3, height = 2;
    double radius = 3.0, h = 5.0;

    cout << "Volume of cube = " << volume(side) << endl;
    cout << "Volume of cuboid = " << volume(length, breadth, height) << endl;
    cout << "Volume of cylinder = " << volume(radius, h) << endl;

    return 0;
}