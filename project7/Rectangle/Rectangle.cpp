#pragma once
#include "Rectangle.h"

 Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
 }

  void Rectangle::setLength(float leng) {
       length = leng;
  }

    void Rectangle::setWidth(float wid) {
        width = wid;
    }

    void Rectangle::getLength() const {
         
    }

    void Rectangle::getWidth() const const {
          
    }

    float Rectangle::CalculateArea(float length, float width) {
      return length * width;
    }

    Rectangle::~Rectangle() {

    }
    Rectangle::Rectangle(float leng, float wid) {
       leng = length;
       wid = width;
    }