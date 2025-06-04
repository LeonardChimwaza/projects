#include <iostream>
#include <limits>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    int choice;

    while (true) {
        cout << "\n Area Calculator \n";
        cout << "1. Calculate area of a Square\n";
        cout << "2. Calculate area of a Triangle\n";
        cout << "3. Calculate area of a Circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            clearInput();
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (choice == 4) {
            cout << "Exiting program.\n";
            break;
        }

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;

                Square sq;
                sq.setSideLength(side);

                double area = Area::calculateArea(sq);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case 2: {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;

                Triangle tri;
                tri.setBase(base);
                tri.setHeight(height);

                double area = Area::calculateArea(tri);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                Circle circ;
                circ.setRadius(radius);

                double area = Area::calculateArea(circ);
                cout << "Area of the circle: " << area << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
