#include <iostream>
using namespace std;


 namespace Calculation {
    void calculateTriangleOfArea() {
        double base;
        double height;
        cout << "Enter the base and height of triangle:" <<endl;
        cout << "Base: ";
        cin >> base;
        cin.ignore();
        cout << "Height: ";
        cin >> height;
        cout << "The area of the triangle is: " << (0.5 * base * height) << endl;
    }
    void calculateRectangleArea() {
        double length;
        double width;
        cout << "Enter length and width of the rectangle: " << endl;
        cout << "length: ";
        cin >> length;
        cin.ignore();
        cout << "width: ";
        cin >> width;
        cout << "The area of the rectangle is: " << (length * width) << endl;
    }

    void calculateSquareArea() {
        double side;
        cout << "Enter side length of the square: " << endl;
        cout << "Side: ";
        cin >> side;
        cout << "The area of the Square is: " <<endl;
    }

 }

     int main() {
        while (true) {
            cout << "Choose a shape to calculate the area: "<< endl;
            cout << "1. Triangle\n";
            cout << "2. Rectangle\n";
            cout << "3. Square\n";
            cout << "4. Quit\n";
            cout << "Enter your choice: ";
        int select;
        cin >> select;

         if(select == 4) {
            cout << "Exit the program. ";
               break;
         }
         else if(select == 1) {
             Calculation::calculateTriangleOfArea();
                break; 
         }

        else if(select == 2) {
            Calculation::calculateRectangleArea();
                  break;
        }
        else if(select == 3) {
            Calculation::calculateSquareArea();  
                 break;
        }  
        else{
            cout << "Invalid input. please try again." <<endl;
                     continue;   
        } 
                      
             }
         }
     