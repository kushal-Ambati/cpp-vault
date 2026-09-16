#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() : real(0.0), imag(0.0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    void setData(double r, double i) {
        real = r;
        imag = i;
    }

    void display() const {
        std::cout << real;
        if (imag >= 0) {
            std::cout << " + " << imag << "i";
        } else {
            std::cout << " - " << -imag << "i";
        }
        std::cout << "\n";
    }
};

int main() {
    // Create a small array of complex numbers
    Complex numArr[3];

    // Initialize array values
    numArr[0].setData(3.5, 4.5);
    numArr[1].setData(1.0, -2.0);
    numArr[2].setData(-5.2, 0.0);

    // Print the array contents
    std::cout << "Array of Complex Numbers:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Element [" << i << "]: ";
        numArr[i].display();
    }

    return 0;
}
