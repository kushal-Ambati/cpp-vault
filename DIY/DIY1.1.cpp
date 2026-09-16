<<<<<<< HEAD
#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 1.0, double w = 1.0) {
        setLength(l);
        setWidth(w);
    }

    // Setters with validation
    void setLength(double l) {
        if (l < 0) {
            throw std::invalid_argument("Length cannot be negative.");
        }
        length = l;
    }

    void setWidth(double w) {
        if (w < 0) {
            throw std::invalid_argument("Width cannot be negative.");
        }
        width = w;
    }

    // Getters
    double getLength() const { return length; }
    double getWidth() const { return width; }

    // Area and Perimeter calculations
    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() 
     {
        Rectangle rect;
        rect.setLength(5.5);
        rect.setWidth(4.0);

        std::cout << "Rectangle Dimensions: " << rect.getLength() << " x " << rect.getWidth() << "\n";
        std::cout << "Area: " << rect.area() << "\n";
        std::cout << "Perimeter: " << rect.perimeter() << "\n";

    }

    
=======
#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 1.0, double w = 1.0) {
        setLength(l);
        setWidth(w);
    }

    // Setters with validation
    void setLength(double l) {
        if (l < 0) {
            throw std::invalid_argument("Length cannot be negative.");
        }
        length = l;
    }

    void setWidth(double w) {
        if (w < 0) {
            throw std::invalid_argument("Width cannot be negative.");
        }
        width = w;
    }

    // Getters
    double getLength() const { return length; }
    double getWidth() const { return width; }

    // Area and Perimeter calculations
    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() 
     {
        Rectangle rect;
        rect.setLength(5.5);
        rect.setWidth(4.0);

        std::cout << "Rectangle Dimensions: " << rect.getLength() << " x " << rect.getWidth() << "\n";
        std::cout << "Area: " << rect.area() << "\n";
        std::cout << "Perimeter: " << rect.perimeter() << "\n";

    }

    
>>>>>>> 3e944c1792d995d6aadcb134291dc6f7f9605a53
   