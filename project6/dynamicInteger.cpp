#include <iostream>
#include <string>
using namespace std;

  int main() {
    // declare a variable
   // int IntegerVar;
   // string StringString;
     
   // declare dynamic allocate
    int* dynamicInt = new int;
    string* dynamicString = new string;

     // Prompt a user to enter integer and string
     cout << "Enter the integer: " << endl;
     cin >> *dynamicInt;
     cin.ignore();  //  leftover newline

     cout << "Enter the string: " << endl;
     getline(cin, *dynamicString);
     
     
     cout << "The value of the integer: " << endl;
     cout << "The value of the string: " << endl;

     return 0;
  }