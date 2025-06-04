#include <iostream>
#include "Rectangle.h"
using namespace std;


  int main() {
    float wid, leng;   // float variables
    Rectangle rectangle;   // instance 
    Rectangle rect;   // new instance

    // prompt a user to enter input
    cout << "Enter the length: " <<endl;
    cin >> leng;
    cout << "Enter the width:  " <<endl;
    cin >> wid;

    rectangle.setLength(leng);
    rectangle.setWidth(wid);
    
      // overloaded constructor
      rect.setLength(leng);
      rect.setWidth(wid);

      // call the overloaded constructors
          rect = Rectangle(leng, wid);
    cout << "The area of the rectangle is: " << rectangle.CalculateArea(leng, wid)<<endl;
    cout << "The new area of the rectangle is: " << rect.CalculateArea(leng, wid) << endl;
    return 0;

  }