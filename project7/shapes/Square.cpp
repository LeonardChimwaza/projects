#include "Square.h"

namespace shapes {

    Square::Square() : sideLength(0.0) {}

    Square::Square(double side) : sideLength(side) {}

    Square::~Square() {}

    double Square::getSideLength() const {
        return sideLength;
    }

    void Square::setSideLength(double side) {
        sideLength = side;
    }

}
