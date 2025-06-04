#include "Person.h"

Person::Person() {
    float mWeight = 0.0;
    string mFirstName = "";
    int mAge = 0;
}

Person::Person(float newWeight) {
    mWeight = newWeight;
}

Person::~Person() {

}
/* Person::Person(const string& name, weight) {
      mFirstName = name;
      mWeight = weight;
 }*/
 
  // overload the add operator
  float Person::operator+(const Person& otherPerson) {
      Person person; 

      person.mWeight = this->mWeight + otherPerson.mWeight;
      person.mFirstName = this->mFirstName + otherPerson.mFirstName;

     // return person.getmWeight() + person.getmWeight();
  }
