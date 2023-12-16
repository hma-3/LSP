#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double radius)
        : radius(radius) {}

    double area() override {
        return 3.14 * radius * radius;
    }

};

class Rectangle : public Shape {
    double width;
    double height;
public:
    Rectangle(double width, double height)
        : width(width), height(height) {}

    double area() override {
        return width * height;
    }
};

void printArea(Shape& shape) {
    cout << "Area: " << shape.area() << endl;
}

int main() {
    return 0;
}
