#pragma once
#include <string>

using namespace std;


  class Rectangle {
    public: 
          void setLength(float length);
          void setWidth(float width);
          void getLength() const;
          void getWidth() const;
          float CalculateArea(float length, float width);
          // overloaded constructor
          Rectangle(float length, float width);
          
             // default destructor
             ~Rectangle();
        
             // defualt constructor
          Rectangle() {
            length = 0;
            width = 0;
          }

    private:
           float width;
           float length; 
    
  };