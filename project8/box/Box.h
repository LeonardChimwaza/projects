#pragma once
#include <iostream>
using namespace std;

  class Box {
      public:
            Box();

            Box(const double newLength, const double newBreadth, const double neewHeight);
           ~Box();
           double GetVolume();
           void setLength(double len);
           void setBreadth(double bre);
           void setHeight(double hei);

           // overload + operator to add two Box objects.
           Box operator + (const Box& b);
      private: 
            double length;     // Length of a box
            double breadth;    // Breadth of a box
            double height;     // Height of a box

  };
