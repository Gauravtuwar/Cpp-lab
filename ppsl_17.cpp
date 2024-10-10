#include <iostream>
using namespace std;

class Shape {
public:
    void displayShape() {
        cout << "This is a shape" << endl;
    }
};

class Polygon : public Shape {
public:
    void displayPolygon() {
        cout << "This is a polygon" << endl;
    }
};

class Rectangle : public Polygon {
public:
    void displayRectangle() {
        cout << "Rectangle is a polygon" << endl;
    }
};

class Triangle : public Polygon {
public:
    void displayTriangle() {
        cout << "Triangle is a polygon" << endl;
    }
};

class Square : public Rectangle {
public:
    void displaySquare() {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    Square S1;

    S1.displayShape();
    S1.displayPolygon();
    S1.displayRectangle();
    S1.displaySquare();

    return 0;
}