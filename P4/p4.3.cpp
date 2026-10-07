#include <iostream>
using namespace std;

class Box {
    int w, h, d;

public:
    Box(int w, int h, int d) : w(w), h(h), d(d) {}

    Box() : Box(1, 1, 1) {}

    Box(int s) : Box(s, s, s) {}

    int volume() const {
        return w * h * d;
    }
};

int main() {
    Box a;
    Box b(3);
    Box c(2, 3, 4);

    cout << a.volume() << " " << b.volume() << " " << c.volume();

    return 0;
}