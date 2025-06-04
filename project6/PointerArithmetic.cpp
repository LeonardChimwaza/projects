#include <iostream>
using namespace std;

   int main() {
    // null pointer
    int* pPointer = nullptr;

    int numberArray[3] = {10, 20, 30};

    // assign address of first element to pointer
    pPointer = numberArray;

    // outputs the address of the first element
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArray[0]: " << numberArray << endl;

    //output the value of the first element using the pointer and indirection
    cout << "Value at pPointer: " << *pPointer << endl;

    // This outputs the value of the second element
    cout << "value at ++pPointer: " << *(++pPointer) << endl;

    // assign address of first element to pointer
    pPointer = numberArray;

    // This outputs the value of the fist element
    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
   }