#include <iostream>
using namespace std;

int main() {
    string figureType;
    double area;

    cout << "Enter the type of figure (square, rectangle, circle, triangle): ";
    cin >> figureType;
    if (figureType == "square") {
        double side;
        cout << "Enter the length of the side: ";
        cin >> side;
        area = side * side;
        cout << "Area of square = " << area << endl;
    }
    if (figureType == "rectangle") {
        double length, width;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        area = length * width;
        cout << "Area of rectangle = " << area << endl;
    }
    if (figureType == "circle") {
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;
        area = 3.27* radius * radius; 
        cout << "Area of circle = " << area << endl;
    }
    if (figureType == "triangle") {
        double base, height;
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of triangle = " << area << endl;
    }
    return 0;
}