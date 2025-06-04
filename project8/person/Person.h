#pragma once
#include <string>
using namespace std;


 class Person {
     public:
           Person();
           Person(float newWeight);
           Person(const string& name, float weight) :mFirstName(name), mWeight(weight) {}

           ~Person();
           // overload the add operator
           float operator + (const Person& otherPerson);
        
      
      private:
              float mWeight;
              string mFirstName;
              int mAge;     
 };