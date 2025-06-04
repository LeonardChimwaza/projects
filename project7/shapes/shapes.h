#pragma once
using namespace std;

 namespace Shapes {

    class Square {
        private:
            double sideLength;

        public:
           Square();
           Square(double side);
           ~Square();

           double getSideLength() const;
           void setSideLength(double side);
    }; 

    class Triangle {
        private:
            double base;
            double height;
    
        public:
            Triangle();
            Triangle(double b, double h);
            ~Triangle();
    
            double getBase() const;
            double getHeight() const;
    
            void setBase(double b);
            void setHeight(double h);
        };

    class Circle {
        private:
             double radius;

        public:
            Circle();
            Circle(double r);
            ~Circle();

            double getRadius() const;
            void setRadius(double r);
    };

}  

    
    class Area {
         public:
            static double calculateArea(const shapes::Square& square);
            static double calculateArea(const shapes::Triangle& triangle);
            static double calculateArea(const shapes::Circle& circle);
};






    




 